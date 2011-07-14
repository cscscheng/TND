/* RemoteStub.h
   Generated by gSOAP 2.8.0 from devprof_databinding.gsoap
   Copyright(C) 2000-2010, Robert van Engelen, Genivia Inc. All Rights Reserved.
   The generated code is released under one of the following licenses:
   GPL OR Genivia's license for commercial use.
*/

#ifndef RemoteStub_H
#define RemoteStub_H
#define DEVPROF_VERSION "2006/02"
#define DEVPROF_2006_02
#define SOAP_WSA_200408
#define SOAP_NAMESPACE_OF_wsd	"http://schemas.xmlsoap.org/ws/2005/04/discovery"
#ifndef WITH_NONAMESPACES
#define WITH_NONAMESPACES
#endif
#ifndef WITH_NOGLOBAL
#define WITH_NOGLOBAL
#endif
#include "stdsoap2.h"

namespace Remote {

/******************************************************************************\
 *                                                                            *
 * Enumerations                                                               *
 *                                                                            *
\******************************************************************************/


#ifndef SOAP_TYPE_Remote_wsa__RelationshipTypeValues
#define SOAP_TYPE_Remote_wsa__RelationshipTypeValues (12)
/* wsa:RelationshipTypeValues */
enum wsa__RelationshipTypeValues {wsa__Reply = 0};
typedef enum wsa__RelationshipTypeValues wsa__RelationshipTypeValues;
#endif

#ifndef SOAP_TYPE_Remote_wsa__FaultSubcodeValues
#define SOAP_TYPE_Remote_wsa__FaultSubcodeValues (13)
/* wsa:FaultSubcodeValues */
enum wsa__FaultSubcodeValues {wsa__InvalidMessageInformationHeader = 0, wsa__MessageInformationHeaderRequired = 1, wsa__DestinationUnreachable = 2, wsa__ActionNotSupported = 3, wsa__EndpointUnavailable = 4};
typedef enum wsa__FaultSubcodeValues wsa__FaultSubcodeValues;
#endif

#ifndef SOAP_TYPE_Remote_wsd__RelationshipType
#define SOAP_TYPE_Remote_wsd__RelationshipType (92)
/* wsd:RelationshipType */
enum wsd__RelationshipType {wsd__RelationshipType__wsd__Suppression = 0};
typedef enum wsd__RelationshipType wsd__RelationshipType;
#endif

#ifndef SOAP_TYPE_Remote_wsd__FaultCodeType
#define SOAP_TYPE_Remote_wsd__FaultCodeType (93)
/* wsd:FaultCodeType */
enum wsd__FaultCodeType {wsd__FaultCodeType__wsd__MatchingRuleNotSupported = 0};
typedef enum wsd__FaultCodeType wsd__FaultCodeType;
#endif

#ifndef SOAP_TYPE_Remote_wsu__tTimestampFault
#define SOAP_TYPE_Remote_wsu__tTimestampFault (114)
/* wsu:tTimestampFault */
enum wsu__tTimestampFault {wsu__MessageExpired = 0};
typedef enum wsu__tTimestampFault wsu__tTimestampFault;
#endif

#ifndef SOAP_TYPE_Remote_wsse__FaultcodeEnum
#define SOAP_TYPE_Remote_wsse__FaultcodeEnum (116)
/* wsse:FaultcodeEnum */
enum wsse__FaultcodeEnum {wsse__UnsupportedSecurityToken = 0, wsse__UnsupportedAlgorithm = 1, wsse__InvalidSecurity = 2, wsse__InvalidSecurityToken = 3, wsse__FailedAuthentication = 4, wsse__FailedCheck = 5, wsse__SecurityTokenUnavailable = 6};
typedef enum wsse__FaultcodeEnum wsse__FaultcodeEnum;
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

#ifndef SOAP_TYPE_Remote_wsa__EndpointReferenceType
#define SOAP_TYPE_Remote_wsa__EndpointReferenceType (7)
/* wsa:EndpointReferenceType */
struct wsa__EndpointReferenceType
{
public:
	char *Address;	/* required element of type xsd:string */
	struct wsa__ReferencePropertiesType *ReferenceProperties;	/* optional element of type wsa:ReferencePropertiesType */
	struct wsa__ReferenceParametersType *ReferenceParameters;	/* optional element of type wsa:ReferenceParametersType */
	char **PortType;	/* optional element of type xsd:QName */
	struct wsa__ServiceNameType *ServiceName;	/* optional element of type wsa:ServiceNameType */
	int __size;	/* sequence of elements <-any> */
	char **__any;
	char *__anyAttribute;	/* optional attribute of type xsd:anyType */
};
typedef struct wsa__EndpointReferenceType wsa__EndpointReferenceType;
#endif

#ifndef SOAP_TYPE_Remote_wsa__ReferencePropertiesType
#define SOAP_TYPE_Remote_wsa__ReferencePropertiesType (8)
/* wsa:ReferencePropertiesType */
struct wsa__ReferencePropertiesType
{
public:
	int __size;	/* sequence of elements <-any> */
	char **__any;
};
typedef struct wsa__ReferencePropertiesType wsa__ReferencePropertiesType;
#endif

#ifndef SOAP_TYPE_Remote_wsa__ReferenceParametersType
#define SOAP_TYPE_Remote_wsa__ReferenceParametersType (9)
/* wsa:ReferenceParametersType */
struct wsa__ReferenceParametersType
{
public:
	int __size;	/* sequence of elements <-any> */
	char **__any;
};
typedef struct wsa__ReferenceParametersType wsa__ReferenceParametersType;
#endif

#ifndef SOAP_TYPE_Remote_wsa__ServiceNameType
#define SOAP_TYPE_Remote_wsa__ServiceNameType (10)
/* Primitive wsa:ServiceNameType schema type: */
struct wsa__ServiceNameType
{
public:
	char *__item;
	char *PortName;	/* optional attribute of type xsd:string */
	char *__anyAttribute;	/* optional attribute of type xsd:anyType */
};
typedef struct wsa__ServiceNameType wsa__ServiceNameType;
#endif

#ifndef SOAP_TYPE_Remote_wsa__Relationship
#define SOAP_TYPE_Remote_wsa__Relationship (11)
/* Primitive wsa:Relationship schema type: */
struct wsa__Relationship
{
public:
	char *__item;
	char *RelationshipType;	/* optional attribute of type xsd:QName */
	char *__anyAttribute;	/* optional attribute of type xsd:anyType */
};
typedef struct wsa__Relationship wsa__Relationship;
#endif

#ifndef SOAP_TYPE_Remote_SOAP_ENV__Header
#define SOAP_TYPE_Remote_SOAP_ENV__Header (29)
/* SOAP Header: */
struct SOAP_ENV__Header
{
public:
	char *wsa__MessageID;	/* optional element of type wsa:MessageID */
	struct wsa__Relationship *wsa__RelatesTo;	/* optional element of type wsa:RelatesTo */
	struct wsa__EndpointReferenceType *wsa__From;	/* optional element of type wsa:From */
	struct wsa__EndpointReferenceType *wsa__ReplyTo;	/* mustUnderstand */
	struct wsa__EndpointReferenceType *wsa__FaultTo;	/* mustUnderstand */
	char *wsa__To;	/* mustUnderstand */
	char *wsa__Action;	/* mustUnderstand */
	struct _wsse__Security *wsse__Security;	/* optional element of type wsse:Security */
	struct wsd__AppSequenceType *wsd__AppSequence;	/* optional element of type wsd:AppSequence */
};
#endif

#ifndef SOAP_TYPE_Remote_xsd__anyType
#define SOAP_TYPE_Remote_xsd__anyType (36)
/* Primitive xsd:anyType schema type: */
class SOAP_CMAC xsd__anyType
{
public:
	char *__item;
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 36; } /* = unique id SOAP_TYPE_Remote_xsd__anyType */
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

#ifndef SOAP_TYPE_Remote_xsd__base64Binary
#define SOAP_TYPE_Remote_xsd__base64Binary (39)
/* Base64 schema type: */
class SOAP_CMAC xsd__base64Binary
{
public:
	unsigned char *__ptr;
	int __size;
	char *id;	/* optional element of type xsd:string */
	char *type;	/* optional element of type xsd:string */
	char *options;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 39; } /* = unique id SOAP_TYPE_Remote_xsd__base64Binary */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__base64Binary(): __ptr(NULL), id(NULL), type(NULL), options(NULL), soap(NULL) { xsd__base64Binary::soap_default(NULL); }
	virtual ~xsd__base64Binary() { }
};
#endif

#ifndef SOAP_TYPE_Remote_xsd__hexBinary
#define SOAP_TYPE_Remote_xsd__hexBinary (42)
/* hexBinary schema type: */
class SOAP_CMAC xsd__hexBinary
{
public:
	unsigned char *__ptr;
	int __size;
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 42; } /* = unique id SOAP_TYPE_Remote_xsd__hexBinary */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         xsd__hexBinary(): __ptr(NULL), soap(NULL) { xsd__hexBinary::soap_default(NULL); }
	virtual ~xsd__hexBinary() { }
};
#endif

#ifndef SOAP_TYPE_Remote_wsd__HelloType
#define SOAP_TYPE_Remote_wsd__HelloType (77)
/* wsd:HelloType */
struct wsd__HelloType
{
public:
	struct wsa__EndpointReferenceType wsa__EndpointReference;	/* required element of type wsa:EndpointReference */
	char *Types;	/* optional element of type xsd:QName */
	struct wsd__ScopesType *Scopes;	/* optional element of type wsd:ScopesType */
	char *XAddrs;	/* optional element of type wsd:UriListType */
	unsigned int MetadataVersion;	/* required element of type xsd:unsignedInt */
	int __size;	/* sequence of elements <-any> */
	char **__any;
	char *__anyAttribute;	/* optional attribute of type xsd:anyType */
};
typedef struct wsd__HelloType wsd__HelloType;
#endif

#ifndef SOAP_TYPE_Remote_wsd__ByeType
#define SOAP_TYPE_Remote_wsd__ByeType (78)
/* wsd:ByeType */
struct wsd__ByeType
{
public:
	struct wsa__EndpointReferenceType wsa__EndpointReference;	/* required element of type wsa:EndpointReference */
	char *Types;	/* optional element of type xsd:QName */
	struct wsd__ScopesType *Scopes;	/* optional element of type wsd:ScopesType */
	char *XAddrs;	/* optional element of type wsd:UriListType */
	unsigned int *MetadataVersion;	/* optional element of type xsd:unsignedInt */
	int __size;	/* sequence of elements <-any> */
	char **__any;
	char *__anyAttribute;	/* optional attribute of type xsd:anyType */
};
typedef struct wsd__ByeType wsd__ByeType;
#endif

#ifndef SOAP_TYPE_Remote_wsd__ProbeType
#define SOAP_TYPE_Remote_wsd__ProbeType (79)
/* wsd:ProbeType */
struct wsd__ProbeType
{
public:
	char *Types;	/* optional element of type xsd:QName */
	struct wsd__ScopesType *Scopes;	/* optional element of type wsd:ScopesType */
	int __size;	/* sequence of elements <-any> */
	char **__any;
	char *__anyAttribute;	/* optional attribute of type xsd:anyType */
};
typedef struct wsd__ProbeType wsd__ProbeType;
#endif

#ifndef SOAP_TYPE_Remote_wsd__ProbeMatchesType
#define SOAP_TYPE_Remote_wsd__ProbeMatchesType (80)
/* wsd:ProbeMatchesType */
struct wsd__ProbeMatchesType
{
public:
	int __sizeProbeMatch;	/* sequence of elements <ProbeMatch> */
	struct wsd__ProbeMatchType *ProbeMatch;	/* optional element of type wsd:ProbeMatchType */
	int __size;	/* sequence of elements <-any> */
	char **__any;
	char *__anyAttribute;	/* optional attribute of type xsd:anyType */
};
typedef struct wsd__ProbeMatchesType wsd__ProbeMatchesType;
#endif

#ifndef SOAP_TYPE_Remote_wsd__ProbeMatchType
#define SOAP_TYPE_Remote_wsd__ProbeMatchType (81)
/* wsd:ProbeMatchType */
struct wsd__ProbeMatchType
{
public:
	struct wsa__EndpointReferenceType wsa__EndpointReference;	/* required element of type wsa:EndpointReference */
	char *Types;	/* optional element of type xsd:QName */
	struct wsd__ScopesType *Scopes;	/* optional element of type wsd:ScopesType */
	char *XAddrs;	/* optional element of type wsd:UriListType */
	unsigned int MetadataVersion;	/* required element of type xsd:unsignedInt */
	int __size;	/* sequence of elements <-any> */
	char **__any;
	char *__anyAttribute;	/* optional attribute of type xsd:anyType */
};
typedef struct wsd__ProbeMatchType wsd__ProbeMatchType;
#endif

#ifndef SOAP_TYPE_Remote_wsd__ResolveType
#define SOAP_TYPE_Remote_wsd__ResolveType (82)
/* wsd:ResolveType */
struct wsd__ResolveType
{
public:
	struct wsa__EndpointReferenceType wsa__EndpointReference;	/* required element of type wsa:EndpointReference */
	int __size;	/* sequence of elements <-any> */
	char **__any;
	char *__anyAttribute;	/* optional attribute of type xsd:anyType */
};
typedef struct wsd__ResolveType wsd__ResolveType;
#endif

#ifndef SOAP_TYPE_Remote_wsd__ResolveMatchesType
#define SOAP_TYPE_Remote_wsd__ResolveMatchesType (83)
/* wsd:ResolveMatchesType */
struct wsd__ResolveMatchesType
{
public:
	struct wsd__ResolveMatchType *ResolveMatch;	/* optional element of type wsd:ResolveMatchType */
	int __size;	/* sequence of elements <-any> */
	char **__any;
	char *__anyAttribute;	/* optional attribute of type xsd:anyType */
};
typedef struct wsd__ResolveMatchesType wsd__ResolveMatchesType;
#endif

#ifndef SOAP_TYPE_Remote_wsd__ResolveMatchType
#define SOAP_TYPE_Remote_wsd__ResolveMatchType (84)
/* wsd:ResolveMatchType */
struct wsd__ResolveMatchType
{
public:
	struct wsa__EndpointReferenceType wsa__EndpointReference;	/* required element of type wsa:EndpointReference */
	char *Types;	/* optional element of type xsd:QName */
	struct wsd__ScopesType *Scopes;	/* optional element of type wsd:ScopesType */
	char *XAddrs;	/* required element of type wsd:UriListType */
	unsigned int MetadataVersion;	/* required element of type xsd:unsignedInt */
	int __size;	/* sequence of elements <-any> */
	char **__any;
	char *__anyAttribute;	/* optional attribute of type xsd:anyType */
};
typedef struct wsd__ResolveMatchType wsd__ResolveMatchType;
#endif

#ifndef SOAP_TYPE_Remote_wsd__SecurityType
#define SOAP_TYPE_Remote_wsd__SecurityType (86)
/* wsd:SecurityType */
struct wsd__SecurityType
{
public:
	struct wsd__SigType *Sig;	/* optional element of type wsd:SigType */
	char *__anyAttribute;	/* optional attribute of type xsd:anyType */
};
typedef struct wsd__SecurityType wsd__SecurityType;
#endif

#ifndef SOAP_TYPE_Remote_wsd__SigType
#define SOAP_TYPE_Remote_wsd__SigType (87)
/* wsd:SigType */
struct wsd__SigType
{
public:
	int __size;	/* sequence of elements <-any> */
	char **__any;
	char *Scheme;	/* required attribute of type xsd:string */
	char *KeyId;	/* optional attribute of type xsd:string */
	int xsd__IDREFS;	/* optional attribute of type xsd:int */
};
typedef struct wsd__SigType wsd__SigType;
#endif

#ifndef SOAP_TYPE_Remote_wsd__ScopesType
#define SOAP_TYPE_Remote_wsd__ScopesType (85)
/* Primitive wsd:ScopesType schema type: */
struct wsd__ScopesType
{
public:
	char *__item;
	char *MatchBy;	/* optional attribute of type xsd:string */
	char *__anyAttribute;	/* optional attribute of type xsd:anyType */
};
typedef struct wsd__ScopesType wsd__ScopesType;
#endif

#ifndef SOAP_TYPE_Remote_wsd__AppSequenceType
#define SOAP_TYPE_Remote_wsd__AppSequenceType (88)
/* wsd:AppSequenceType */
struct wsd__AppSequenceType
{
public:
	unsigned int InstanceId;	/* required attribute of type xsd:unsignedInt */
	char *SequenceId;	/* optional attribute of type xsd:string */
	unsigned int MessageNumber;	/* required attribute of type xsd:unsignedInt */
	char *__anyAttribute;	/* optional attribute of type xsd:anyType */
};
typedef struct wsd__AppSequenceType wsd__AppSequenceType;
#endif

#ifndef SOAP_TYPE_Remote__wsu__Timestamp
#define SOAP_TYPE_Remote__wsu__Timestamp (115)
/* wsu:Timestamp */
struct _wsu__Timestamp
{
public:
	char *wsu__Id;	/* optional attribute of type xsd:string */
	char *Created;	/* optional element of type xsd:string */
	char *Expires;	/* optional element of type xsd:string */
};
typedef struct _wsu__Timestamp _wsu__Timestamp;
#endif

#ifndef SOAP_TYPE_Remote__wsse__UsernameToken
#define SOAP_TYPE_Remote__wsse__UsernameToken (117)
/* wsse:UsernameToken */
struct _wsse__UsernameToken
{
public:
	char *Username;	/* optional element of type xsd:string */
	struct _wsse__Password *Password;	/* optional element of type wsse:Password */
	char *Nonce;	/* optional element of type xsd:string */
	char *wsu__Created;	/* optional element of type xsd:string */
	char *wsu__Id;	/* optional attribute of type xsd:string */
};
typedef struct _wsse__UsernameToken _wsse__UsernameToken;
#endif

#ifndef SOAP_TYPE_Remote__wsse__BinarySecurityToken
#define SOAP_TYPE_Remote__wsse__BinarySecurityToken (120)
/* Primitive wsse:BinarySecurityToken schema type: */
struct _wsse__BinarySecurityToken
{
public:
	char *__item;
	char *wsu__Id;	/* optional attribute of type xsd:string */
	char *ValueType;	/* optional attribute of type xsd:string */
	char *EncodingType;	/* optional attribute of type xsd:string */
};
typedef struct _wsse__BinarySecurityToken _wsse__BinarySecurityToken;
#endif

#ifndef SOAP_TYPE_Remote__wsse__Reference
#define SOAP_TYPE_Remote__wsse__Reference (121)
/* wsse:Reference */
struct _wsse__Reference
{
public:
	char *URI;	/* optional attribute of type xsd:string */
	char *ValueType;	/* optional attribute of type xsd:string */
};
typedef struct _wsse__Reference _wsse__Reference;
#endif

#ifndef SOAP_TYPE_Remote__wsse__Embedded
#define SOAP_TYPE_Remote__wsse__Embedded (122)
/* wsse:Embedded */
struct _wsse__Embedded
{
public:
	char *wsu__Id;	/* optional attribute of type xsd:string */
	char *ValueType;	/* optional attribute of type xsd:string */
};
typedef struct _wsse__Embedded _wsse__Embedded;
#endif

#ifndef SOAP_TYPE_Remote__wsse__KeyIdentifier
#define SOAP_TYPE_Remote__wsse__KeyIdentifier (123)
/* Primitive wsse:KeyIdentifier schema type: */
struct _wsse__KeyIdentifier
{
public:
	char *__item;
	char *wsu__Id;	/* optional attribute of type xsd:string */
	char *ValueType;	/* optional attribute of type xsd:string */
	char *EncodingType;	/* optional attribute of type xsd:string */
};
typedef struct _wsse__KeyIdentifier _wsse__KeyIdentifier;
#endif

#ifndef SOAP_TYPE_Remote__wsse__SecurityTokenReference
#define SOAP_TYPE_Remote__wsse__SecurityTokenReference (124)
/* wsse:SecurityTokenReference */
struct _wsse__SecurityTokenReference
{
public:
	struct _wsse__Reference *Reference;	/* optional element of type wsse:Reference */
	struct _wsse__KeyIdentifier *KeyIdentifier;	/* optional element of type wsse:KeyIdentifier */
	struct _wsse__Embedded *Embedded;	/* optional element of type wsse:Embedded */
	char *wsu__Id;	/* optional attribute of type xsd:string */
	char *Usage;	/* optional attribute of type xsd:string */
};
typedef struct _wsse__SecurityTokenReference _wsse__SecurityTokenReference;
#endif

#ifndef SOAP_TYPE_Remote_ds__SignatureType
#define SOAP_TYPE_Remote_ds__SignatureType (128)
/* ds:SignatureType */
struct ds__SignatureType
{
public:
	struct ds__SignedInfoType *SignedInfo;	/* optional element of type ds:SignedInfoType */
	char *SignatureValue;	/* optional element of type xsd:string */
	struct ds__KeyInfoType *KeyInfo;	/* optional element of type ds:KeyInfoType */
	char *Id;	/* optional attribute of type xsd:string */
};
typedef struct ds__SignatureType ds__SignatureType;
#endif

#ifndef SOAP_TYPE_Remote__c14n__InclusiveNamespaces
#define SOAP_TYPE_Remote__c14n__InclusiveNamespaces (137)
/* c14n:InclusiveNamespaces */
struct _c14n__InclusiveNamespaces
{
public:
	char *PrefixList;	/* optional attribute of type xsd:string */
};
typedef struct _c14n__InclusiveNamespaces _c14n__InclusiveNamespaces;
#endif

#ifndef SOAP_TYPE_Remote_ds__TransformType
#define SOAP_TYPE_Remote_ds__TransformType (138)
/* ds:TransformType */
struct ds__TransformType
{
public:
	struct _c14n__InclusiveNamespaces *c14n__InclusiveNamespaces;	/* optional element of type c14n:InclusiveNamespaces */
	char *__any;
	char *Algorithm;	/* optional attribute of type xsd:string */
};
typedef struct ds__TransformType ds__TransformType;
#endif

#ifndef SOAP_TYPE_Remote_ds__KeyInfoType
#define SOAP_TYPE_Remote_ds__KeyInfoType (131)
/* ds:KeyInfoType */
struct ds__KeyInfoType
{
public:
	char *KeyName;	/* optional element of type xsd:string */
	struct ds__KeyValueType *KeyValue;	/* optional element of type ds:KeyValueType */
	struct ds__RetrievalMethodType *RetrievalMethod;	/* optional element of type ds:RetrievalMethodType */
	struct ds__X509DataType *X509Data;	/* optional element of type ds:X509DataType */
	struct _wsse__SecurityTokenReference *wsse__SecurityTokenReference;	/* optional element of type wsse:SecurityTokenReference */
	char *Id;	/* optional attribute of type xsd:string */
};
typedef struct ds__KeyInfoType ds__KeyInfoType;
#endif

#ifndef SOAP_TYPE_Remote_ds__SignedInfoType
#define SOAP_TYPE_Remote_ds__SignedInfoType (129)
/* ds:SignedInfoType */
struct ds__SignedInfoType
{
public:
	struct ds__CanonicalizationMethodType *CanonicalizationMethod;	/* required element of type ds:CanonicalizationMethodType */
	struct ds__SignatureMethodType *SignatureMethod;	/* required element of type ds:SignatureMethodType */
	int __sizeReference;	/* sequence of elements <Reference> */
	struct ds__ReferenceType **Reference;	/* required element of type ds:ReferenceType */
	char *Id;	/* optional attribute of type xsd:string */
};
typedef struct ds__SignedInfoType ds__SignedInfoType;
#endif

#ifndef SOAP_TYPE_Remote_ds__CanonicalizationMethodType
#define SOAP_TYPE_Remote_ds__CanonicalizationMethodType (133)
/* ds:CanonicalizationMethodType */
struct ds__CanonicalizationMethodType
{
public:
	char *Algorithm;	/* required attribute of type xsd:string */
	struct _c14n__InclusiveNamespaces *c14n__InclusiveNamespaces;	/* optional element of type c14n:InclusiveNamespaces */
};
typedef struct ds__CanonicalizationMethodType ds__CanonicalizationMethodType;
#endif

#ifndef SOAP_TYPE_Remote_ds__SignatureMethodType
#define SOAP_TYPE_Remote_ds__SignatureMethodType (134)
/* ds:SignatureMethodType */
struct ds__SignatureMethodType
{
public:
	int *HMACOutputLength;	/* optional element of type xsd:int */
	char *Algorithm;	/* required attribute of type xsd:string */
};
typedef struct ds__SignatureMethodType ds__SignatureMethodType;
#endif

#ifndef SOAP_TYPE_Remote_ds__ReferenceType
#define SOAP_TYPE_Remote_ds__ReferenceType (135)
/* ds:ReferenceType */
struct ds__ReferenceType
{
public:
	struct ds__TransformsType *Transforms;	/* optional element of type ds:TransformsType */
	struct ds__DigestMethodType *DigestMethod;	/* required element of type ds:DigestMethodType */
	char *DigestValue;	/* required element of type xsd:string */
	char *Id;	/* optional attribute of type xsd:string */
	char *URI;	/* optional attribute of type xsd:string */
	char *Type;	/* optional attribute of type xsd:string */
};
typedef struct ds__ReferenceType ds__ReferenceType;
#endif

#ifndef SOAP_TYPE_Remote_ds__TransformsType
#define SOAP_TYPE_Remote_ds__TransformsType (136)
/* ds:TransformsType */
struct ds__TransformsType
{
public:
	int __sizeTransform;	/* sequence of elements <Transform> */
	struct ds__TransformType *Transform;	/* required element of type ds:TransformType */
};
typedef struct ds__TransformsType ds__TransformsType;
#endif

#ifndef SOAP_TYPE_Remote_ds__DigestMethodType
#define SOAP_TYPE_Remote_ds__DigestMethodType (140)
/* ds:DigestMethodType */
struct ds__DigestMethodType
{
public:
	char *Algorithm;	/* required attribute of type xsd:string */
};
typedef struct ds__DigestMethodType ds__DigestMethodType;
#endif

#ifndef SOAP_TYPE_Remote_ds__KeyValueType
#define SOAP_TYPE_Remote_ds__KeyValueType (141)
/* ds:KeyValueType */
struct ds__KeyValueType
{
public:
	struct ds__DSAKeyValueType *DSAKeyValue;	/* required element of type ds:DSAKeyValueType */
	struct ds__RSAKeyValueType *RSAKeyValue;	/* required element of type ds:RSAKeyValueType */
};
typedef struct ds__KeyValueType ds__KeyValueType;
#endif

#ifndef SOAP_TYPE_Remote_ds__RetrievalMethodType
#define SOAP_TYPE_Remote_ds__RetrievalMethodType (143)
/* ds:RetrievalMethodType */
struct ds__RetrievalMethodType
{
public:
	struct ds__TransformsType *Transforms;	/* optional element of type ds:TransformsType */
	char *URI;	/* optional attribute of type xsd:string */
	char *Type;	/* optional attribute of type xsd:string */
};
typedef struct ds__RetrievalMethodType ds__RetrievalMethodType;
#endif

#ifndef SOAP_TYPE_Remote_ds__X509DataType
#define SOAP_TYPE_Remote_ds__X509DataType (145)
/* ds:X509DataType */
struct ds__X509DataType
{
public:
	struct ds__X509IssuerSerialType *X509IssuerSerial;	/* required element of type ds:X509IssuerSerialType */
	char *X509SKI;	/* required element of type xsd:string */
	char *X509SubjectName;	/* required element of type xsd:string */
	char *X509Certificate;	/* required element of type xsd:string */
	char *X509CRL;	/* required element of type xsd:string */
};
typedef struct ds__X509DataType ds__X509DataType;
#endif

#ifndef SOAP_TYPE_Remote_ds__X509IssuerSerialType
#define SOAP_TYPE_Remote_ds__X509IssuerSerialType (148)
/* ds:X509IssuerSerialType */
struct ds__X509IssuerSerialType
{
public:
	char *X509IssuerName;	/* required element of type xsd:string */
	int X509SerialNumber;	/* required element of type xsd:int */
};
typedef struct ds__X509IssuerSerialType ds__X509IssuerSerialType;
#endif

#ifndef SOAP_TYPE_Remote_ds__DSAKeyValueType
#define SOAP_TYPE_Remote_ds__DSAKeyValueType (149)
/* ds:DSAKeyValueType */
struct ds__DSAKeyValueType
{
public:
	char *G;	/* optional element of type xsd:string */
	char *Y;	/* required element of type xsd:string */
	char *J;	/* optional element of type xsd:string */
	char *P;	/* required element of type xsd:string */
	char *Q;	/* required element of type xsd:string */
	char *Seed;	/* required element of type xsd:string */
	char *PgenCounter;	/* required element of type xsd:string */
};
typedef struct ds__DSAKeyValueType ds__DSAKeyValueType;
#endif

#ifndef SOAP_TYPE_Remote_ds__RSAKeyValueType
#define SOAP_TYPE_Remote_ds__RSAKeyValueType (150)
/* ds:RSAKeyValueType */
struct ds__RSAKeyValueType
{
public:
	char *Modulus;	/* required element of type xsd:string */
	char *Exponent;	/* required element of type xsd:string */
};
typedef struct ds__RSAKeyValueType ds__RSAKeyValueType;
#endif

#ifndef SOAP_TYPE_Remote__wsse__Security
#define SOAP_TYPE_Remote__wsse__Security (162)
/* wsse:Security */
struct _wsse__Security
{
public:
	struct _wsu__Timestamp *wsu__Timestamp;	/* optional element of type wsu:Timestamp */
	struct _wsse__UsernameToken *UsernameToken;	/* optional element of type wsse:UsernameToken */
	struct _wsse__BinarySecurityToken *BinarySecurityToken;	/* optional element of type wsse:BinarySecurityToken */
	struct ds__SignatureType *ds__Signature;	/* optional element of type ds:SignatureType */
	char *SOAP_ENV__actor;	/* optional attribute of type xsd:string */
	char *SOAP_ENV__role;	/* optional attribute of type xsd:string */
};
typedef struct _wsse__Security _wsse__Security;
#endif

#ifndef SOAP_TYPE_Remote__wsse__Password
#define SOAP_TYPE_Remote__wsse__Password (118)
/* Primitive wsse:Password schema type: */
struct _wsse__Password
{
public:
	char *__item;
	char *Type;	/* optional attribute of type xsd:string */
};
typedef struct _wsse__Password _wsse__Password;
#endif

#ifndef SOAP_TYPE_Remote___wsd__Hello
#define SOAP_TYPE_Remote___wsd__Hello (172)
/* Operation wrapper: */
struct __wsd__Hello
{
public:
	struct wsd__HelloType *wsd__Hello;	/* optional element of type wsd:HelloType */
};
#endif

#ifndef SOAP_TYPE_Remote___wsd__Bye
#define SOAP_TYPE_Remote___wsd__Bye (175)
/* Operation wrapper: */
struct __wsd__Bye
{
public:
	struct wsd__ByeType *wsd__Bye;	/* optional element of type wsd:ByeType */
};
#endif

#ifndef SOAP_TYPE_Remote___wsd__Probe
#define SOAP_TYPE_Remote___wsd__Probe (178)
/* Operation wrapper: */
struct __wsd__Probe
{
public:
	struct wsd__ProbeType *wsd__Probe;	/* optional element of type wsd:ProbeType */
};
#endif

#ifndef SOAP_TYPE_Remote___wsd__ProbeMatches
#define SOAP_TYPE_Remote___wsd__ProbeMatches (181)
/* Operation wrapper: */
struct __wsd__ProbeMatches
{
public:
	struct wsd__ProbeMatchesType *wsd__ProbeMatches;	/* optional element of type wsd:ProbeMatchesType */
};
#endif

#ifndef SOAP_TYPE_Remote___wsd__Resolve
#define SOAP_TYPE_Remote___wsd__Resolve (184)
/* Operation wrapper: */
struct __wsd__Resolve
{
public:
	struct wsd__ResolveType *wsd__Resolve;	/* optional element of type wsd:ResolveType */
};
#endif

#ifndef SOAP_TYPE_Remote___wsd__ResolveMatches
#define SOAP_TYPE_Remote___wsd__ResolveMatches (187)
/* Operation wrapper: */
struct __wsd__ResolveMatches
{
public:
	struct wsd__ResolveMatchesType *wsd__ResolveMatches;	/* optional element of type wsd:ResolveMatchesType */
};
#endif

#ifndef SOAP_TYPE_Remote_SOAP_ENV__Code
#define SOAP_TYPE_Remote_SOAP_ENV__Code (188)
/* SOAP Fault Code: */
struct SOAP_ENV__Code
{
public:
	char *SOAP_ENV__Value;	/* optional element of type xsd:QName */
	struct SOAP_ENV__Code *SOAP_ENV__Subcode;	/* optional element of type SOAP-ENV:Code */
};
#endif

#ifndef SOAP_TYPE_Remote_SOAP_ENV__Detail
#define SOAP_TYPE_Remote_SOAP_ENV__Detail (190)
/* SOAP-ENV:Detail */
struct SOAP_ENV__Detail
{
public:
	int __type;	/* any type of element <fault> (defined below) */
	void *fault;	/* transient */
	char *__any;
};
#endif

#ifndef SOAP_TYPE_Remote_SOAP_ENV__Reason
#define SOAP_TYPE_Remote_SOAP_ENV__Reason (192)
/* SOAP-ENV:Reason */
struct SOAP_ENV__Reason
{
public:
	char *SOAP_ENV__Text;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_Remote_SOAP_ENV__Fault
#define SOAP_TYPE_Remote_SOAP_ENV__Fault (193)
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

#ifndef SOAP_TYPE_Remote__QName
#define SOAP_TYPE_Remote__QName (5)
typedef char *_QName;
#endif

#ifndef SOAP_TYPE_Remote__XML
#define SOAP_TYPE_Remote__XML (6)
typedef char *_XML;
#endif

#ifndef SOAP_TYPE_Remote__wsa__EndpointReference
#define SOAP_TYPE_Remote__wsa__EndpointReference (19)
typedef struct wsa__EndpointReferenceType _wsa__EndpointReference;
#endif

#ifndef SOAP_TYPE_Remote__wsa__MessageID
#define SOAP_TYPE_Remote__wsa__MessageID (20)
typedef char *_wsa__MessageID;
#endif

#ifndef SOAP_TYPE_Remote__wsa__RelatesTo
#define SOAP_TYPE_Remote__wsa__RelatesTo (21)
typedef struct wsa__Relationship _wsa__RelatesTo;
#endif

#ifndef SOAP_TYPE_Remote__wsa__To
#define SOAP_TYPE_Remote__wsa__To (22)
typedef char *_wsa__To;
#endif

#ifndef SOAP_TYPE_Remote__wsa__Action
#define SOAP_TYPE_Remote__wsa__Action (23)
typedef char *_wsa__Action;
#endif

#ifndef SOAP_TYPE_Remote__wsa__From
#define SOAP_TYPE_Remote__wsa__From (24)
typedef struct wsa__EndpointReferenceType _wsa__From;
#endif

#ifndef SOAP_TYPE_Remote__wsa__ReplyTo
#define SOAP_TYPE_Remote__wsa__ReplyTo (25)
typedef struct wsa__EndpointReferenceType _wsa__ReplyTo;
#endif

#ifndef SOAP_TYPE_Remote__wsa__FaultTo
#define SOAP_TYPE_Remote__wsa__FaultTo (26)
typedef struct wsa__EndpointReferenceType _wsa__FaultTo;
#endif

#ifndef SOAP_TYPE_Remote__wsa__ReplyAfter
#define SOAP_TYPE_Remote__wsa__ReplyAfter (28)
typedef unsigned int _wsa__ReplyAfter;
#endif

#ifndef SOAP_TYPE_Remote__xml__lang
#define SOAP_TYPE_Remote__xml__lang (34)
typedef char *_xml__lang;
#endif

#ifndef SOAP_TYPE_Remote__xsd__schema
#define SOAP_TYPE_Remote__xsd__schema (35)
typedef char *_xsd__schema;
#endif

#ifndef SOAP_TYPE_Remote_xsd__anyURI
#define SOAP_TYPE_Remote_xsd__anyURI (38)
typedef char *xsd__anyURI;
#endif

#ifndef SOAP_TYPE_Remote_xsd__byte
#define SOAP_TYPE_Remote_xsd__byte (43)
typedef char xsd__byte;
#endif

#ifndef SOAP_TYPE_Remote_xsd__date
#define SOAP_TYPE_Remote_xsd__date (44)
typedef char *xsd__date;
#endif

#ifndef SOAP_TYPE_Remote_xsd__decimal
#define SOAP_TYPE_Remote_xsd__decimal (46)
typedef double xsd__decimal;
#endif

#ifndef SOAP_TYPE_Remote_xsd__double
#define SOAP_TYPE_Remote_xsd__double (47)
typedef double xsd__double;
#endif

#ifndef SOAP_TYPE_Remote_xsd__duration
#define SOAP_TYPE_Remote_xsd__duration (48)
typedef char *xsd__duration;
#endif

#ifndef SOAP_TYPE_Remote_xsd__float
#define SOAP_TYPE_Remote_xsd__float (50)
typedef float xsd__float;
#endif

#ifndef SOAP_TYPE_Remote_xsd__ID
#define SOAP_TYPE_Remote_xsd__ID (51)
typedef char *xsd__ID;
#endif

#ifndef SOAP_TYPE_Remote_xsd__integer
#define SOAP_TYPE_Remote_xsd__integer (53)
typedef LONG64 xsd__integer;
#endif

#ifndef SOAP_TYPE_Remote_xsd__language
#define SOAP_TYPE_Remote_xsd__language (54)
typedef char *xsd__language;
#endif

#ifndef SOAP_TYPE_Remote_xsd__long
#define SOAP_TYPE_Remote_xsd__long (55)
typedef LONG64 xsd__long;
#endif

#ifndef SOAP_TYPE_Remote_xsd__Name
#define SOAP_TYPE_Remote_xsd__Name (56)
typedef char *xsd__Name;
#endif

#ifndef SOAP_TYPE_Remote_xsd__NCName
#define SOAP_TYPE_Remote_xsd__NCName (57)
typedef char *xsd__NCName;
#endif

#ifndef SOAP_TYPE_Remote_xsd__NMTOKEN
#define SOAP_TYPE_Remote_xsd__NMTOKEN (58)
typedef char *xsd__NMTOKEN;
#endif

#ifndef SOAP_TYPE_Remote_xsd__negativeInteger
#define SOAP_TYPE_Remote_xsd__negativeInteger (59)
typedef LONG64 xsd__negativeInteger;
#endif

#ifndef SOAP_TYPE_Remote_xsd__nonNegativeInteger
#define SOAP_TYPE_Remote_xsd__nonNegativeInteger (61)
typedef ULONG64 xsd__nonNegativeInteger;
#endif

#ifndef SOAP_TYPE_Remote_xsd__nonPositiveInteger
#define SOAP_TYPE_Remote_xsd__nonPositiveInteger (62)
typedef LONG64 xsd__nonPositiveInteger;
#endif

#ifndef SOAP_TYPE_Remote_xsd__normalizedString
#define SOAP_TYPE_Remote_xsd__normalizedString (63)
typedef char *xsd__normalizedString;
#endif

#ifndef SOAP_TYPE_Remote_xsd__positiveInteger
#define SOAP_TYPE_Remote_xsd__positiveInteger (64)
typedef ULONG64 xsd__positiveInteger;
#endif

#ifndef SOAP_TYPE_Remote_xsd__QName
#define SOAP_TYPE_Remote_xsd__QName (65)
typedef char *xsd__QName;
#endif

#ifndef SOAP_TYPE_Remote_xsd__time
#define SOAP_TYPE_Remote_xsd__time (66)
typedef char *xsd__time;
#endif

#ifndef SOAP_TYPE_Remote_xsd__token
#define SOAP_TYPE_Remote_xsd__token (67)
typedef char *xsd__token;
#endif

#ifndef SOAP_TYPE_Remote_xsd__short
#define SOAP_TYPE_Remote_xsd__short (69)
typedef short xsd__short;
#endif

#ifndef SOAP_TYPE_Remote_xsd__unsignedByte
#define SOAP_TYPE_Remote_xsd__unsignedByte (70)
typedef unsigned char xsd__unsignedByte;
#endif

#ifndef SOAP_TYPE_Remote_xsd__unsignedInt
#define SOAP_TYPE_Remote_xsd__unsignedInt (71)
typedef unsigned int xsd__unsignedInt;
#endif

#ifndef SOAP_TYPE_Remote_xsd__unsignedLong
#define SOAP_TYPE_Remote_xsd__unsignedLong (72)
typedef ULONG64 xsd__unsignedLong;
#endif

#ifndef SOAP_TYPE_Remote_xsd__unsignedShort
#define SOAP_TYPE_Remote_xsd__unsignedShort (74)
typedef unsigned short xsd__unsignedShort;
#endif

#ifndef SOAP_TYPE_Remote__SOAP_ENC__actor
#define SOAP_TYPE_Remote__SOAP_ENC__actor (75)
typedef char *_SOAP_ENC__actor;
#endif

#ifndef SOAP_TYPE_Remote__SOAP_ENC__mustUnderstand
#define SOAP_TYPE_Remote__SOAP_ENC__mustUnderstand (76)
typedef int _SOAP_ENC__mustUnderstand;
#endif

#ifndef SOAP_TYPE_Remote_wsd__OpenRelationshipType
#define SOAP_TYPE_Remote_wsd__OpenRelationshipType (89)
typedef char *wsd__OpenRelationshipType;
#endif

#ifndef SOAP_TYPE_Remote_wsd__UriListType
#define SOAP_TYPE_Remote_wsd__UriListType (90)
typedef char *wsd__UriListType;
#endif

#ifndef SOAP_TYPE_Remote_wsd__FaultCodeOpenType
#define SOAP_TYPE_Remote_wsd__FaultCodeOpenType (91)
typedef char *wsd__FaultCodeOpenType;
#endif

#ifndef SOAP_TYPE_Remote__wsd__Hello
#define SOAP_TYPE_Remote__wsd__Hello (99)
typedef struct wsd__HelloType _wsd__Hello;
#endif

#ifndef SOAP_TYPE_Remote__wsd__Bye
#define SOAP_TYPE_Remote__wsd__Bye (100)
typedef struct wsd__ByeType _wsd__Bye;
#endif

#ifndef SOAP_TYPE_Remote__wsd__Probe
#define SOAP_TYPE_Remote__wsd__Probe (101)
typedef struct wsd__ProbeType _wsd__Probe;
#endif

#ifndef SOAP_TYPE_Remote__wsd__ProbeMatches
#define SOAP_TYPE_Remote__wsd__ProbeMatches (102)
typedef struct wsd__ProbeMatchesType _wsd__ProbeMatches;
#endif

#ifndef SOAP_TYPE_Remote__wsd__Resolve
#define SOAP_TYPE_Remote__wsd__Resolve (103)
typedef struct wsd__ResolveType _wsd__Resolve;
#endif

#ifndef SOAP_TYPE_Remote__wsd__ResolveMatches
#define SOAP_TYPE_Remote__wsd__ResolveMatches (104)
typedef struct wsd__ResolveMatchesType _wsd__ResolveMatches;
#endif

#ifndef SOAP_TYPE_Remote__wsd__Types
#define SOAP_TYPE_Remote__wsd__Types (105)
typedef char *_wsd__Types;
#endif

#ifndef SOAP_TYPE_Remote__wsd__Scopes
#define SOAP_TYPE_Remote__wsd__Scopes (106)
typedef struct wsd__ScopesType _wsd__Scopes;
#endif

#ifndef SOAP_TYPE_Remote__wsd__XAddrs
#define SOAP_TYPE_Remote__wsd__XAddrs (107)
typedef char *_wsd__XAddrs;
#endif

#ifndef SOAP_TYPE_Remote__wsd__MetadataVersion
#define SOAP_TYPE_Remote__wsd__MetadataVersion (108)
typedef unsigned int _wsd__MetadataVersion;
#endif

#ifndef SOAP_TYPE_Remote__wsd__SupportedMatchingRules
#define SOAP_TYPE_Remote__wsd__SupportedMatchingRules (109)
typedef char *_wsd__SupportedMatchingRules;
#endif

#ifndef SOAP_TYPE_Remote__wsd__Security
#define SOAP_TYPE_Remote__wsd__Security (110)
typedef struct wsd__SecurityType _wsd__Security;
#endif

#ifndef SOAP_TYPE_Remote__wsd__Sig
#define SOAP_TYPE_Remote__wsd__Sig (111)
typedef struct wsd__SigType _wsd__Sig;
#endif

#ifndef SOAP_TYPE_Remote__wsd__AppSequence
#define SOAP_TYPE_Remote__wsd__AppSequence (112)
typedef struct wsd__AppSequenceType _wsd__AppSequence;
#endif

#ifndef SOAP_TYPE_Remote__wsd__Id
#define SOAP_TYPE_Remote__wsd__Id (113)
typedef char *_wsd__Id;
#endif


/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


} // namespace Remote


#endif

/* End of RemoteStub.h */
