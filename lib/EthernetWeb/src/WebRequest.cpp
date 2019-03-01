#include "WebRequest.h"


#include "EthernetWebUtils.h"
#include "WebPage.h"

 
WebRequest::WebRequest() {
  this->url = "";
  this->parametersCount = 0;
}

WebRequest::WebRequest( String request ) : WebRequest(){
  request.trim();
  this->realRequest = request;
  this->setRequestUrl( request );
}

WebRequest::WebRequest( String request , EthernetClient ethernetClient ) : WebRequest(request){
  this->ethernetClient = ethernetClient;
}

WebRequest::~WebRequest() {
  String url;
}

String* WebRequest::splitString( String string , String delimiter  ){
  String* result = new String[2];
  for (int i = 0; i < string.length(); i++){
    if ( string.substring( i , i + delimiter.length() ) == delimiter ){
      result[0] = string.substring( 0 , i );
      result[1] = string.substring( i + delimiter.length() , string.length() );
    }
  }
  return result;
}

void WebRequest::setRequestUrl( String request ){
  String url;

  int urlStartIndex = request.indexOf(" ") + 1;
  int urlEndIndex = request.lastIndexOf(" ") - 1;
  
  for (int i=0; i<=urlEndIndex-urlStartIndex; i++){
    url += request[ i + urlStartIndex ];
  }
  
  String* str = splitString( url , "?" );
  this->url = str[0];
  this->setRequestParameters( str[1] );
}

String WebRequest::getUrl(){
  return this->url;
}

void WebRequest::setRequestParameters( String parameters ){

  int parametersCount;
  
  String *str = EthernetWebUtils::split_string_to_array( parameters , "&" , &parametersCount );

  this->parametersCount = parametersCount;

  this->parameters = EthernetWebUtils::split_2d_string_to_array( str , "=" , parametersCount );
}

bool WebRequest::hasEnded(){
  if ((this->url).length() > 0){
    return true;
  }
  return false;
}

String (*WebRequest::getParameters())[2]{
  return this->parameters;
}

int WebRequest::getParametersCount(){
  return this->parametersCount;
}

void WebRequest::reply(){
  // EthernetWebUtils::serveWebPage( this->webPage , this->ethernetClient );
}

EthernetClient WebRequest::getEthernetClient(){
  return this->ethernetClient;
}

