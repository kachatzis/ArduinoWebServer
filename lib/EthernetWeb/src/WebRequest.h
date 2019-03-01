#ifndef WEBREQUEST_H
#define WEBREQUEST_H


#include <Arduino.h>
#include <Ethernet.h>


class WebPage;


class WebRequest {
  
  String url;
  
  String (*parameters)[2];
  
  int parametersCount;
  
  String realRequest;
  
  EthernetClient ethernetClient;


  public:

    WebRequest();

    WebRequest( String request );

    WebRequest( String request , EthernetClient ethernetClient ) ;

    ~WebRequest();

    String* splitString( String string , String delimiter  );

    void setRequestUrl( String request );

    String getUrl();

    void setRequestParameters( String parameters );

    bool hasEnded();

    String (*getParameters())[2];

    int getParametersCount();

    void setWebPage(WebPage webPage);

    void reply();

    EthernetClient getEthernetClient();
    
};


#endif