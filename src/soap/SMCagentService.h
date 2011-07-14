/* SMCagentService.h
   Generated by gSOAP 2.8.0 from SMC.h
   Copyright(C) 2000-2010, Robert van Engelen, Genivia Inc. All Rights Reserved.
   The generated code is released under one of the following licenses:
   GPL OR Genivia's license for commercial use.
*/

#ifndef SMCagentService_H
#define SMCagentService_H
#include "SMCH.h"

namespace SMC {
class SOAP_CMAC agentService : public soap
{ public:
	/// Constructor
	agentService();
	/// Constructor with copy of another engine state
	agentService(const struct soap&);
	/// Constructor with engine input+output mode control
	agentService(soap_mode iomode);
	/// Constructor with engine input and output mode control
	agentService(soap_mode imode, soap_mode omode);
	/// Destructor, also frees all deserialized data
	virtual ~agentService();
	/// Delete all deserialized data (uses soap_destroy and soap_end)
	virtual	void destroy();
	/// Initializer used by constructor
	virtual	void agentService_init(soap_mode imode, soap_mode omode);
	/// Create a copy
	virtual	agentService *copy();
	/// Force close connection (normally automatic)
	virtual	int soap_close_socket();
	/// Return sender-related fault to sender
	virtual	int soap_senderfault(const char *string, const char *detailXML);
	/// Return sender-related fault with SOAP 1.2 subcode to sender
	virtual	int soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML);
	/// Return receiver-related fault to sender
	virtual	int soap_receiverfault(const char *string, const char *detailXML);
	/// Return receiver-related fault with SOAP 1.2 subcode to sender
	virtual	int soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML);
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
	virtual	void soap_stream_fault(std::ostream&);
	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Run simple single-thread iterative service on port until a connection error occurs (returns error code or SOAP_OK), use this->bind_flag = SO_REUSEADDR to rebind for a rerun
	virtual	int run(int port);
	/// Bind service to port (returns master socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET bind(const char *host, int port, int backlog);
	/// Accept next request (returns socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET accept();
	/// Serve this request (returns error code or SOAP_OK)
	virtual	int serve();
	/// Used by serve() to dispatch a request (returns error code or SOAP_OK)
	virtual	int dispatch();

	///
	/// Service operations (you should define these):
	///

	/// Web service operation 'coreStation' (returns error code or SOAP_OK)
	virtual	int coreStation(std::string command, std::string &message);

	/// Web service operation 'addCamera' (returns error code or SOAP_OK)
	virtual	int addCamera(std::string uuid, std::string &message);

	/// Web service operation 'removeCamera' (returns error code or SOAP_OK)
	virtual	int removeCamera(std::string uuid, std::string &message);

	/// Web service operation 'setCameraInfo' (returns error code or SOAP_OK)
	virtual	int setCameraInfo(struct camera__info *_info, std::string &message);

	/// Web service operation 'setCameraURI' (returns error code or SOAP_OK)
	virtual	int setCameraURI(struct camera__uri *_info, struct camera__info &_infoResponse);
};

} // namespace SMC

#endif
