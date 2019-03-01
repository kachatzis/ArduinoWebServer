#include "ApiEndpoint.h" 


#include <WebRequest.h>
#include "WebPage.h"

 
ApiEndpoint::ApiEndpoint(){
  this->url = "";
  this->requiredParameters = new String[0];
  this->requiredParametersCount = 0;
}

ApiEndpoint ApiEndpoint::setUrl( String url ){
    this->url = url;
    return *this;
  }

  ApiEndpoint ApiEndpoint::setRequiredParameters( String* requiredParameters , int requiredParametersCount ){
    this->requiredParameters = requiredParameters;
    this->requiredParametersCount = requiredParametersCount;
    return *this;
  }

  ApiEndpoint ApiEndpoint::setFunction( apiEndpointFunction func_f ){ // TODO: Fix function storing
    this->func = func_f;
    apiEndpointFunction t = (this->func);
    return *this;
  }

  String ApiEndpoint::getUrl(){
    return this->url;
  }

  String *ApiEndpoint::getRequiredParameters(){
    return this->requiredParameters; 
  }

  int ApiEndpoint::getRequiredParametersCount(){
    return this->requiredParametersCount;
  }

  String ApiEndpoint::process( WebRequest webRequest ){ // TODO: Fix function calling
    // Serial.print("  >PROCESS-FUNC:");
    // delay(100);
    // apiEndpointFunction t = (this->func);
    // Serial.println(t( WebRequest() ));
    // delay(100);
    return getUrl();
  }

  WebPage ApiEndpoint::generateWebPage( WebRequest webRequest ){
    WebPage webPage = WebPage();
    webPage.setBody( process( webRequest ) );
    return webPage;
  }
