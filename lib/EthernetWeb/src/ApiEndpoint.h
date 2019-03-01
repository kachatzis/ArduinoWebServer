#ifndef APIENDPOINT_H
#define APIENDPOINT_H


#include <Arduino.h>
#include "EthernetWebUtils.h"
#include <Ethernet.h>


class WebRequest;


typedef String (*apiEndpointFunction)(WebRequest);


class ApiEndpoint {

  String url;
  
  String* requiredParameters;
  
  int requiredParametersCount;
  
  // String (*func)(WebRequest) ;
  apiEndpointFunction func;

  
  public:

    ApiEndpoint();

    ApiEndpoint setUrl( String url );

    ApiEndpoint setRequiredParameters( String* requiredParameters , int requiredParametersCount );

    // ApiEndpoint setFunction( String (*func)(WebRequest) );
    ApiEndpoint setFunction( apiEndpointFunction func_f );

    String getUrl();

    String *getRequiredParameters();

    int getRequiredParametersCount();

    String process( WebRequest webRequest );

    WebPage generateWebPage( WebRequest webRequest );
    

};


#endif