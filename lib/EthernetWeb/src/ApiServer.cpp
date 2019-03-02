#include "ApiServer.h"


#include "ApiEndpoint.h"
#include "WebServer.h"
#include "WebRequest.h"
#include "WebPage.h"
#include "MemoryFree.h"


ApiServer::ApiServer(){
  this->endpoints = new ApiEndpoint[0];
  this->endpointsCount = 0;
  this->webServer = WebServer( EthernetServer(80) );
}

ApiServer::ApiServer( ApiEndpoint *endpoints , int endpointsCount ) : ApiServer(){
  this->endpoints = endpoints;
  this->endpointsCount = endpointsCount;
}

ApiServer::ApiServer( ApiEndpoint *endpoints , int endpointsCount , WebServer webServer ) : ApiServer( endpoints , endpointsCount ){
  this->webServer = webServer;
}

ApiServer ApiServer::runFullThread(){
  
  while(true){
    delay(200);  // Wait 80ms between scans
    WebRequest *webRequest = new WebRequest();
   *webRequest = ((this->webServer).getWebRequest());

    if ((*webRequest).hasEnded()){

      ApiEndpoint *sApiEndpoint = new ApiEndpoint();
      *sApiEndpoint = (findEndpointByRequest(*webRequest));
      if ((*sApiEndpoint).getUrl() == ""){
        continue;
      }
      
      WebPage *rWebPage = new WebPage();
      *rWebPage = (*sApiEndpoint).generateWebPage( *webRequest );
      
      webServer.replyRequest( *rWebPage , (*webRequest).getEthernetClient() );
      webServer.closeRequest( (*webRequest).getEthernetClient() );

      delete sApiEndpoint;
      delete rWebPage;

      delay(400);  // Wait additional 100ms after the request
    }
    
    delete webRequest;
    
  }

  return *this;
}


ApiEndpoint ApiServer::findEndpointByRequest( WebRequest webRequest ){
  for (int i=0; i<endpointsCount; i++){
   if (this->endpoints[i].getUrl() == webRequest.getUrl()){
      return endpoints[i];
    }
  }
  return ApiEndpoint();
}