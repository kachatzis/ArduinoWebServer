#include "WebServer.h"


#include <WebRequest.h>


WebServer::WebServer(){ 
  Serial.println(1);
}

WebServer::WebServer( EthernetServer ethernetServer ){
  this->ethernetServer = ethernetServer;
}

WebRequest WebServer::getWebRequest(){
  // EthernetClient client;
  // client = this->ethernetServer.available();
  // if (client) {
  //   String readString;
  //   int maxLength = 50;
  //   while (client.connected() && maxLength>0) {   
  //     if (client.available()) {
  //       char c = client.read();
  //       readString += c;
  //       if (readString.indexOf("\n")>0){
  //         Serial.print("  >REQUESTED:");
  //         Serial.println(readString);
  //         client.stop();
  //         WebRequest webRequest( readString , client );
  //         return webRequest;
          
  //       }
  //     }
  //     maxLength--;
  //   }
  //   Serial.println("  >NULL-REQUEST-CLIENT-NOT-AVAILABLE-OR-MAX-LENGTH");
  //   client.stop();
  //   return WebRequest();
  // }
  // client.stop();
  return (WebRequest());
}
