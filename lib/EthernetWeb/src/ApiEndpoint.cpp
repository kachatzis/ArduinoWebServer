#include "ApiEndpoint.h" 

 
ApiEndpoint::ApiEndpoint(){
  this->url = "";
  this->requiredParameters = new String[0];
  this->requiredParametersCount = 0;
  this->webPage = WebPage();
}

ApiEndpoint ApiEndpoint::setUrl( String url ){
    Serial.println("      "); // Don't Remove this, it freezes the arduino
    this->url = url;
    return *this;
  }

  ApiEndpoint ApiEndpoint::setRequiredParameters( String* requiredParameters , int requiredParametersCount ){
    this->requiredParameters = requiredParameters;
    this->requiredParametersCount = requiredParametersCount;
    return *this;
  }

  ApiEndpoint ApiEndpoint::setWebPage( WebPage webPage ){
    this->webPage = webPage;
    return *this;
  }

  ApiEndpoint ApiEndpoint::setFunction( String (*function)(String) ){
    this->function = function;
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

  String ApiEndpoint::process( WebRequest webRequest ){
    return( (*(this->function))( "c" ) );
  }
