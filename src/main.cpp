
#include <iostream>
#include "cfdv33.hxx"
//#include "catCFDI.hxx"
#include "tdCFDI.hxx"
#include <fstream>
#include <ctime>
#include <xercesc/util/PlatformUtils.hpp>
#include <xercesc/dom/DOMLSSerializer.hpp>
#include <xercesc/dom/DOM.hpp>
#include <xercesc/framework/StdOutFormatTarget.hpp>
#include <xercesc/framework/LocalFileFormatTarget.hpp>


using namespace XDSToXML;
using namespace sitio_internet::cfd::catalogos;
using namespace sitio_internet::cfd::tipoDatos::tdCFDI;
//using namespace xercesc; //DOM
XERCES_CPP_NAMESPACE_USE

int main(int argc, char* argv[]){
    XDSToXML::Emisor              oEmisor           = Emisor(       "PEPE080801JH1"  , c_RegimenFiscal::cxx_605 );
    XDSToXML::Receptor            oReceptor         = Receptor(     "Rfc_type"       , c_UsoCFDI::D01 );

    oEmisor.Nombre       (        "Una Razón"   );
    oReceptor.Nombre     (        "Pepe"        );

    XDSToXML::Conceptos           oConceptos        = Conceptos();
    /**Conceptos*/

    XDSToXML::Sello               oSello            = Sello("");
    XDSToXML::NoCertificado       oNoCertificado    = NoCertificado("1212121212121212121");
    XDSToXML::Certificado         oCertificado      = Certificado("");

    t_FechaH dt(xml_schema::date_time(2021,06, 14, 35,36, 12312.0 ));

    Comprobante::Emisor_type      emisor_type       = oEmisor;
    Comprobante::Receptor_type    receptor_type     = oReceptor;
    Comprobante::Conceptos_type   conceptos_type    = oConceptos;
    Comprobante::Fecha_type       fecha             = dt;
    Comprobante::
    TipoDeComprobante_type        tipo_comprobante  = "I";
    Comprobante::
    LugarExpedicion_type          lugarExpedicion   = "79020";
    Comprobante::SubTotal_type    subtotal          = 10;
    c_Moneda                      moneda            = "MXN";
    Comprobante::Total_type       total             = 12;

    XDSToXML::Comprobante oComprobante = Comprobante(
        emisor_type ,
        receptor_type,
        conceptos_type,
        dt,
        oSello,
        oNoCertificado,
        oCertificado,
        subtotal,
        moneda,
        total,
        tipo_comprobante ,
        lugarExpedicion
    );

    try {

        xml_schema::namespace_infomap map;
        map[""].schema = "../assets/cadenaoriginal.xslt";

        std::ofstream ofs("test .xml");

        Comprobante_(ofs, oComprobante, map );

    } catch(const xml_schema::exception& e) {
        std::cerr << e << std::endl;
        return 1;
    }

    return 0;

}