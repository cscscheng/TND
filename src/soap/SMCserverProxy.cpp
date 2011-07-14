/* SMCserverProxy.cpp
   Generated by gSOAP 2.8.0 from SMC.h
   Copyright(C) 2000-2010, Robert van Engelen, Genivia Inc. All Rights Reserved.
   The generated code is released under one of the following licenses:
   GPL OR Genivia's license for commercial use.
*/

#include "SMCserverProxy.h"

namespace SMC {

serverProxy::serverProxy()
{	serverProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

serverProxy::serverProxy(const struct soap &_soap) : soap(_soap)
{ }

serverProxy::serverProxy(soap_mode iomode)
{	serverProxy_init(iomode, iomode);
}

serverProxy::serverProxy(soap_mode imode, soap_mode omode)
{	serverProxy_init(imode, omode);
}

void serverProxy::serverProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this, imode);
	soap_omode(this, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] =
{
	{"SOAP-ENV", "http://schemas.xmlsoap.org/soap/envelope/", "http://www.w3.org/*/soap-envelope", NULL},
	{"SOAP-ENC", "http://schemas.xmlsoap.org/soap/encoding/", "http://www.w3.org/*/soap-encoding", NULL},
	{"xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL},
	{"xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL},
	{"camera", "http://tempuri.org/camera.xsd", NULL, NULL},
	{"agent", "http://tempuri.org/agent.xsd", NULL, NULL},
	{"server", "http://tempuri.org/server.xsd", NULL, NULL},
	{NULL, NULL, NULL, NULL}
};
	this->namespaces = namespaces;
}

serverProxy::~serverProxy()
{ }

void serverProxy::destroy()
{	soap_destroy(this);
	soap_end(this);
}

void serverProxy::soap_noheader()
{	header = NULL;
}

const SOAP_ENV__Fault *serverProxy::soap_fault()
{	return (const SMC::SOAP_ENV__Fault*)this->fault;
}

const char *serverProxy::soap_fault_string()
{	return *soap_faultstring(this);
}

const char *serverProxy::soap_fault_detail()
{	return *soap_faultdetail(this);
}

int serverProxy::soap_close_socket()
{	return soap_closesock(this);
}

void serverProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this, fd);
}

#ifndef WITH_LEAN
void serverProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this, os);
}

char *serverProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this, buf, len);
}
#endif

int serverProxy::getinfo(std::string command, std::string &message)
{	struct soap *soap = this;
	struct server__getinfo soap_tmp_server__getinfo;
	struct server__getinfoResponse *soap_tmp_server__getinfoResponse;
	const char *soap_action = NULL;
	soap->encodingStyle = NULL;
	soap_tmp_server__getinfo.command = command;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize_server__getinfo(soap, &soap_tmp_server__getinfo);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_server__getinfo(soap, &soap_tmp_server__getinfo, "server:getinfo", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_server__getinfo(soap, &soap_tmp_server__getinfo, "server:getinfo", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&message)
		return soap_closesock(soap);
	soap_default_std__string(soap, &message);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_tmp_server__getinfoResponse = soap_get_server__getinfoResponse(soap, NULL, "server:getinfoResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	message = soap_tmp_server__getinfoResponse->message;
	return soap_closesock(soap);
}

int serverProxy::setCameraInfo(struct camera__info *_info, std::string &message)
{	struct soap *soap = this;
	struct server__setCameraInfo soap_tmp_server__setCameraInfo;
	struct server__setCameraInfoResponse *soap_tmp_server__setCameraInfoResponse;
	const char *soap_action = NULL;
	soap->encodingStyle = NULL;
	soap_tmp_server__setCameraInfo._info = _info;
	soap_begin(soap);
	soap_serializeheader(soap);
	soap_serialize_server__setCameraInfo(soap, &soap_tmp_server__setCameraInfo);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put_server__setCameraInfo(soap, &soap_tmp_server__setCameraInfo, "server:setCameraInfo", NULL)
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put_server__setCameraInfo(soap, &soap_tmp_server__setCameraInfo, "server:setCameraInfo", NULL)
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!&message)
		return soap_closesock(soap);
	soap_default_std__string(soap, &message);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	soap_tmp_server__setCameraInfoResponse = soap_get_server__setCameraInfoResponse(soap, NULL, "server:setCameraInfoResponse", "");
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	message = soap_tmp_server__setCameraInfoResponse->message;
	return soap_closesock(soap);
}

} // namespace SMC

/* End of client proxy code */
