// Copyright (c) 2005-2014 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/pre.hxx>

#include "tdCFDI.hpp"

namespace sitio_internet
{
  namespace cfd
  {
    namespace tipoDatos
    {
      namespace tdCFDI
      {
        // t_CURP
        // 


        // t_Importe
        // 


        // t_Fecha
        // 


        // t_ImporteMXN
        // 


        // t_CuentaBancaria
        // 


        // t_RFC
        // 


        // t_RFC_PM
        // 


        // t_RFC_PF
        // 


        // t_FechaHora
        // 


        // t_FechaH
        // 


        // t_Descrip100
        // 


        // t_NumeroDomicilio
        // 


        // t_Referencia
        // 


        // t_Descrip120
        // 


        // t_TipoCambio
        // 
      }
    }
  }
}

#include <xsd/cxx/xml/dom/parsing-source.hxx>

namespace sitio_internet
{
  namespace cfd
  {
    namespace tipoDatos
    {
      namespace tdCFDI
      {
        // t_CURP
        //

        t_CURP::
        t_CURP ()
        : ::xml_schema::string ()
        {
        }

        t_CURP::
        t_CURP (const char* _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_CURP::
        t_CURP (const ::std::string& _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_CURP::
        t_CURP (const ::xml_schema::string& _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_CURP::
        t_CURP (const t_CURP& x,
                ::xml_schema::flags f,
                ::xml_schema::container* c)
        : ::xml_schema::string (x, f, c)
        {
        }

        t_CURP::
        t_CURP (const ::xercesc::DOMElement& e,
                ::xml_schema::flags f,
                ::xml_schema::container* c)
        : ::xml_schema::string (e, f, c)
        {
        }

        t_CURP::
        t_CURP (const ::xercesc::DOMAttr& a,
                ::xml_schema::flags f,
                ::xml_schema::container* c)
        : ::xml_schema::string (a, f, c)
        {
        }

        t_CURP::
        t_CURP (const ::std::string& s,
                const ::xercesc::DOMElement* e,
                ::xml_schema::flags f,
                ::xml_schema::container* c)
        : ::xml_schema::string (s, e, f, c)
        {
        }

        t_CURP* t_CURP::
        _clone (::xml_schema::flags f,
                ::xml_schema::container* c) const
        {
          return new class t_CURP (*this, f, c);
        }

        t_CURP::
        ~t_CURP ()
        {
        }

        // t_Importe
        //

        static const ::xsd::cxx::tree::facet _xsd_t_Importe_facet_table[] = 
        {
          {
            ::xsd::cxx::tree::facet::fraction_digits, 6UL
          },

          {
            ::xsd::cxx::tree::facet::none, 0UL
          }
        };

        t_Importe::
        t_Importe (const ::xml_schema::decimal& _xsd_decimal_base)
        : ::xsd::cxx::tree::fundamental_base< ::xml_schema::decimal, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::decimal > (_xsd_decimal_base)
        {
          this->_facet_table (_xsd_t_Importe_facet_table);
        }

        t_Importe::
        t_Importe (const t_Importe& x,
                   ::xml_schema::flags f,
                   ::xml_schema::container* c)
        : ::xsd::cxx::tree::fundamental_base< ::xml_schema::decimal, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::decimal > (x, f, c)
        {
          this->_facet_table (_xsd_t_Importe_facet_table);
        }

        t_Importe::
        t_Importe (const ::xercesc::DOMElement& e,
                   ::xml_schema::flags f,
                   ::xml_schema::container* c)
        : ::xsd::cxx::tree::fundamental_base< ::xml_schema::decimal, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::decimal > (e, f, c)
        {
          this->_facet_table (_xsd_t_Importe_facet_table);
        }

        t_Importe::
        t_Importe (const ::xercesc::DOMAttr& a,
                   ::xml_schema::flags f,
                   ::xml_schema::container* c)
        : ::xsd::cxx::tree::fundamental_base< ::xml_schema::decimal, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::decimal > (a, f, c)
        {
          this->_facet_table (_xsd_t_Importe_facet_table);
        }

        t_Importe::
        t_Importe (const ::std::string& s,
                   const ::xercesc::DOMElement* e,
                   ::xml_schema::flags f,
                   ::xml_schema::container* c)
        : ::xsd::cxx::tree::fundamental_base< ::xml_schema::decimal, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::decimal > (s, e, f, c)
        {
          this->_facet_table (_xsd_t_Importe_facet_table);
        }

        t_Importe* t_Importe::
        _clone (::xml_schema::flags f,
                ::xml_schema::container* c) const
        {
          return new class t_Importe (*this, f, c);
        }

        t_Importe::
        ~t_Importe ()
        {
        }

        // t_Fecha
        //

        t_Fecha::
        t_Fecha (const ::xml_schema::date& _xsd_date_base)
        : ::xml_schema::date (_xsd_date_base)
        {
        }

        t_Fecha::
        t_Fecha (const t_Fecha& x,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
        : ::xml_schema::date (x, f, c)
        {
        }

        t_Fecha::
        t_Fecha (const ::xercesc::DOMElement& e,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
        : ::xml_schema::date (e, f, c)
        {
        }

        t_Fecha::
        t_Fecha (const ::xercesc::DOMAttr& a,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
        : ::xml_schema::date (a, f, c)
        {
        }

        t_Fecha::
        t_Fecha (const ::std::string& s,
                 const ::xercesc::DOMElement* e,
                 ::xml_schema::flags f,
                 ::xml_schema::container* c)
        : ::xml_schema::date (s, e, f, c)
        {
        }

        t_Fecha* t_Fecha::
        _clone (::xml_schema::flags f,
                ::xml_schema::container* c) const
        {
          return new class t_Fecha (*this, f, c);
        }

        t_Fecha::
        ~t_Fecha ()
        {
        }

        // t_ImporteMXN
        //

        static const ::xsd::cxx::tree::facet _xsd_t_ImporteMXN_facet_table[] = 
        {
          {
            ::xsd::cxx::tree::facet::fraction_digits, 2UL
          },

          {
            ::xsd::cxx::tree::facet::none, 0UL
          }
        };

        t_ImporteMXN::
        t_ImporteMXN (const ::xml_schema::decimal& _xsd_decimal_base)
        : ::xsd::cxx::tree::fundamental_base< ::xml_schema::decimal, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::decimal > (_xsd_decimal_base)
        {
          this->_facet_table (_xsd_t_ImporteMXN_facet_table);
        }

        t_ImporteMXN::
        t_ImporteMXN (const t_ImporteMXN& x,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
        : ::xsd::cxx::tree::fundamental_base< ::xml_schema::decimal, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::decimal > (x, f, c)
        {
          this->_facet_table (_xsd_t_ImporteMXN_facet_table);
        }

        t_ImporteMXN::
        t_ImporteMXN (const ::xercesc::DOMElement& e,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
        : ::xsd::cxx::tree::fundamental_base< ::xml_schema::decimal, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::decimal > (e, f, c)
        {
          this->_facet_table (_xsd_t_ImporteMXN_facet_table);
        }

        t_ImporteMXN::
        t_ImporteMXN (const ::xercesc::DOMAttr& a,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
        : ::xsd::cxx::tree::fundamental_base< ::xml_schema::decimal, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::decimal > (a, f, c)
        {
          this->_facet_table (_xsd_t_ImporteMXN_facet_table);
        }

        t_ImporteMXN::
        t_ImporteMXN (const ::std::string& s,
                      const ::xercesc::DOMElement* e,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
        : ::xsd::cxx::tree::fundamental_base< ::xml_schema::decimal, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::decimal > (s, e, f, c)
        {
          this->_facet_table (_xsd_t_ImporteMXN_facet_table);
        }

        t_ImporteMXN* t_ImporteMXN::
        _clone (::xml_schema::flags f,
                ::xml_schema::container* c) const
        {
          return new class t_ImporteMXN (*this, f, c);
        }

        t_ImporteMXN::
        ~t_ImporteMXN ()
        {
        }

        // t_CuentaBancaria
        //

        t_CuentaBancaria::
        t_CuentaBancaria (const ::xml_schema::integer& _xsd_integer_base)
        : ::xsd::cxx::tree::fundamental_base< ::xml_schema::integer, char, ::xml_schema::simple_type > (_xsd_integer_base)
        {
        }

        t_CuentaBancaria::
        t_CuentaBancaria (const t_CuentaBancaria& x,
                          ::xml_schema::flags f,
                          ::xml_schema::container* c)
        : ::xsd::cxx::tree::fundamental_base< ::xml_schema::integer, char, ::xml_schema::simple_type > (x, f, c)
        {
        }

        t_CuentaBancaria::
        t_CuentaBancaria (const ::xercesc::DOMElement& e,
                          ::xml_schema::flags f,
                          ::xml_schema::container* c)
        : ::xsd::cxx::tree::fundamental_base< ::xml_schema::integer, char, ::xml_schema::simple_type > (e, f, c)
        {
        }

        t_CuentaBancaria::
        t_CuentaBancaria (const ::xercesc::DOMAttr& a,
                          ::xml_schema::flags f,
                          ::xml_schema::container* c)
        : ::xsd::cxx::tree::fundamental_base< ::xml_schema::integer, char, ::xml_schema::simple_type > (a, f, c)
        {
        }

        t_CuentaBancaria::
        t_CuentaBancaria (const ::std::string& s,
                          const ::xercesc::DOMElement* e,
                          ::xml_schema::flags f,
                          ::xml_schema::container* c)
        : ::xsd::cxx::tree::fundamental_base< ::xml_schema::integer, char, ::xml_schema::simple_type > (s, e, f, c)
        {
        }

        t_CuentaBancaria* t_CuentaBancaria::
        _clone (::xml_schema::flags f,
                ::xml_schema::container* c) const
        {
          return new class t_CuentaBancaria (*this, f, c);
        }

        t_CuentaBancaria::
        ~t_CuentaBancaria ()
        {
        }

        // t_RFC
        //

        t_RFC::
        t_RFC ()
        : ::xml_schema::string ()
        {
        }

        t_RFC::
        t_RFC (const char* _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_RFC::
        t_RFC (const ::std::string& _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_RFC::
        t_RFC (const ::xml_schema::string& _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_RFC::
        t_RFC (const t_RFC& x,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
        : ::xml_schema::string (x, f, c)
        {
        }

        t_RFC::
        t_RFC (const ::xercesc::DOMElement& e,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
        : ::xml_schema::string (e, f, c)
        {
        }

        t_RFC::
        t_RFC (const ::xercesc::DOMAttr& a,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
        : ::xml_schema::string (a, f, c)
        {
        }

        t_RFC::
        t_RFC (const ::std::string& s,
               const ::xercesc::DOMElement* e,
               ::xml_schema::flags f,
               ::xml_schema::container* c)
        : ::xml_schema::string (s, e, f, c)
        {
        }

        t_RFC* t_RFC::
        _clone (::xml_schema::flags f,
                ::xml_schema::container* c) const
        {
          return new class t_RFC (*this, f, c);
        }

        t_RFC::
        ~t_RFC ()
        {
        }

        // t_RFC_PM
        //

        t_RFC_PM::
        t_RFC_PM ()
        : ::xml_schema::string ()
        {
        }

        t_RFC_PM::
        t_RFC_PM (const char* _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_RFC_PM::
        t_RFC_PM (const ::std::string& _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_RFC_PM::
        t_RFC_PM (const ::xml_schema::string& _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_RFC_PM::
        t_RFC_PM (const t_RFC_PM& x,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
        : ::xml_schema::string (x, f, c)
        {
        }

        t_RFC_PM::
        t_RFC_PM (const ::xercesc::DOMElement& e,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
        : ::xml_schema::string (e, f, c)
        {
        }

        t_RFC_PM::
        t_RFC_PM (const ::xercesc::DOMAttr& a,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
        : ::xml_schema::string (a, f, c)
        {
        }

        t_RFC_PM::
        t_RFC_PM (const ::std::string& s,
                  const ::xercesc::DOMElement* e,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
        : ::xml_schema::string (s, e, f, c)
        {
        }

        t_RFC_PM* t_RFC_PM::
        _clone (::xml_schema::flags f,
                ::xml_schema::container* c) const
        {
          return new class t_RFC_PM (*this, f, c);
        }

        t_RFC_PM::
        ~t_RFC_PM ()
        {
        }

        // t_RFC_PF
        //

        t_RFC_PF::
        t_RFC_PF ()
        : ::xml_schema::string ()
        {
        }

        t_RFC_PF::
        t_RFC_PF (const char* _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_RFC_PF::
        t_RFC_PF (const ::std::string& _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_RFC_PF::
        t_RFC_PF (const ::xml_schema::string& _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_RFC_PF::
        t_RFC_PF (const t_RFC_PF& x,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
        : ::xml_schema::string (x, f, c)
        {
        }

        t_RFC_PF::
        t_RFC_PF (const ::xercesc::DOMElement& e,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
        : ::xml_schema::string (e, f, c)
        {
        }

        t_RFC_PF::
        t_RFC_PF (const ::xercesc::DOMAttr& a,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
        : ::xml_schema::string (a, f, c)
        {
        }

        t_RFC_PF::
        t_RFC_PF (const ::std::string& s,
                  const ::xercesc::DOMElement* e,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
        : ::xml_schema::string (s, e, f, c)
        {
        }

        t_RFC_PF* t_RFC_PF::
        _clone (::xml_schema::flags f,
                ::xml_schema::container* c) const
        {
          return new class t_RFC_PF (*this, f, c);
        }

        t_RFC_PF::
        ~t_RFC_PF ()
        {
        }

        // t_FechaHora
        //

        t_FechaHora::
        t_FechaHora (const ::xml_schema::date_time& _xsd_date_time_base)
        : ::xml_schema::date_time (_xsd_date_time_base)
        {
        }

        t_FechaHora::
        t_FechaHora (const t_FechaHora& x,
                     ::xml_schema::flags f,
                     ::xml_schema::container* c)
        : ::xml_schema::date_time (x, f, c)
        {
        }

        t_FechaHora::
        t_FechaHora (const ::xercesc::DOMElement& e,
                     ::xml_schema::flags f,
                     ::xml_schema::container* c)
        : ::xml_schema::date_time (e, f, c)
        {
        }

        t_FechaHora::
        t_FechaHora (const ::xercesc::DOMAttr& a,
                     ::xml_schema::flags f,
                     ::xml_schema::container* c)
        : ::xml_schema::date_time (a, f, c)
        {
        }

        t_FechaHora::
        t_FechaHora (const ::std::string& s,
                     const ::xercesc::DOMElement* e,
                     ::xml_schema::flags f,
                     ::xml_schema::container* c)
        : ::xml_schema::date_time (s, e, f, c)
        {
        }

        t_FechaHora* t_FechaHora::
        _clone (::xml_schema::flags f,
                ::xml_schema::container* c) const
        {
          return new class t_FechaHora (*this, f, c);
        }

        t_FechaHora::
        ~t_FechaHora ()
        {
        }

        // t_FechaH
        //

        t_FechaH::
        t_FechaH (const ::xml_schema::date_time& _xsd_date_time_base)
        : ::xml_schema::date_time (_xsd_date_time_base)
        {
        }

        t_FechaH::
        t_FechaH (const t_FechaH& x,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
        : ::xml_schema::date_time (x, f, c)
        {
        }

        t_FechaH::
        t_FechaH (const ::xercesc::DOMElement& e,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
        : ::xml_schema::date_time (e, f, c)
        {
        }

        t_FechaH::
        t_FechaH (const ::xercesc::DOMAttr& a,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
        : ::xml_schema::date_time (a, f, c)
        {
        }

        t_FechaH::
        t_FechaH (const ::std::string& s,
                  const ::xercesc::DOMElement* e,
                  ::xml_schema::flags f,
                  ::xml_schema::container* c)
        : ::xml_schema::date_time (s, e, f, c)
        {
        }

        t_FechaH* t_FechaH::
        _clone (::xml_schema::flags f,
                ::xml_schema::container* c) const
        {
          return new class t_FechaH (*this, f, c);
        }

        t_FechaH::
        ~t_FechaH ()
        {
        }

        // t_Descrip100
        //

        t_Descrip100::
        t_Descrip100 ()
        : ::xml_schema::string ()
        {
        }

        t_Descrip100::
        t_Descrip100 (const char* _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_Descrip100::
        t_Descrip100 (const ::std::string& _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_Descrip100::
        t_Descrip100 (const ::xml_schema::string& _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_Descrip100::
        t_Descrip100 (const t_Descrip100& x,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
        : ::xml_schema::string (x, f, c)
        {
        }

        t_Descrip100::
        t_Descrip100 (const ::xercesc::DOMElement& e,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
        : ::xml_schema::string (e, f, c)
        {
        }

        t_Descrip100::
        t_Descrip100 (const ::xercesc::DOMAttr& a,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
        : ::xml_schema::string (a, f, c)
        {
        }

        t_Descrip100::
        t_Descrip100 (const ::std::string& s,
                      const ::xercesc::DOMElement* e,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
        : ::xml_schema::string (s, e, f, c)
        {
        }

        t_Descrip100* t_Descrip100::
        _clone (::xml_schema::flags f,
                ::xml_schema::container* c) const
        {
          return new class t_Descrip100 (*this, f, c);
        }

        t_Descrip100::
        ~t_Descrip100 ()
        {
        }

        // t_NumeroDomicilio
        //

        t_NumeroDomicilio::
        t_NumeroDomicilio ()
        : ::xml_schema::string ()
        {
        }

        t_NumeroDomicilio::
        t_NumeroDomicilio (const char* _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_NumeroDomicilio::
        t_NumeroDomicilio (const ::std::string& _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_NumeroDomicilio::
        t_NumeroDomicilio (const ::xml_schema::string& _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_NumeroDomicilio::
        t_NumeroDomicilio (const t_NumeroDomicilio& x,
                           ::xml_schema::flags f,
                           ::xml_schema::container* c)
        : ::xml_schema::string (x, f, c)
        {
        }

        t_NumeroDomicilio::
        t_NumeroDomicilio (const ::xercesc::DOMElement& e,
                           ::xml_schema::flags f,
                           ::xml_schema::container* c)
        : ::xml_schema::string (e, f, c)
        {
        }

        t_NumeroDomicilio::
        t_NumeroDomicilio (const ::xercesc::DOMAttr& a,
                           ::xml_schema::flags f,
                           ::xml_schema::container* c)
        : ::xml_schema::string (a, f, c)
        {
        }

        t_NumeroDomicilio::
        t_NumeroDomicilio (const ::std::string& s,
                           const ::xercesc::DOMElement* e,
                           ::xml_schema::flags f,
                           ::xml_schema::container* c)
        : ::xml_schema::string (s, e, f, c)
        {
        }

        t_NumeroDomicilio* t_NumeroDomicilio::
        _clone (::xml_schema::flags f,
                ::xml_schema::container* c) const
        {
          return new class t_NumeroDomicilio (*this, f, c);
        }

        t_NumeroDomicilio::
        ~t_NumeroDomicilio ()
        {
        }

        // t_Referencia
        //

        t_Referencia::
        t_Referencia ()
        : ::xml_schema::string ()
        {
        }

        t_Referencia::
        t_Referencia (const char* _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_Referencia::
        t_Referencia (const ::std::string& _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_Referencia::
        t_Referencia (const ::xml_schema::string& _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_Referencia::
        t_Referencia (const t_Referencia& x,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
        : ::xml_schema::string (x, f, c)
        {
        }

        t_Referencia::
        t_Referencia (const ::xercesc::DOMElement& e,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
        : ::xml_schema::string (e, f, c)
        {
        }

        t_Referencia::
        t_Referencia (const ::xercesc::DOMAttr& a,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
        : ::xml_schema::string (a, f, c)
        {
        }

        t_Referencia::
        t_Referencia (const ::std::string& s,
                      const ::xercesc::DOMElement* e,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
        : ::xml_schema::string (s, e, f, c)
        {
        }

        t_Referencia* t_Referencia::
        _clone (::xml_schema::flags f,
                ::xml_schema::container* c) const
        {
          return new class t_Referencia (*this, f, c);
        }

        t_Referencia::
        ~t_Referencia ()
        {
        }

        // t_Descrip120
        //

        t_Descrip120::
        t_Descrip120 ()
        : ::xml_schema::string ()
        {
        }

        t_Descrip120::
        t_Descrip120 (const char* _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_Descrip120::
        t_Descrip120 (const ::std::string& _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_Descrip120::
        t_Descrip120 (const ::xml_schema::string& _xsd_string_base)
        : ::xml_schema::string (_xsd_string_base)
        {
        }

        t_Descrip120::
        t_Descrip120 (const t_Descrip120& x,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
        : ::xml_schema::string (x, f, c)
        {
        }

        t_Descrip120::
        t_Descrip120 (const ::xercesc::DOMElement& e,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
        : ::xml_schema::string (e, f, c)
        {
        }

        t_Descrip120::
        t_Descrip120 (const ::xercesc::DOMAttr& a,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
        : ::xml_schema::string (a, f, c)
        {
        }

        t_Descrip120::
        t_Descrip120 (const ::std::string& s,
                      const ::xercesc::DOMElement* e,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
        : ::xml_schema::string (s, e, f, c)
        {
        }

        t_Descrip120* t_Descrip120::
        _clone (::xml_schema::flags f,
                ::xml_schema::container* c) const
        {
          return new class t_Descrip120 (*this, f, c);
        }

        t_Descrip120::
        ~t_Descrip120 ()
        {
        }

        // t_TipoCambio
        //

        static const ::xsd::cxx::tree::facet _xsd_t_TipoCambio_facet_table[] = 
        {
          {
            ::xsd::cxx::tree::facet::fraction_digits, 6UL
          },

          {
            ::xsd::cxx::tree::facet::none, 0UL
          }
        };

        t_TipoCambio::
        t_TipoCambio (const ::xml_schema::decimal& _xsd_decimal_base)
        : ::xsd::cxx::tree::fundamental_base< ::xml_schema::decimal, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::decimal > (_xsd_decimal_base)
        {
          this->_facet_table (_xsd_t_TipoCambio_facet_table);
        }

        t_TipoCambio::
        t_TipoCambio (const t_TipoCambio& x,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
        : ::xsd::cxx::tree::fundamental_base< ::xml_schema::decimal, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::decimal > (x, f, c)
        {
          this->_facet_table (_xsd_t_TipoCambio_facet_table);
        }

        t_TipoCambio::
        t_TipoCambio (const ::xercesc::DOMElement& e,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
        : ::xsd::cxx::tree::fundamental_base< ::xml_schema::decimal, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::decimal > (e, f, c)
        {
          this->_facet_table (_xsd_t_TipoCambio_facet_table);
        }

        t_TipoCambio::
        t_TipoCambio (const ::xercesc::DOMAttr& a,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
        : ::xsd::cxx::tree::fundamental_base< ::xml_schema::decimal, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::decimal > (a, f, c)
        {
          this->_facet_table (_xsd_t_TipoCambio_facet_table);
        }

        t_TipoCambio::
        t_TipoCambio (const ::std::string& s,
                      const ::xercesc::DOMElement* e,
                      ::xml_schema::flags f,
                      ::xml_schema::container* c)
        : ::xsd::cxx::tree::fundamental_base< ::xml_schema::decimal, char, ::xml_schema::simple_type, ::xsd::cxx::tree::schema_type::decimal > (s, e, f, c)
        {
          this->_facet_table (_xsd_t_TipoCambio_facet_table);
        }

        t_TipoCambio* t_TipoCambio::
        _clone (::xml_schema::flags f,
                ::xml_schema::container* c) const
        {
          return new class t_TipoCambio (*this, f, c);
        }

        t_TipoCambio::
        ~t_TipoCambio ()
        {
        }
      }
    }
  }
}

#include <istream>
#include <xsd/cxx/xml/sax/std-input-source.hxx>
#include <xsd/cxx/tree/error-handler.hxx>

namespace sitio_internet
{
  namespace cfd
  {
    namespace tipoDatos
    {
      namespace tdCFDI
      {
      }
    }
  }
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

