// Copyright (C) 2005-2010 Code Synthesis Tools CC
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

#ifndef SCL_COMMUNICATION_HXX
#define SCL_COMMUNICATION_HXX

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/config.hxx>

#if (XSD_INT_VERSION != 3030000L)
#error XSD runtime version mismatch
#endif

#include <xsd/cxx/pre.hxx>

#ifndef XSD_USE_CHAR
#define XSD_USE_CHAR
#endif

#ifndef XSD_CXX_TREE_USE_CHAR
#define XSD_CXX_TREE_USE_CHAR
#endif

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/types.hxx>

#include <xsd/cxx/xml/error-handler.hxx>

#include <xsd/cxx/xml/dom/auto-ptr.hxx>

#include <xsd/cxx/tree/parsing.hxx>
#include <xsd/cxx/tree/parsing/byte.hxx>
#include <xsd/cxx/tree/parsing/unsigned-byte.hxx>
#include <xsd/cxx/tree/parsing/short.hxx>
#include <xsd/cxx/tree/parsing/unsigned-short.hxx>
#include <xsd/cxx/tree/parsing/int.hxx>
#include <xsd/cxx/tree/parsing/unsigned-int.hxx>
#include <xsd/cxx/tree/parsing/long.hxx>
#include <xsd/cxx/tree/parsing/unsigned-long.hxx>
#include <xsd/cxx/tree/parsing/boolean.hxx>
#include <xsd/cxx/tree/parsing/float.hxx>
#include <xsd/cxx/tree/parsing/double.hxx>
#include <xsd/cxx/tree/parsing/decimal.hxx>

namespace xml_schema
{
  // anyType and anySimpleType.
  //
  typedef ::xsd::cxx::tree::type type;
  typedef ::xsd::cxx::tree::simple_type< type > simple_type;
  typedef ::xsd::cxx::tree::type container;

  // 8-bit
  //
  typedef signed char byte;
  typedef unsigned char unsigned_byte;

  // 16-bit
  //
  typedef short short_;
  typedef unsigned short unsigned_short;

  // 32-bit
  //
  typedef int int_;
  typedef unsigned int unsigned_int;

  // 64-bit
  //
  typedef long long long_;
  typedef unsigned long long unsigned_long;

  // Supposed to be arbitrary-length integral types.
  //
  typedef long long integer;
  typedef long long non_positive_integer;
  typedef unsigned long long non_negative_integer;
  typedef unsigned long long positive_integer;
  typedef long long negative_integer;

  // Boolean.
  //
  typedef bool boolean;

  // Floating-point types.
  //
  typedef float float_;
  typedef double double_;
  typedef double decimal;

  // String types.
  //
  typedef ::xsd::cxx::tree::string< char, simple_type > string;
  typedef ::xsd::cxx::tree::normalized_string< char, string > normalized_string;
  typedef ::xsd::cxx::tree::token< char, normalized_string > token;
  typedef ::xsd::cxx::tree::name< char, token > name;
  typedef ::xsd::cxx::tree::nmtoken< char, token > nmtoken;
  typedef ::xsd::cxx::tree::nmtokens< char, simple_type, nmtoken > nmtokens;
  typedef ::xsd::cxx::tree::ncname< char, name > ncname;
  typedef ::xsd::cxx::tree::language< char, token > language;

  // ID/IDREF.
  //
  typedef ::xsd::cxx::tree::id< char, ncname > id;
  typedef ::xsd::cxx::tree::idref< char, ncname, type > idref;
  typedef ::xsd::cxx::tree::idrefs< char, simple_type, idref > idrefs;

  // URI.
  //
  typedef ::xsd::cxx::tree::uri< char, simple_type > uri;

  // Qualified name.
  //
  typedef ::xsd::cxx::tree::qname< char, simple_type, uri, ncname > qname;

  // Binary.
  //
  typedef ::xsd::cxx::tree::buffer< char > buffer;
  typedef ::xsd::cxx::tree::base64_binary< char, simple_type > base64_binary;
  typedef ::xsd::cxx::tree::hex_binary< char, simple_type > hex_binary;

  // Date/time.
  //
  typedef ::xsd::cxx::tree::time_zone time_zone;
  typedef ::xsd::cxx::tree::date< char, simple_type > date;
  typedef ::xsd::cxx::tree::date_time< char, simple_type > date_time;
  typedef ::xsd::cxx::tree::duration< char, simple_type > duration;
  typedef ::xsd::cxx::tree::gday< char, simple_type > gday;
  typedef ::xsd::cxx::tree::gmonth< char, simple_type > gmonth;
  typedef ::xsd::cxx::tree::gmonth_day< char, simple_type > gmonth_day;
  typedef ::xsd::cxx::tree::gyear< char, simple_type > gyear;
  typedef ::xsd::cxx::tree::gyear_month< char, simple_type > gyear_month;
  typedef ::xsd::cxx::tree::time< char, simple_type > time;

  // Entity.
  //
  typedef ::xsd::cxx::tree::entity< char, ncname > entity;
  typedef ::xsd::cxx::tree::entities< char, simple_type, entity > entities;

  // Flags and properties.
  //
  typedef ::xsd::cxx::tree::flags flags;
  typedef ::xsd::cxx::tree::properties< char > properties;

  // Parsing/serialization diagnostics.
  //
  typedef ::xsd::cxx::tree::severity severity;
  typedef ::xsd::cxx::tree::error< char > error;
  typedef ::xsd::cxx::tree::diagnostics< char > diagnostics;

  // Exceptions.
  //
  typedef ::xsd::cxx::tree::exception< char > exception;
  typedef ::xsd::cxx::tree::bounds< char > bounds;
  typedef ::xsd::cxx::tree::duplicate_id< char > duplicate_id;
  typedef ::xsd::cxx::tree::parsing< char > parsing;
  typedef ::xsd::cxx::tree::expected_element< char > expected_element;
  typedef ::xsd::cxx::tree::unexpected_element< char > unexpected_element;
  typedef ::xsd::cxx::tree::expected_attribute< char > expected_attribute;
  typedef ::xsd::cxx::tree::unexpected_enumerator< char > unexpected_enumerator;
  typedef ::xsd::cxx::tree::expected_text_content< char > expected_text_content;
  typedef ::xsd::cxx::tree::no_prefix_mapping< char > no_prefix_mapping;

  // Error handler callback interface.
  //
  typedef ::xsd::cxx::xml::error_handler< char > error_handler;

  // DOM interaction.
  //
  namespace dom
  {
    // Automatic pointer for DOMDocument.
    //
    using ::xsd::cxx::xml::dom::auto_ptr;

#ifndef XSD_CXX_TREE_TREE_NODE_KEY__XML_SCHEMA
#define XSD_CXX_TREE_TREE_NODE_KEY__XML_SCHEMA
    // DOM user data key for back pointers to tree nodes.
    //
    const XMLCh* const tree_node_key = ::xsd::cxx::tree::user_data_keys::node;
#endif
  }
}

// Forward declarations.
//
namespace SCL
{
  class tControlBlock;
  class tCommunication;
  class tSubNetwork;
  class tConnectedAP;
  class tAddress;
  class tGSE;
  class tSMV;
  class tPhysConn;
  class tP;
  class tP_IP;
  class tP_IP_SUBNET;
  class tP_IP_GATEWAY;
  class tP_OSI_NSAP;
  class tP_OSI_TSEL;
  class tP_OSI_SSEL;
  class tP_OSI_PSEL;
  class tP_OSI_AP_Title;
  class tP_OSI_AP_Invoke;
  class tP_OSI_AE_Qualifier;
  class tP_OSI_AE_Invoke;
  class tP_MAC_Address;
  class tP_APPID;
  class tP_VLAN_PRIORITY;
  class tP_VLAN_ID;
}


#include <memory>    // std::auto_ptr
#include <limits>    // std::numeric_limits
#include <algorithm> // std::binary_search

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/containers.hxx>
#include <xsd/cxx/tree/list.hxx>

#include <xsd/cxx/xml/dom/parsing-header.hxx>

#include "SCL_BaseTypes.hxx"

namespace SCL
{
  class tControlBlock: public ::SCL::tUnNaming
  {
    public:
    // Address
    // 
    typedef ::SCL::tAddress Address_type;
    typedef ::xsd::cxx::tree::optional< Address_type > Address_optional;
    typedef ::xsd::cxx::tree::traits< Address_type, char > Address_traits;

    const Address_optional&
    Address () const;

    Address_optional&
    Address ();

    void
    Address (const Address_type& x);

    void
    Address (const Address_optional& x);

    void
    Address (::std::auto_ptr< Address_type > p);

    // ldInst
    // 
    typedef ::SCL::tName ldInst_type;
    typedef ::xsd::cxx::tree::traits< ldInst_type, char > ldInst_traits;

    const ldInst_type&
    ldInst () const;

    ldInst_type&
    ldInst ();

    void
    ldInst (const ldInst_type& x);

    void
    ldInst (::std::auto_ptr< ldInst_type > p);

    // cbName
    // 
    typedef ::SCL::tName cbName_type;
    typedef ::xsd::cxx::tree::traits< cbName_type, char > cbName_traits;

    const cbName_type&
    cbName () const;

    cbName_type&
    cbName ();

    void
    cbName (const cbName_type& x);

    void
    cbName (::std::auto_ptr< cbName_type > p);

    // Constructors.
    //
    tControlBlock (const ldInst_type&,
                   const cbName_type&);

    tControlBlock (const ::xercesc::DOMElement& e,
                   ::xml_schema::flags f = 0,
                   ::xml_schema::container* c = 0);

    tControlBlock (const tControlBlock& x,
                   ::xml_schema::flags f = 0,
                   ::xml_schema::container* c = 0);

    virtual tControlBlock*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tControlBlock ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    Address_optional Address_;
    ::xsd::cxx::tree::one< ldInst_type > ldInst_;
    ::xsd::cxx::tree::one< cbName_type > cbName_;
  };

  class tCommunication: public ::SCL::tUnNaming
  {
    public:
    // SubNetwork
    // 
    typedef ::SCL::tSubNetwork SubNetwork_type;
    typedef ::xsd::cxx::tree::sequence< SubNetwork_type > SubNetwork_sequence;
    typedef SubNetwork_sequence::iterator SubNetwork_iterator;
    typedef SubNetwork_sequence::const_iterator SubNetwork_const_iterator;
    typedef ::xsd::cxx::tree::traits< SubNetwork_type, char > SubNetwork_traits;

    const SubNetwork_sequence&
    SubNetwork () const;

    SubNetwork_sequence&
    SubNetwork ();

    void
    SubNetwork (const SubNetwork_sequence& s);

    // Constructors.
    //
    tCommunication ();

    tCommunication (const ::xercesc::DOMElement& e,
                    ::xml_schema::flags f = 0,
                    ::xml_schema::container* c = 0);

    tCommunication (const tCommunication& x,
                    ::xml_schema::flags f = 0,
                    ::xml_schema::container* c = 0);

    virtual tCommunication*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tCommunication ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    SubNetwork_sequence SubNetwork_;
  };

  class tSubNetwork: public ::SCL::tNaming
  {
    public:
    // BitRate
    // 
    typedef ::SCL::tBitRateInMbPerSec BitRate_type;
    typedef ::xsd::cxx::tree::optional< BitRate_type > BitRate_optional;
    typedef ::xsd::cxx::tree::traits< BitRate_type, char > BitRate_traits;

    const BitRate_optional&
    BitRate () const;

    BitRate_optional&
    BitRate ();

    void
    BitRate (const BitRate_type& x);

    void
    BitRate (const BitRate_optional& x);

    void
    BitRate (::std::auto_ptr< BitRate_type > p);

    // ConnectedAP
    // 
    typedef ::SCL::tConnectedAP ConnectedAP_type;
    typedef ::xsd::cxx::tree::sequence< ConnectedAP_type > ConnectedAP_sequence;
    typedef ConnectedAP_sequence::iterator ConnectedAP_iterator;
    typedef ConnectedAP_sequence::const_iterator ConnectedAP_const_iterator;
    typedef ::xsd::cxx::tree::traits< ConnectedAP_type, char > ConnectedAP_traits;

    const ConnectedAP_sequence&
    ConnectedAP () const;

    ConnectedAP_sequence&
    ConnectedAP ();

    void
    ConnectedAP (const ConnectedAP_sequence& s);

    // type
    // 
    typedef ::xml_schema::normalized_string type_type;
    typedef ::xsd::cxx::tree::optional< type_type > type_optional;
    typedef ::xsd::cxx::tree::traits< type_type, char > type_traits;

    const type_optional&
    type () const;

    type_optional&
    type ();

    void
    type (const type_type& x);

    void
    type (const type_optional& x);

    void
    type (::std::auto_ptr< type_type > p);

    // Constructors.
    //
    tSubNetwork (const name_type&);

    tSubNetwork (const ::xercesc::DOMElement& e,
                 ::xml_schema::flags f = 0,
                 ::xml_schema::container* c = 0);

    tSubNetwork (const tSubNetwork& x,
                 ::xml_schema::flags f = 0,
                 ::xml_schema::container* c = 0);

    virtual tSubNetwork*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tSubNetwork ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    BitRate_optional BitRate_;
    ConnectedAP_sequence ConnectedAP_;
    type_optional type_;
  };

  class tConnectedAP: public ::SCL::tUnNaming
  {
    public:
    // Address
    // 
    typedef ::SCL::tAddress Address_type;
    typedef ::xsd::cxx::tree::optional< Address_type > Address_optional;
    typedef ::xsd::cxx::tree::traits< Address_type, char > Address_traits;

    const Address_optional&
    Address () const;

    Address_optional&
    Address ();

    void
    Address (const Address_type& x);

    void
    Address (const Address_optional& x);

    void
    Address (::std::auto_ptr< Address_type > p);

    // GSE
    // 
    typedef ::SCL::tGSE GSE_type;
    typedef ::xsd::cxx::tree::sequence< GSE_type > GSE_sequence;
    typedef GSE_sequence::iterator GSE_iterator;
    typedef GSE_sequence::const_iterator GSE_const_iterator;
    typedef ::xsd::cxx::tree::traits< GSE_type, char > GSE_traits;

    const GSE_sequence&
    GSE () const;

    GSE_sequence&
    GSE ();

    void
    GSE (const GSE_sequence& s);

    // SMV
    // 
    typedef ::SCL::tSMV SMV_type;
    typedef ::xsd::cxx::tree::sequence< SMV_type > SMV_sequence;
    typedef SMV_sequence::iterator SMV_iterator;
    typedef SMV_sequence::const_iterator SMV_const_iterator;
    typedef ::xsd::cxx::tree::traits< SMV_type, char > SMV_traits;

    const SMV_sequence&
    SMV () const;

    SMV_sequence&
    SMV ();

    void
    SMV (const SMV_sequence& s);

    // PhysConn
    // 
    typedef ::SCL::tPhysConn PhysConn_type;
    typedef ::xsd::cxx::tree::sequence< PhysConn_type > PhysConn_sequence;
    typedef PhysConn_sequence::iterator PhysConn_iterator;
    typedef PhysConn_sequence::const_iterator PhysConn_const_iterator;
    typedef ::xsd::cxx::tree::traits< PhysConn_type, char > PhysConn_traits;

    const PhysConn_sequence&
    PhysConn () const;

    PhysConn_sequence&
    PhysConn ();

    void
    PhysConn (const PhysConn_sequence& s);

    // iedName
    // 
    typedef ::SCL::tName iedName_type;
    typedef ::xsd::cxx::tree::traits< iedName_type, char > iedName_traits;

    const iedName_type&
    iedName () const;

    iedName_type&
    iedName ();

    void
    iedName (const iedName_type& x);

    void
    iedName (::std::auto_ptr< iedName_type > p);

    // apName
    // 
    typedef ::SCL::tName apName_type;
    typedef ::xsd::cxx::tree::traits< apName_type, char > apName_traits;

    const apName_type&
    apName () const;

    apName_type&
    apName ();

    void
    apName (const apName_type& x);

    void
    apName (::std::auto_ptr< apName_type > p);

    // Constructors.
    //
    tConnectedAP (const iedName_type&,
                  const apName_type&);

    tConnectedAP (const ::xercesc::DOMElement& e,
                  ::xml_schema::flags f = 0,
                  ::xml_schema::container* c = 0);

    tConnectedAP (const tConnectedAP& x,
                  ::xml_schema::flags f = 0,
                  ::xml_schema::container* c = 0);

    virtual tConnectedAP*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tConnectedAP ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    Address_optional Address_;
    GSE_sequence GSE_;
    SMV_sequence SMV_;
    PhysConn_sequence PhysConn_;
    ::xsd::cxx::tree::one< iedName_type > iedName_;
    ::xsd::cxx::tree::one< apName_type > apName_;
  };

  class tAddress: public ::xml_schema::type
  {
    public:
    // P
    // 
    typedef ::SCL::tP P_type;
    typedef ::xsd::cxx::tree::sequence< P_type > P_sequence;
    typedef P_sequence::iterator P_iterator;
    typedef P_sequence::const_iterator P_const_iterator;
    typedef ::xsd::cxx::tree::traits< P_type, char > P_traits;

    const P_sequence&
    P () const;

    P_sequence&
    P ();

    void
    P (const P_sequence& s);

    // Constructors.
    //
    tAddress ();

    tAddress (const ::xercesc::DOMElement& e,
              ::xml_schema::flags f = 0,
              ::xml_schema::container* c = 0);

    tAddress (const tAddress& x,
              ::xml_schema::flags f = 0,
              ::xml_schema::container* c = 0);

    virtual tAddress*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tAddress ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    P_sequence P_;
  };

  class tGSE: public ::SCL::tControlBlock
  {
    public:
    // MinTime
    // 
    typedef ::SCL::tDurationInMilliSec MinTime_type;
    typedef ::xsd::cxx::tree::optional< MinTime_type > MinTime_optional;
    typedef ::xsd::cxx::tree::traits< MinTime_type, char > MinTime_traits;

    const MinTime_optional&
    MinTime () const;

    MinTime_optional&
    MinTime ();

    void
    MinTime (const MinTime_type& x);

    void
    MinTime (const MinTime_optional& x);

    void
    MinTime (::std::auto_ptr< MinTime_type > p);

    // MaxTime
    // 
    typedef ::SCL::tDurationInMilliSec MaxTime_type;
    typedef ::xsd::cxx::tree::optional< MaxTime_type > MaxTime_optional;
    typedef ::xsd::cxx::tree::traits< MaxTime_type, char > MaxTime_traits;

    const MaxTime_optional&
    MaxTime () const;

    MaxTime_optional&
    MaxTime ();

    void
    MaxTime (const MaxTime_type& x);

    void
    MaxTime (const MaxTime_optional& x);

    void
    MaxTime (::std::auto_ptr< MaxTime_type > p);

    // Constructors.
    //
    tGSE (const ldInst_type&,
          const cbName_type&);

    tGSE (const ::xercesc::DOMElement& e,
          ::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0);

    tGSE (const tGSE& x,
          ::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0);

    virtual tGSE*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tGSE ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    MinTime_optional MinTime_;
    MaxTime_optional MaxTime_;
  };

  class tSMV: public ::SCL::tControlBlock
  {
    public:
    // Constructors.
    //
    tSMV (const ldInst_type&,
          const cbName_type&);

    tSMV (const ::xercesc::DOMElement& e,
          ::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0);

    tSMV (const tSMV& x,
          ::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0);

    virtual tSMV*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tSMV ();
  };

  class tPhysConn: public ::xml_schema::type
  {
    public:
    // P
    // 
    typedef ::SCL::tP P_type;
    typedef ::xsd::cxx::tree::sequence< P_type > P_sequence;
    typedef P_sequence::iterator P_iterator;
    typedef P_sequence::const_iterator P_const_iterator;
    typedef ::xsd::cxx::tree::traits< P_type, char > P_traits;

    const P_sequence&
    P () const;

    P_sequence&
    P ();

    void
    P (const P_sequence& s);

    // type
    // 
    typedef ::xml_schema::normalized_string type_type;
    typedef ::xsd::cxx::tree::traits< type_type, char > type_traits;

    const type_type&
    type () const;

    type_type&
    type ();

    void
    type (const type_type& x);

    void
    type (::std::auto_ptr< type_type > p);

    // Constructors.
    //
    tPhysConn (const type_type&);

    tPhysConn (const ::xercesc::DOMElement& e,
               ::xml_schema::flags f = 0,
               ::xml_schema::container* c = 0);

    tPhysConn (const tPhysConn& x,
               ::xml_schema::flags f = 0,
               ::xml_schema::container* c = 0);

    virtual tPhysConn*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tPhysConn ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    P_sequence P_;
    ::xsd::cxx::tree::one< type_type > type_;
  };

  class tP: public ::SCL::tPAddr
  {
    public:
    // type
    // 
    typedef ::SCL::tPTypeEnum type_type;
    typedef ::xsd::cxx::tree::traits< type_type, char > type_traits;

    const type_type&
    type () const;

    type_type&
    type ();

    void
    type (const type_type& x);

    void
    type (::std::auto_ptr< type_type > p);

    // Constructors.
    //
    tP (const type_type&);

    tP (const char*,
        const type_type&);

    tP (const ::std::string&,
        const type_type&);

    tP (const ::xml_schema::normalized_string&,
        const type_type&);

    tP (const ::xercesc::DOMElement& e,
        ::xml_schema::flags f = 0,
        ::xml_schema::container* c = 0);

    tP (const tP& x,
        ::xml_schema::flags f = 0,
        ::xml_schema::container* c = 0);

    virtual tP*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tP ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    ::xsd::cxx::tree::one< type_type > type_;
  };

  class tP_IP: public ::SCL::tP
  {
    public:
    // Constructors.
    //
    tP_IP (const type_type&);

    tP_IP (const char*,
           const type_type&);

    tP_IP (const ::std::string&,
           const type_type&);

    tP_IP (const ::xml_schema::normalized_string&,
           const type_type&);

    tP_IP (const ::xercesc::DOMElement& e,
           ::xml_schema::flags f = 0,
           ::xml_schema::container* c = 0);

    tP_IP (const tP_IP& x,
           ::xml_schema::flags f = 0,
           ::xml_schema::container* c = 0);

    virtual tP_IP*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tP_IP ();
  };

  class tP_IP_SUBNET: public ::SCL::tP
  {
    public:
    // Constructors.
    //
    tP_IP_SUBNET (const type_type&);

    tP_IP_SUBNET (const char*,
                  const type_type&);

    tP_IP_SUBNET (const ::std::string&,
                  const type_type&);

    tP_IP_SUBNET (const ::xml_schema::normalized_string&,
                  const type_type&);

    tP_IP_SUBNET (const ::xercesc::DOMElement& e,
                  ::xml_schema::flags f = 0,
                  ::xml_schema::container* c = 0);

    tP_IP_SUBNET (const tP_IP_SUBNET& x,
                  ::xml_schema::flags f = 0,
                  ::xml_schema::container* c = 0);

    virtual tP_IP_SUBNET*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tP_IP_SUBNET ();
  };

  class tP_IP_GATEWAY: public ::SCL::tP
  {
    public:
    // Constructors.
    //
    tP_IP_GATEWAY (const type_type&);

    tP_IP_GATEWAY (const char*,
                   const type_type&);

    tP_IP_GATEWAY (const ::std::string&,
                   const type_type&);

    tP_IP_GATEWAY (const ::xml_schema::normalized_string&,
                   const type_type&);

    tP_IP_GATEWAY (const ::xercesc::DOMElement& e,
                   ::xml_schema::flags f = 0,
                   ::xml_schema::container* c = 0);

    tP_IP_GATEWAY (const tP_IP_GATEWAY& x,
                   ::xml_schema::flags f = 0,
                   ::xml_schema::container* c = 0);

    virtual tP_IP_GATEWAY*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tP_IP_GATEWAY ();
  };

  class tP_OSI_NSAP: public ::SCL::tP
  {
    public:
    // Constructors.
    //
    tP_OSI_NSAP (const type_type&);

    tP_OSI_NSAP (const char*,
                 const type_type&);

    tP_OSI_NSAP (const ::std::string&,
                 const type_type&);

    tP_OSI_NSAP (const ::xml_schema::normalized_string&,
                 const type_type&);

    tP_OSI_NSAP (const ::xercesc::DOMElement& e,
                 ::xml_schema::flags f = 0,
                 ::xml_schema::container* c = 0);

    tP_OSI_NSAP (const tP_OSI_NSAP& x,
                 ::xml_schema::flags f = 0,
                 ::xml_schema::container* c = 0);

    virtual tP_OSI_NSAP*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tP_OSI_NSAP ();
  };

  class tP_OSI_TSEL: public ::SCL::tP
  {
    public:
    // Constructors.
    //
    tP_OSI_TSEL (const type_type&);

    tP_OSI_TSEL (const char*,
                 const type_type&);

    tP_OSI_TSEL (const ::std::string&,
                 const type_type&);

    tP_OSI_TSEL (const ::xml_schema::normalized_string&,
                 const type_type&);

    tP_OSI_TSEL (const ::xercesc::DOMElement& e,
                 ::xml_schema::flags f = 0,
                 ::xml_schema::container* c = 0);

    tP_OSI_TSEL (const tP_OSI_TSEL& x,
                 ::xml_schema::flags f = 0,
                 ::xml_schema::container* c = 0);

    virtual tP_OSI_TSEL*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tP_OSI_TSEL ();
  };

  class tP_OSI_SSEL: public ::SCL::tP
  {
    public:
    // Constructors.
    //
    tP_OSI_SSEL (const type_type&);

    tP_OSI_SSEL (const char*,
                 const type_type&);

    tP_OSI_SSEL (const ::std::string&,
                 const type_type&);

    tP_OSI_SSEL (const ::xml_schema::normalized_string&,
                 const type_type&);

    tP_OSI_SSEL (const ::xercesc::DOMElement& e,
                 ::xml_schema::flags f = 0,
                 ::xml_schema::container* c = 0);

    tP_OSI_SSEL (const tP_OSI_SSEL& x,
                 ::xml_schema::flags f = 0,
                 ::xml_schema::container* c = 0);

    virtual tP_OSI_SSEL*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tP_OSI_SSEL ();
  };

  class tP_OSI_PSEL: public ::SCL::tP
  {
    public:
    // Constructors.
    //
    tP_OSI_PSEL (const type_type&);

    tP_OSI_PSEL (const char*,
                 const type_type&);

    tP_OSI_PSEL (const ::std::string&,
                 const type_type&);

    tP_OSI_PSEL (const ::xml_schema::normalized_string&,
                 const type_type&);

    tP_OSI_PSEL (const ::xercesc::DOMElement& e,
                 ::xml_schema::flags f = 0,
                 ::xml_schema::container* c = 0);

    tP_OSI_PSEL (const tP_OSI_PSEL& x,
                 ::xml_schema::flags f = 0,
                 ::xml_schema::container* c = 0);

    virtual tP_OSI_PSEL*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tP_OSI_PSEL ();
  };

  class tP_OSI_AP_Title: public ::SCL::tP
  {
    public:
    // Constructors.
    //
    tP_OSI_AP_Title (const type_type&);

    tP_OSI_AP_Title (const char*,
                     const type_type&);

    tP_OSI_AP_Title (const ::std::string&,
                     const type_type&);

    tP_OSI_AP_Title (const ::xml_schema::normalized_string&,
                     const type_type&);

    tP_OSI_AP_Title (const ::xercesc::DOMElement& e,
                     ::xml_schema::flags f = 0,
                     ::xml_schema::container* c = 0);

    tP_OSI_AP_Title (const tP_OSI_AP_Title& x,
                     ::xml_schema::flags f = 0,
                     ::xml_schema::container* c = 0);

    virtual tP_OSI_AP_Title*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tP_OSI_AP_Title ();
  };

  class tP_OSI_AP_Invoke: public ::SCL::tP
  {
    public:
    // Constructors.
    //
    tP_OSI_AP_Invoke (const type_type&);

    tP_OSI_AP_Invoke (const char*,
                      const type_type&);

    tP_OSI_AP_Invoke (const ::std::string&,
                      const type_type&);

    tP_OSI_AP_Invoke (const ::xml_schema::normalized_string&,
                      const type_type&);

    tP_OSI_AP_Invoke (const ::xercesc::DOMElement& e,
                      ::xml_schema::flags f = 0,
                      ::xml_schema::container* c = 0);

    tP_OSI_AP_Invoke (const tP_OSI_AP_Invoke& x,
                      ::xml_schema::flags f = 0,
                      ::xml_schema::container* c = 0);

    virtual tP_OSI_AP_Invoke*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tP_OSI_AP_Invoke ();
  };

  class tP_OSI_AE_Qualifier: public ::SCL::tP
  {
    public:
    // Constructors.
    //
    tP_OSI_AE_Qualifier (const type_type&);

    tP_OSI_AE_Qualifier (const char*,
                         const type_type&);

    tP_OSI_AE_Qualifier (const ::std::string&,
                         const type_type&);

    tP_OSI_AE_Qualifier (const ::xml_schema::normalized_string&,
                         const type_type&);

    tP_OSI_AE_Qualifier (const ::xercesc::DOMElement& e,
                         ::xml_schema::flags f = 0,
                         ::xml_schema::container* c = 0);

    tP_OSI_AE_Qualifier (const tP_OSI_AE_Qualifier& x,
                         ::xml_schema::flags f = 0,
                         ::xml_schema::container* c = 0);

    virtual tP_OSI_AE_Qualifier*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tP_OSI_AE_Qualifier ();
  };

  class tP_OSI_AE_Invoke: public ::SCL::tP
  {
    public:
    // Constructors.
    //
    tP_OSI_AE_Invoke (const type_type&);

    tP_OSI_AE_Invoke (const char*,
                      const type_type&);

    tP_OSI_AE_Invoke (const ::std::string&,
                      const type_type&);

    tP_OSI_AE_Invoke (const ::xml_schema::normalized_string&,
                      const type_type&);

    tP_OSI_AE_Invoke (const ::xercesc::DOMElement& e,
                      ::xml_schema::flags f = 0,
                      ::xml_schema::container* c = 0);

    tP_OSI_AE_Invoke (const tP_OSI_AE_Invoke& x,
                      ::xml_schema::flags f = 0,
                      ::xml_schema::container* c = 0);

    virtual tP_OSI_AE_Invoke*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tP_OSI_AE_Invoke ();
  };

  class tP_MAC_Address: public ::SCL::tP
  {
    public:
    // Constructors.
    //
    tP_MAC_Address (const type_type&);

    tP_MAC_Address (const char*,
                    const type_type&);

    tP_MAC_Address (const ::std::string&,
                    const type_type&);

    tP_MAC_Address (const ::xml_schema::normalized_string&,
                    const type_type&);

    tP_MAC_Address (const ::xercesc::DOMElement& e,
                    ::xml_schema::flags f = 0,
                    ::xml_schema::container* c = 0);

    tP_MAC_Address (const tP_MAC_Address& x,
                    ::xml_schema::flags f = 0,
                    ::xml_schema::container* c = 0);

    virtual tP_MAC_Address*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tP_MAC_Address ();
  };

  class tP_APPID: public ::SCL::tP
  {
    public:
    // Constructors.
    //
    tP_APPID (const type_type&);

    tP_APPID (const char*,
              const type_type&);

    tP_APPID (const ::std::string&,
              const type_type&);

    tP_APPID (const ::xml_schema::normalized_string&,
              const type_type&);

    tP_APPID (const ::xercesc::DOMElement& e,
              ::xml_schema::flags f = 0,
              ::xml_schema::container* c = 0);

    tP_APPID (const tP_APPID& x,
              ::xml_schema::flags f = 0,
              ::xml_schema::container* c = 0);

    virtual tP_APPID*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tP_APPID ();
  };

  class tP_VLAN_PRIORITY: public ::SCL::tP
  {
    public:
    // Constructors.
    //
    tP_VLAN_PRIORITY (const type_type&);

    tP_VLAN_PRIORITY (const char*,
                      const type_type&);

    tP_VLAN_PRIORITY (const ::std::string&,
                      const type_type&);

    tP_VLAN_PRIORITY (const ::xml_schema::normalized_string&,
                      const type_type&);

    tP_VLAN_PRIORITY (const ::xercesc::DOMElement& e,
                      ::xml_schema::flags f = 0,
                      ::xml_schema::container* c = 0);

    tP_VLAN_PRIORITY (const tP_VLAN_PRIORITY& x,
                      ::xml_schema::flags f = 0,
                      ::xml_schema::container* c = 0);

    virtual tP_VLAN_PRIORITY*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tP_VLAN_PRIORITY ();
  };

  class tP_VLAN_ID: public ::SCL::tP
  {
    public:
    // Constructors.
    //
    tP_VLAN_ID (const type_type&);

    tP_VLAN_ID (const char*,
                const type_type&);

    tP_VLAN_ID (const ::std::string&,
                const type_type&);

    tP_VLAN_ID (const ::xml_schema::normalized_string&,
                const type_type&);

    tP_VLAN_ID (const ::xercesc::DOMElement& e,
                ::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0);

    tP_VLAN_ID (const tP_VLAN_ID& x,
                ::xml_schema::flags f = 0,
                ::xml_schema::container* c = 0);

    virtual tP_VLAN_ID*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~tP_VLAN_ID ();
  };
}

#include <iosfwd>

#include <xercesc/sax/InputSource.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>

namespace SCL
{
  // Parse a URI or a local file.
  //

  ::std::auto_ptr< ::SCL::tCommunication >
  Communication (const ::std::string& uri,
                 ::xml_schema::flags f = 0,
                 const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::SCL::tCommunication >
  Communication (const ::std::string& uri,
                 ::xml_schema::error_handler& eh,
                 ::xml_schema::flags f = 0,
                 const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::SCL::tCommunication >
  Communication (const ::std::string& uri,
                 ::xercesc::DOMErrorHandler& eh,
                 ::xml_schema::flags f = 0,
                 const ::xml_schema::properties& p = ::xml_schema::properties ());

  // Parse std::istream.
  //

  ::std::auto_ptr< ::SCL::tCommunication >
  Communication (::std::istream& is,
                 ::xml_schema::flags f = 0,
                 const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::SCL::tCommunication >
  Communication (::std::istream& is,
                 ::xml_schema::error_handler& eh,
                 ::xml_schema::flags f = 0,
                 const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::SCL::tCommunication >
  Communication (::std::istream& is,
                 ::xercesc::DOMErrorHandler& eh,
                 ::xml_schema::flags f = 0,
                 const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::SCL::tCommunication >
  Communication (::std::istream& is,
                 const ::std::string& id,
                 ::xml_schema::flags f = 0,
                 const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::SCL::tCommunication >
  Communication (::std::istream& is,
                 const ::std::string& id,
                 ::xml_schema::error_handler& eh,
                 ::xml_schema::flags f = 0,
                 const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::SCL::tCommunication >
  Communication (::std::istream& is,
                 const ::std::string& id,
                 ::xercesc::DOMErrorHandler& eh,
                 ::xml_schema::flags f = 0,
                 const ::xml_schema::properties& p = ::xml_schema::properties ());

  // Parse xercesc::InputSource.
  //

  ::std::auto_ptr< ::SCL::tCommunication >
  Communication (::xercesc::InputSource& is,
                 ::xml_schema::flags f = 0,
                 const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::SCL::tCommunication >
  Communication (::xercesc::InputSource& is,
                 ::xml_schema::error_handler& eh,
                 ::xml_schema::flags f = 0,
                 const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::SCL::tCommunication >
  Communication (::xercesc::InputSource& is,
                 ::xercesc::DOMErrorHandler& eh,
                 ::xml_schema::flags f = 0,
                 const ::xml_schema::properties& p = ::xml_schema::properties ());

  // Parse xercesc::DOMDocument.
  //

  ::std::auto_ptr< ::SCL::tCommunication >
  Communication (const ::xercesc::DOMDocument& d,
                 ::xml_schema::flags f = 0,
                 const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::SCL::tCommunication >
  Communication (::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument >& d,
                 ::xml_schema::flags f = 0,
                 const ::xml_schema::properties& p = ::xml_schema::properties ());
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // SCL_COMMUNICATION_HXX