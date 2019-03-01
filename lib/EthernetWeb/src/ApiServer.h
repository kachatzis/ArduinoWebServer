#ifndef APISERVER_H
#define APISERVER_H


#include <Arduino.h>
#include <Ethernet.h>
#include "WebServer.h"


class ApiEndpoint;
class WebRequest;


class ApiServer {
  
  ApiEndpoint *endpoints;
  
  int endpointsCount;
  
  WebServer webServer;

  
  public: 

    ApiServer();
    
    ApiServer( ApiEndpoint *endpoints , int endpoitsCount );

    ApiServer( ApiEndpoint *endpoints , int endpointsCount , WebServer webServer );

    // ApiServer startWebServer( EthernetServer ethernetServer );

    ApiServer runFullThread();

    ApiEndpoint findEndpointByRequest( WebRequest webRequest );
  
};


#endif