/* soapStub.h
   Generated by gSOAP 2.8.0 from WS-Discovery.h
   Copyright(C) 2000-2010, Robert van Engelen, Genivia Inc. All Rights Reserved.
   The generated code is released under one of the following licenses:
   GPL OR Genivia's license for commercial use.
*/

#ifndef soapStub_H
#define soapStub_H
#include <vector>
#define SOAP_WSA_2003
#define SOAP_NAMESPACE_OF_ns2	""
#define SOAP_NAMESPACE_OF_ns1	"http://schemas.xmlsoap.org/ws/2004/02/discovery"
#include "stdsoap2.h"

/******************************************************************************\
 *                                                                            *
 * Enumerations                                                               *
 *                                                                            *
\******************************************************************************/


#ifndef SOAP_TYPE_wsa3__RelationshipTypeValues
#define SOAP_TYPE_wsa3__RelationshipTypeValues (12)
/* wsa3:RelationshipTypeValues */
enum wsa3__RelationshipTypeValues {wsa3__Response = 0};
typedef enum wsa3__RelationshipTypeValues wsa3__RelationshipTypeValues;
#endif

/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes and Structs                                                        *
 *                                                                            *
\******************************************************************************/


#if 0 /* volatile type: do not declare here, declared elsewhere */

#endif

#ifndef SOAP_TYPE_wsa3__EndpointReferenceType
#define SOAP_TYPE_wsa3__EndpointReferenceType (8)
/* wsa3:EndpointReferenceType */
struct wsa3__EndpointReferenceType
{
public:
	char *Address;	/* required element of type xsd:string */
	struct wsa3__ReferencePropertiesType *ReferenceProperties;	/* optional element of type wsa3:ReferencePropertiesType */
	char **PortType;	/* optional element of type xsd:QName */
	struct wsa3__ServiceNameType *ServiceName;	/* optional element of type wsa3:ServiceNameType */
	int __size;	/* sequence of elements <-any> */
	char **__any;
	char *__anyAttribute;	/* optional attribute of type xsd:anyType */
};
typedef struct wsa3__EndpointReferenceType wsa3__EndpointReferenceType;
#endif

#ifndef SOAP_TYPE_wsa3__ReferencePropertiesType
#define SOAP_TYPE_wsa3__ReferencePropertiesType (9)
/* wsa3:ReferencePropertiesType */
struct wsa3__ReferencePropertiesType
{
public:
	int __size;	/* sequence of elements <-any> */
	char **__any;
};
typedef struct wsa3__ReferencePropertiesType wsa3__ReferencePropertiesType;
#endif

#ifndef SOAP_TYPE_wsa3__ServiceNameType
#define SOAP_TYPE_wsa3__ServiceNameType (10)
/* Primitive wsa3:ServiceNameType schema type: */
struct wsa3__ServiceNameType
{
public:
	char *__item;
	char *PortName;	/* optional attribute of type xsd:string */
	char *__anyAttribute;	/* optional attribute of type xsd:anyType */
};
typedef struct wsa3__ServiceNameType wsa3__ServiceNameType;
#endif

#ifndef SOAP_TYPE_wsa3__Relationship
#define SOAP_TYPE_wsa3__Relationship (11)
/* Primitive wsa3:Relationship schema type: */
struct wsa3__Relationship
{
public:
	char *__item;
	char *RelationshipType;	/* optional attribute of type xsd:QName */
	char *__anyAttribute;	/* optional attribute of type xsd:anyType */
};
typedef struct wsa3__Relationship wsa3__Relationship;
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (26)
/* SOAP Header: */
struct SOAP_ENV__Header
{
public:
	char *wsa3__MessageID;	/* optional element of type wsa3:MessageID */
	struct wsa3__Relationship *wsa3__RelatesTo;	/* optional element of type wsa3:RelatesTo */
	struct wsa3__EndpointReferenceType *wsa3__From;	/* optional element of type wsa3:From */
	struct wsa3__EndpointReferenceType *wsa3__ReplyTo;	/* mustUnderstand */
	struct wsa3__EndpointReferenceType *wsa3__FaultTo;	/* mustUnderstand */
	char *wsa3__To;	/* mustUnderstand */
	char *wsa3__Action;	/* mustUnderstand */
};
#endif

#ifndef SOAP_TYPE_xsd__anyType
#define SOAP_TYPE_xsd__anyType (31)
/* Primitive xsd:anyType schema type: */
class SOAP_CMAC xsd__anyType
{
public:
	char *__item;
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 31; } /* = unique id SOAP_TYPE_xsd__anyType */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__anyType(): __item(NULL), soap(NULL) { xsd__anyType::soap_default(NULL); }
	virtual ~xsd__anyType() { }
};
#endif

#ifndef SOAP_TYPE_xsd__QName
#define SOAP_TYPE_xsd__QName (33)
/* Primitive xsd:QName schema type: */
class SOAP_CMAC xsd__QName : public xsd__anyType
{
public:
	char *__item;
public:
	virtual int soap_type() const { return 33; } /* = unique id SOAP_TYPE_xsd__QName */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__QName(): __item(NULL) { xsd__QName::soap_default(NULL); }
	virtual ~xsd__QName() { }
};
#endif

#ifndef SOAP_TYPE_xsd__anyURI
#define SOAP_TYPE_xsd__anyURI (34)
/* Primitive xsd:anyURI schema type: */
class SOAP_CMAC xsd__anyURI : public xsd__anyType
{
public:
	char *__item;
public:
	virtual int soap_type() const { return 34; } /* = unique id SOAP_TYPE_xsd__anyURI */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__anyURI(): __item(NULL) { xsd__anyURI::soap_default(NULL); }
	virtual ~xsd__anyURI() { }
};
#endif

#ifndef SOAP_TYPE_xsd__nonNegativeInteger
#define SOAP_TYPE_xsd__nonNegativeInteger (35)
/* Primitive xsd:nonNegativeInteger schema type: */
class SOAP_CMAC xsd__nonNegativeInteger : public xsd__anyType
{
public:
	unsigned int __item;
public:
	virtual int soap_type() const { return 35; } /* = unique id SOAP_TYPE_xsd__nonNegativeInteger */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__nonNegativeInteger() { xsd__nonNegativeInteger::soap_default(NULL); }
	virtual ~xsd__nonNegativeInteger() { }
};
#endif

#if 0 /* volatile type: do not declare here, declared elsewhere */

#endif

#ifndef SOAP_TYPE_xsd__positiveInteger_
#define SOAP_TYPE_xsd__positiveInteger_ (39)
/* Primitive xsd:positiveInteger schema type: */
class SOAP_CMAC xsd__positiveInteger_ : public xsd__anyType
{
public:
	std::string __item;
public:
	virtual int soap_type() const { return 39; } /* = unique id SOAP_TYPE_xsd__positiveInteger_ */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__positiveInteger_() { xsd__positiveInteger_::soap_default(NULL); }
	virtual ~xsd__positiveInteger_() { }
};
#endif

#ifndef SOAP_TYPE_ns1__DiscoveryReferenceType
#define SOAP_TYPE_ns1__DiscoveryReferenceType (40)
/* ns1:DiscoveryReferenceType */
class SOAP_CMAC ns1__DiscoveryReferenceType : public xsd__anyType
{
public:
	struct wsa3__EndpointReferenceType wsa3__EndpointReference;	/* required element of type wsa3:EndpointReference */
	std::string *Types;	/* optional element of type ns1:Types */
	std::string *Scopes;	/* optional element of type ns1:Scopes */
	unsigned int MetadataVersion;	/* required element of type xsd:unsignedInt */
	std::vector<char * >__any;
	char *__anyAttribute;	/* optional attribute */
public:
	virtual int soap_type() const { return 40; } /* = unique id SOAP_TYPE_ns1__DiscoveryReferenceType */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         ns1__DiscoveryReferenceType(): Types(NULL), Scopes(NULL), __anyAttribute(NULL) { ns1__DiscoveryReferenceType::soap_default(NULL); }
	virtual ~ns1__DiscoveryReferenceType() { }
};
#endif

#ifndef SOAP_TYPE__ns1__Bye
#define SOAP_TYPE__ns1__Bye (41)
/* ns1:Bye */
class SOAP_CMAC _ns1__Bye
{
public:
	struct wsa3__EndpointReferenceType wsa3__EndpointReference;	/* required element of type wsa3:EndpointReference */
	std::vector<char * >__any;
	char *__anyAttribute;	/* optional attribute */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 41; } /* = unique id SOAP_TYPE__ns1__Bye */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__Bye(): __anyAttribute(NULL), soap(NULL) { _ns1__Bye::soap_default(NULL); }
	virtual ~_ns1__Bye() { }
};
#endif

#ifndef SOAP_TYPE__ns1__Probe
#define SOAP_TYPE__ns1__Probe (42)
/* ns1:Probe */
class SOAP_CMAC _ns1__Probe
{
public:
	std::string *Types;	/* optional element of type ns1:Types */
	class _ns1__Scope *Scope;	/* optional element of type ns1:Scope */
	std::vector<char * >__any;
	char *__anyAttribute;	/* optional attribute */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 42; } /* = unique id SOAP_TYPE__ns1__Probe */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__Probe(): Types(NULL), Scope(NULL), __anyAttribute(NULL), soap(NULL) { _ns1__Probe::soap_default(NULL); }
	virtual ~_ns1__Probe() { }
};
#endif

#ifndef SOAP_TYPE__ns1__Scope
#define SOAP_TYPE__ns1__Scope (43)
/* Primitive ns1:Scope schema type: */
class SOAP_CMAC _ns1__Scope
{
public:
	char *__item;
	char *MatchBy;	/* optional attribute */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 43; } /* = unique id SOAP_TYPE__ns1__Scope */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__Scope(): __item(NULL), MatchBy(NULL), soap(NULL) { _ns1__Scope::soap_default(NULL); }
	virtual ~_ns1__Scope() { }
};
#endif

#ifndef SOAP_TYPE__ns1__AppSequence
#define SOAP_TYPE__ns1__AppSequence (44)
/* ns1:AppSequence */
class SOAP_CMAC _ns1__AppSequence
{
public:
	std::string InstanceId;	/* required attribute */
	char *SequenceId;	/* optional attribute */
	std::string MessageNumber;	/* required attribute */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 44; } /* = unique id SOAP_TYPE__ns1__AppSequence */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__AppSequence(): SequenceId(NULL), soap(NULL) { _ns1__AppSequence::soap_default(NULL); }
	virtual ~_ns1__AppSequence() { }
};
#endif

#ifndef SOAP_TYPE__ns1__SoapHttpRequestReplyAddress
#define SOAP_TYPE__ns1__SoapHttpRequestReplyAddress (45)
/* Primitive ns1:SoapHttpRequestReplyAddress schema type: */
class SOAP_CMAC _ns1__SoapHttpRequestReplyAddress
{
public:
	char *__item;
	char *__anyAttribute;	/* optional attribute */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 45; } /* = unique id SOAP_TYPE__ns1__SoapHttpRequestReplyAddress */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__SoapHttpRequestReplyAddress(): __item(NULL), __anyAttribute(NULL), soap(NULL) { _ns1__SoapHttpRequestReplyAddress::soap_default(NULL); }
	virtual ~_ns1__SoapHttpRequestReplyAddress() { }
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (52)
/* SOAP Fault Code: */
struct SOAP_ENV__Code
{
public:
	char *SOAP_ENV__Value;	/* optional element of type xsd:QName */
	struct SOAP_ENV__Code *SOAP_ENV__Subcode;	/* optional element of type SOAP-ENV:Code */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (54)
/* SOAP-ENV:Detail */
struct SOAP_ENV__Detail
{
public:
	int __type;	/* any type of element <fault> (defined below) */
	void *fault;	/* transient */
	char *__any;
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (57)
/* SOAP-ENV:Reason */
struct SOAP_ENV__Reason
{
public:
	char *SOAP_ENV__Text;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (58)
/* SOAP Fault: */
struct SOAP_ENV__Fault
{
public:
	char *faultcode;	/* optional element of type xsd:QName */
	char *faultstring;	/* optional element of type xsd:string */
	char *faultactor;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *detail;	/* optional element of type SOAP-ENV:Detail */
	struct SOAP_ENV__Code *SOAP_ENV__Code;	/* optional element of type SOAP-ENV:Code */
	struct SOAP_ENV__Reason *SOAP_ENV__Reason;	/* optional element of type SOAP-ENV:Reason */
	char *SOAP_ENV__Node;	/* optional element of type xsd:string */
	char *SOAP_ENV__Role;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *SOAP_ENV__Detail;	/* optional element of type SOAP-ENV:Detail */
};
#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/

#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
typedef char *_QName;
#endif

#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
typedef char *_XML;
#endif

#ifndef SOAP_TYPE__wsa3__EndpointReference
#define SOAP_TYPE__wsa3__EndpointReference (17)
typedef struct wsa3__EndpointReferenceType _wsa3__EndpointReference;
#endif

#ifndef SOAP_TYPE__wsa3__MessageID
#define SOAP_TYPE__wsa3__MessageID (18)
typedef char *_wsa3__MessageID;
#endif

#ifndef SOAP_TYPE__wsa3__RelatesTo
#define SOAP_TYPE__wsa3__RelatesTo (19)
typedef struct wsa3__Relationship _wsa3__RelatesTo;
#endif

#ifndef SOAP_TYPE__wsa3__To
#define SOAP_TYPE__wsa3__To (20)
typedef char *_wsa3__To;
#endif

#ifndef SOAP_TYPE__wsa3__Action
#define SOAP_TYPE__wsa3__Action (21)
typedef char *_wsa3__Action;
#endif

#ifndef SOAP_TYPE__wsa3__From
#define SOAP_TYPE__wsa3__From (22)
typedef struct wsa3__EndpointReferenceType _wsa3__From;
#endif

#ifndef SOAP_TYPE__wsa3__ReplyTo
#define SOAP_TYPE__wsa3__ReplyTo (23)
typedef struct wsa3__EndpointReferenceType _wsa3__ReplyTo;
#endif

#ifndef SOAP_TYPE__wsa3__FaultTo
#define SOAP_TYPE__wsa3__FaultTo (24)
typedef struct wsa3__EndpointReferenceType _wsa3__FaultTo;
#endif

#ifndef SOAP_TYPE__wsa3__Recipient
#define SOAP_TYPE__wsa3__Recipient (25)
typedef struct wsa3__EndpointReferenceType _wsa3__Recipient;
#endif

#ifndef SOAP_TYPE_xsd__positiveInteger
#define SOAP_TYPE_xsd__positiveInteger (38)
typedef std::string xsd__positiveInteger;
#endif

#ifndef SOAP_TYPE__ns1__Types
#define SOAP_TYPE__ns1__Types (46)
typedef std::string _ns1__Types;
#endif

#ifndef SOAP_TYPE__ns1__Scopes
#define SOAP_TYPE__ns1__Scopes (47)
typedef std::string _ns1__Scopes;
#endif


/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


#endif

/* End of soapStub.h */
