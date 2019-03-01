#ifndef APIENDPOINT_H
#define APIENDPOINT_H


#include <Arduino.h>
#include "EthernetWebUtils.h"
#include <Ethernet.h>


class WebRequest;


class ApiEndpoint {

  String url;
  
  String* requiredParameters;
  
  int requiredParametersCount;
  
  String (*function)(String);   // TODO: Change Parameter to WebRequest*/

  
  public:

    ApiEndpoint();

    ApiEndpoint setUrl( String url );

    ApiEndpoint setRequiredParameters( String* requiredParameters , int requiredParametersCount );

    ApiEndpoint setFunction( String (*function)(String) );

    String getUrl();

    String *getRequiredParameters();

    int getRequiredParametersCount();

    String process( WebRequest webRequest );

    WebPage generateWebPage( WebRequest webRequest );
    

};


#endif