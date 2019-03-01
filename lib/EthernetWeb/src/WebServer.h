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

    WebServer replyRequest( WebPage webPage , EthernetClient ethernetClient );

    void serveWebPage( WebPage webPage , EthernetClient client );

    WebServer closeRequest( EthernetClient ethernetClient );
     
};


#endif