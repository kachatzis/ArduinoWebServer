#ifndef WEBSERVER_H
#define WEBSERVER_H

#include <Arduino.h>
#include "EthernetServer.h"
#include "EthernetClient.h"
#include "WebRequest.h"


class WebServer {

  EthernetServer server = EthernetServer(80);


  public: 
    
    WebServer( EthernetServer ethernetServer );
    
    WebServer( );
      
    WebRequest awaitRequest();
    // void awaitRequest( );

};


#endif