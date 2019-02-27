#ifndef APIENDPOINT_H
#define APIENDPOINT_H

#include <Arduino.h>
#include <EthernetWebUtils.h>
#include <WebRequest.h>
#include <WebPage.h>


class ApiEndpoint {

  String url;
  
  String* requiredParameters;
  
  int requiredParametersCount;
  
  WebPage webPage;
  
  String (*function)(String);   // TODO: Change Parameter to WebRequest

  
  public:

    ApiEndpoint();

    ApiEndpoint setUrl( String url );

    ApiEndpoint setRequiredParameters( String* requiredParameters , int requiredParametersCount );

    ApiEndpoint setWebPage( WebPage webPage );

    ApiEndpoint setFunction( String (*function)(String) );

    String getUrl();

    String *getRequiredParameters();

    int getRequiredParametersCount();

    String process( WebRequest webRequest );
    

};

#endif