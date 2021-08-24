
#include "cfdv33.hxx"
//#include "catCFDI.hxx"
#include "tdCFDI.hxx"
#include "ssl_functions.hpp" 

#include <xercesc/util/PlatformUtils.hpp>
#include <xalanc/Include/PlatformDefinitions.hpp>
#include <xalanc/XalanTransformer/XalanTransformer.hpp>
//#include <xalanc/XalanTransformer/XalanParsedSource.hpp>
#include <xalanc/XalanTransformer/XalanCAPI.h>

#include <sstream>
#include <iostream>
#include <fstream>
#include <ctime>

XERCES_CPP_NAMESPACE_USE

using namespace CFD_33;
using namespace sitio_internet::cfd::catalogos;
using namespace sitio_internet::cfd::tipoDatos::tdCFDI;

using xercesc::XMLPlatformUtils;
using xalanc::XalanTransformer;
using xalanc::XSLTInputSource;
using xalanc::XSLTResultTarget;
using xalanc::XalanDOMString;

void createXML(Comprobante oComprobante, const char* xmlname);
char* transformXSLT(const char* xml_input, const char* xsl_input, const char* xml_output);
Comprobante::Fecha_type getDate();

int main(){
    const char* m_priv_key = "cers/CSD_XOCHILT_CASAS_CHAVEZ_2_CACX7605101P8_20190617_181215.key";
    const char* m_password = "12345678a";

    Emisor oEmisor          = Emisor(       "PEPE080801JH1"  , "605" );
    Receptor oReceptor      = Receptor(     "hkghk"          , "D01" );

    oEmisor.Nombre       (   "Una Razón"   );
    oReceptor.Nombre     (   "Pepe"        );


    Cantidad              cantidad  = Cantidad(10);
    Descripcion           desc      = Descripcion("Esta es la descripción");
    Parte::
    ValorUnitario_type    valor     = 10;
    t_Importe             importe   = 10; 
    

    Conceptos::
    Concepto_sequence     conceptosList;

    conceptosList.push_back (
        Concepto(
            "01010101" ,
            cantidad,
            "05",
            desc,
            valor,
            importe
        ));
    
    Conceptos                     oConceptos      = Conceptos();

    oConceptos.Concepto(conceptosList);

    DCert cer_info = s_readCER("cers/CSD_XOCHILT_CASAS_CHAVEZ_2_CACX7605101P8_20190617_181215s.cer");

    Sello               oSello            = Sello();
    NoCertificado       oNoCertificado    = NoCertificado(cer_info.serial_number);
    Certificado         oCertificado      = Certificado();
    

    Comprobante::Emisor_type      emisor_type       = oEmisor;
    Comprobante::Receptor_type    receptor_type     = oReceptor;
    Comprobante::Conceptos_type   conceptos_type    = oConceptos;
    Comprobante::Fecha_type       fecha             = getDate();
    Comprobante::
    TipoDeComprobante_type        tipo_comprobante  = "I" ;
    Comprobante::
    LugarExpedicion_type          lugarExpedicion   = "79020";
    Comprobante::SubTotal_type    subtotal          = 10;
    c_Moneda                      moneda            = "MXN";
    Comprobante::Total_type       total             = 12;

    Comprobante oComprobante = Comprobante(
        emisor_type ,
        receptor_type,
        conceptos_type,
        fecha,
        oSello,
        oNoCertificado,
        oCertificado,
        subtotal,
        moneda,
        total,
        tipo_comprobante ,
        lugarExpedicion
    );

    	
    createXML(oComprobante, "test.xml");

    char* m_cadena = transformXSLT("test.xml", "assets/cadenaoriginal1.xslt", "foo-out.xml");
    if(m_cadena != NULL) {
        std::cout << m_cadena << std::endl;
        char* m_encrypted_cad = s_encryptSHA256(m_cadena);
        
        if(m_encrypted_cad)
            s_encryptRSA( m_encrypted_cad, (char*)m_priv_key, (char*)m_password );
        else
            std::cout << "No encrypted cad" << std::endl;

    }

    oComprobante.Certificado(cer_info.encoded);
    
    createXML(oComprobante, "sealed.xml");

    return 0;

}


char* transformXSLT(const char* xml_input, const char* xsl_input, const char* xml_output){

    char* cad_out = NULL;
    std::string str;

    try {
        
        XMLPlatformUtils::Initialize();
        XalanTransformer::initialize();

        {
            XalanTransformer transformer;
            XSLTInputSource  xmlIn(xml_input);
            XSLTInputSource  xslIn(xsl_input);
            std::stringstream  theOutputStream; 

            transformer.setOutputEncoding(XalanDOMString("UTF-8"));
            int res = transformer.transform( xmlIn
                                            ,xslIn
                                            ,XSLTResultTarget(theOutputStream));

            //theOutputStream << '\0';
            str = theOutputStream.str();
            cad_out = (char *)malloc(str.size() + 1);
            memcpy(cad_out, str.c_str(), str.size() + 1);
            
            if( res != 0) {
                std::cerr << "Error: in function transformXSLT():" << std::endl;
                return NULL;
            }

        }

        XalanTransformer::terminate();
        XMLPlatformUtils::Terminate();
        XalanTransformer::ICUCleanUp();

    }   catch(...) {
        std::cerr << "An unknown error occurred!" << std::endl;
        return NULL;
    }

    /*{
        xsltStylesheetPtr cur = NULL;
        xmlDocPtr doc, res;
        int nbparams = 0;

        doc = xmlParseFile("test.xml");
        cur = xsltParseStylesheetFile((const xmlChar *)"assets/cadenaoriginal1.xslt");
        res = xsltApplyStylesheet(cur, doc, NULL);
        xsltSaveResultToFile(stdout, res, cur);

        xsltFreeStylesheet(cur);
	    xmlFreeDoc(res);
	    xmlFreeDoc(doc);

        xsltCleanupGlobals();
        xmlCleanupParser();
        
    }*/

    return cad_out;

}

void createXML(Comprobante oComprobante, const char* xmlname){
    try {
        xercesc::XMLPlatformUtils::Initialize ();
        xml_schema::namespace_infomap map;
        map["cfdi"].name = "http://www.sat.gob.mx/cfd/3";
        map["cfdi"].schema ="http://www.sat.gob.mx/sitio_internet/cfd/3/cfdv33.xsd";
        map["tfd" ].name = "http://www.sat.gob.mx/TimbreFiscalDigital";
        map["xsi" ].name = "http://www.w3.org/2001/XMLSchema-instance";

        std::ofstream ofs(xmlname);
        Comprobante_(ofs, oComprobante, map );
        xercesc::XMLPlatformUtils::Terminate ();

    } catch(const xml_schema::exception& e) {

        std::cerr << e << std::endl;

    }
}

Comprobante::
Fecha_type getDate(){

    time_t ttime = time(0);
    tm* local_time = localtime(&ttime);

    t_FechaH dt(xml_schema::date_time(
        local_time->tm_year + 1900,
        local_time->tm_mon  + 1,
        local_time->tm_mday,
        local_time->tm_hour,
        local_time->tm_min,
        local_time->tm_sec
    ));

    return dt;

}