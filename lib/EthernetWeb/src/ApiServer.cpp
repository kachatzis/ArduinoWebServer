#include "ApiServer.h"


#include "ApiEndpoint.h"
#include "WebServer.h"
#include "WebRequest.h"
#include "WebPage.h"


ApiServer::ApiServer(){
  this->endpoints = new ApiEndpoint[0];
  this->endpointsCount = 0;
  this->webServer = WebServer( EthernetServer(80) );
}

ApiServer::ApiServer( ApiEndpoint *endpoints , int endpoitsCount ) : ApiServer(){
  this->endpoints = endpoints;
  this->endpointsCount = endpointsCount;
}

ApiServer::ApiServer( ApiEndpoint *endpoints , int endpointsCount , WebServer webServer ) : ApiServer( endpoints , endpointsCount ){
  this->webServer = webServer;
}

ApiServer ApiServer::runFullThread(){
  // while(true){
  //   delay(90);

    
   // WebRequest *webRequest = new WebRequest();
    // *webRequest = (this->webServer).awaitRequest();
      //Serial.println( (*webRequest).getUrl() );
      //if ((*webRequest).hasEnded()){
        //Serial.println( "  >REQUEST-FOUND:" );
        //Serial.println( (*webRequest).getUrl() );
        //((*webRequest).getEthernetClient()).stop();
        //EthernetWebUtils.serveWebPage( new WebPage("" , "") , webRequest.get )
        //webServer.serve( WebPage("" , "") );
        //Serial.println("  >FULL-THREAD-RUN-ENDED");
        //delay(1000);
      //}
      //(*webRequest).destroy();
    //delete &(*webRequest);
      //(*webRequest).destroy();
//     delay(2000);
//  }

 return *this;
}