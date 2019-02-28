#ifndef APISERVER_H
#define APISERVER_H

#include <Arduino.h>
#include <WebServer.h>
#include <WebRequest.h>
#include <ApiEndpoint.h>
#include "Ethernet3.h"


class ApiServer {
  
  //ApiEndpoint *endpoints;
  
  int endpointsCount;
  
  //WebServer webServer;

  
  public: 

    ApiServer();
    
    //ApiServer( ApiEndpoint *endpoints , int endpoitsCount );

    //ApiServer( ApiEndpoint *endpoints , int endpointsCount , WebServer webServer );

    ApiServer startWebServer( EthernetServer ethernetServer );

    ApiServer runFullThread();

  
};

#endif