#ifndef RS_LIBHTTPSERVER_HEADERS_H
#define	RS_LIBHTTPSERVER_HEADERS_H

#include <string>

namespace rs {
namespace httpserver {

class Headers final {
public:
    static const std::string Http10;
    static const std::string Http11;
    
    static const std::string ContentLength;
    static const std::string ContentType;    
    static const std::string Accept;
    static const std::string AcceptEncoding;
    static const std::string ContentEncoding;
    static const std::string TransferEncoding;
    static const std::string Expect;
    static const std::string UserAgent;
    static const std::string Host;
    static const std::string Connection;
    static const std::string KeepAlive;
};

}}

#endif	/* RS_LIBHTTPSERVER_HEADERS_H */

