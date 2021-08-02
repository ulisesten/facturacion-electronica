
#include "cfdv33.hxx"
//#include "catCFDI.hxx"
#include "tdCFDI.hxx"
#include "ssl_functions.hpp" 

#include <xercesc/util/PlatformUtils.hpp>
#include <xalanc/Include/PlatformDefinitions.hpp>
#include <xalanc/XalanTransformer/XalanTransformer.hpp>
#include <xalanc/XalanTransformer/XalanCAPI.h>

#include <iostream>
#include <fstream>
#include <ctime>

XERCES_CPP_NAMESPACE_USE

using namespace CFD_33;
using namespace sitio_internet::cfd::catalogos;
using namespace sitio_internet::cfd::tipoDatos::tdCFDI;

void createXML(Comprobante oComprobante, const char* xmlname);
Comprobante::Fecha_type getDate();

int main(){
    CFD_33::Emisor              oEmisor           = Emisor(       "PEPE080801JH1"  , c_RegimenFiscal::cxx_605 );
    CFD_33::Receptor            oReceptor         = Receptor(     "hkghk"          , c_UsoCFDI::D01 );

    oEmisor.Nombre       (      "Una Razón"   );
    oReceptor.Nombre     (      "Pepe"        );


    Cantidad              cantidad  = Cantidad(10);
    Descripcion           desc      = Descripcion("Esta es la descripción");
    Parte::
    ValorUnitario_type    valor     = 10;
    t_Importe             importe   = 10; 
    

    Conceptos::
    Concepto_sequence     conceptosList;

    conceptosList.push_back (
        Concepto(
            c_ClaveProdServ::cxx_01010101 ,
            cantidad,
            c_ClaveUnidad::cxx_05,
            desc,
            valor,
            importe
        ));
    
    Conceptos                     oConceptos      = Conceptos();

    oConceptos.Concepto(conceptosList);

    DCert cer_info = s_readCER("cers/CSD_XOCHILT_CASAS_CHAVEZ_2_CACX7605101P8_20190617_181215s.cer");

    CFD_33::Sello               oSello            = Sello();
    CFD_33::NoCertificado       oNoCertificado    = NoCertificado(cer_info.serial_number);
    CFD_33::Certificado         oCertificado      = Certificado();
    

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

    CFD_33::Comprobante oComprobante = Comprobante(
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

    try {

        using xercesc::XMLPlatformUtils;
        using xalanc::XalanTransformer;
        using xalanc::XSLTInputSource;
        using xalanc::XSLTResultTarget;
        using xalanc::XalanDOMString;
        

        XMLPlatformUtils::Initialize();
        XalanTransformer::initialize();

        {
            XalanTransformer theXalanTransformer;

            XSLTInputSource  xmlIn("test.xml");
            XSLTInputSource  xslIn("assets/cadenaoriginal1.xslt");
            XSLTResultTarget xmlOut("foo-out.xml");
            XalanDOMString   encoding("UTF-8");
            
            theXalanTransformer.setOutputEncoding(encoding);

            int theResult =
                theXalanTransformer.transform(xmlIn,xslIn,xmlOut);

            if(theResult != 0) {
                std::cerr << "Error: " << theXalanTransformer.getLastError() << std::endl;
            }

        }

        XalanTransformer::terminate();
        XMLPlatformUtils::Terminate();
        XalanTransformer::ICUCleanUp();

    }   catch(...) {
        std::cerr << "An unknown error occurred!" << std::endl;
    }

    oComprobante.Certificado(cer_info.encoded);
    
    createXML(oComprobante, "sealed.xml");

    return 0;

}

void createXML(Comprobante oComprobante, const char* xmlname){
    try {
        xercesc::XMLPlatformUtils::Initialize ();
        xml_schema::namespace_infomap map;
        map["cfdi"].name = "http://www.sat.gob.mx/cfd/3";
        map["tfd" ].name = "http://www.sat.gob.mx/TimbreFiscalDigital";
        //map["xsi" ].schema ="http://www.sat.gob.mx/sitio_internet/cfd/3/cfdv33.xsd";
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