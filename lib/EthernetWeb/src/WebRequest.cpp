#include "WebRequest.h"


#include "EthernetWebUtils.h"
#include "WebPage.h"

 
WebRequest::WebRequest() {
  Serial.println(">!SETTING-URL");
  strcpy(this->url , "");
  Serial.println(">!SETTING-PARAMETER-COUNT");
  this->parametersCount = 0;
}

WebRequest::WebRequest( char *request ) : WebRequest(){
  // *request.trim();
  strcpy(this->realRequest, request);
  this->setRequestUrl( request );
}

WebRequest::WebRequest( String request , EthernetClient ethernetClient ) : WebRequest(&request[0]){
  *(this->ethernetClient) = ethernetClient;
}

WebRequest::~WebRequest() {
  // url = "";
  // for (int i=0; i<parametersCount; i++){
  //   parameters[i][0] = "";
  //   parameters[i][1] = "";
  // }
  // // realRequest = "";
  // free ethernetClient;

  delete url;
  delete parameters;
  delete realRequest;
  // delete ethernetClient;
}

char** WebRequest::splitString( String string , String delimiter  ){
  String* result = new String[2];
  for (int i = 0; i < string.length(); i++){
    if ( string.substring( i , i + delimiter.length() ) == delimiter ){
      result[0] = string.substring( 0 , i );
      result[1] = string.substring( i + delimiter.length() , string.length() );
    }
  }
  return result;
}

void WebRequest::setRequestUrl( const char* request ){
  char* url;

  int urlStartIndex = (int)( strstr( request , " ") - request ) + 1;
  int urlEndIndex = String(request).lastIndexOf(" ") - 1;
  
  for (int i=0; i<=urlEndIndex-urlStartIndex; i++){
    url += request[ i + urlStartIndex ];
  }
  
  const char* *str = splitString( url , "?" );
  strcpy( this->url, &str[0][0]);
  this->setRequestParameters( str[1] );
}

const char* WebRequest::getUrl(){
  return (this->url);
}

void WebRequest::setRequestParameters( char* parameters ){

  int parametersCount;
  
  String *str = EthernetWebUtils::split_string_to_array( parameters , "&" , &parametersCount );

  this->parametersCount = parametersCount;

  this->parameters = (EthernetWebUtils::split_2d_string_to_array( str , "=" , parametersCount ))[0][0];
}

bool WebRequest::hasEnded(){
  if ((this->url).length() > 0){
    return true;
  }
  return false;
}

const char* (*WebRequest::getParameters())[2]{
  return this->parameters;
}

int WebRequest::getParametersCount(){
  return this->parametersCount;
}

void WebRequest::reply(){
  // EthernetWebUtils::serveWebPage( this->webPage , this->ethernetClient );
}

EthernetClient WebRequest::getEthernetClient(){
  return *(this->ethernetClient);
}

