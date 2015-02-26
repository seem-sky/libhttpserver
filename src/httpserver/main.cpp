#include <iostream>

#include "../libhttpserver/libhttpserver.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    auto service = rs::httpwebserver::Service::Create(8);
    
    auto func = [](rs::httpwebserver::socket_ptr socket, const boost::system::error_code & err) { 
        if (!!err) {
            cout << "Error: " << err.message() << endl;
        } else {        
            cout << "hello from: " << socket->getRemoteEndpoint().port() << std::endl; 
            
            socket->Send("HTTP/1.0 200 OK\r\nContent-Type: text/html\r\nConnection: close\r\n\r\n<html><body>hello</body></html>");
        }
    };
    
    auto socket = rs::httpwebserver::Socket::Create(service);
    socket->Listen("0.0.0.0", 10024, func);
    
    service->Run();
    
    return 0;
}