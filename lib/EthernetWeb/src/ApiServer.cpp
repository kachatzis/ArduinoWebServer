#include <ApiServer.h>




ApiServer::ApiServer(){
  //this->endpoints = new ApiEndpoint[0];
  this->endpointsCount = 0;
  //this->webServer = WebServer( EthernetServer(80) );
}

// ApiServer::ApiServer( ApiEndpoint *endpoints , int endpoitsCount ) : ApiServer(){
//   this->endpoints = endpoints;
//   this->endpointsCount = endpointsCount;
// }

// ApiServer::ApiServer( ApiEndpoint *endpoints , int endpointsCount , WebServer webServer ) : ApiServer( endpoints , endpointsCount ){
//   this->webServer = webServer;
// }

ApiServer ApiServer::startWebServer( EthernetServer ethernetServer ){
  //this->webServer = WebServer( ethernetServer );
  return *this;
}

ApiServer ApiServer::runFullThread(){
  while(true){
    delay(90);
    Serial.println("  >FULL-THREAD-RUN-STARTING");

    
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
    Serial.println("  >FULL-THREAD-RUN-ENDED");
      //(*webRequest).destroy();
    //delete &(*webRequest);
      //(*webRequest).destroy();
    Serial.println("  >WEB-REQUEST-DELETED");
    delay(2000);
 }
}