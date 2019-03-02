#ifndef WEBREQUEST_H
#define WEBREQUEST_H


#include <Arduino.h>
#include <Ethernet.h>


class WebPage;


class WebRequest {
  
  const char *url;
  
  const char *(*parameters)[2];
  
  int parametersCount;
  
  const char *realRequest;
  
  EthernetClient *ethernetClient;


  public:

    WebRequest();

    WebRequest( char *request );

    WebRequest( char* request , EthernetClient ethernetClient ) ;

    ~WebRequest();

    const char** splitString( char* string , char* delimiter  );

    void setRequestUrl( const char* request );

    const char* getUrl();

    void setRequestParameters( char* parameters );

    bool hasEnded();

    const char* (*getParameters())[2];

    int getParametersCount();

    void setWebPage(WebPage webPage);

    void reply();

    EthernetClient getEthernetClient();
    
};


#endif