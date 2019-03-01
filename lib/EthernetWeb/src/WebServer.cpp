#include "WebServer.h"


#include <WebRequest.h>


WebServer::WebServer(){ 
  Serial.println(1);
}

WebServer::WebServer( EthernetServer ethernetServer ){
  this->ethernetServer = ethernetServer;
}

WebRequest WebServer::getWebRequest(){

  EthernetClient client;
  client = this->ethernetServer.available();

  if (client) {

    String readString;
    int maxLength = 50;

    while (client.connected() && maxLength>0) { 

      if (client.available()) {

        char c = client.read();
        readString += c;

        if (readString.indexOf("\n")>0){

          if (readString.indexOf("GET")>=0){
            readString.trim();

            WebRequest webRequest( readString , client );
            return webRequest;

          }else{

            return WebRequest();

          }
          
        }

      }

      maxLength--;

    }

    client.stop();

    return WebRequest();

  }

  client.stop();
  return WebRequest();

}
  //       }

  WebServer WebServer::replyRequest( WebPage webPage , EthernetClient ethernetClient ){
    serveWebPage( webPage , ethernetClient );
    return *this;
  }

  // }
  // client.stop();
  return (WebRequest());
}
