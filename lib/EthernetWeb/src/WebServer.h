#ifndef WEBSERVER_H
#define WEBSERVER_H


#include <Arduino.h>
#include <Ethernet.h>
#include "WebPage.h"


class WebRequest;


class WebServer {

  EthernetServer ethernetServer = EthernetServer(80);


  public: 
    
    WebServer();

    WebServer( EthernetServer ethernetServer );
    
    WebRequest getWebRequest();
    // void awaitRequest( );

};


#endif