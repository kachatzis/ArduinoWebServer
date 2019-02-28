#ifndef WEBREQUEST_H
#define WEBREQUEST_H

#include <Arduino.h>
#include <EthernetWebUtils.h>
#include "EthernetServer.h"
#include "EthernetClient.h"
#include <WebPage.h>


/*//#define REQUEST_METHOD_ENUM = (EthernetWebUtils::REQUEST_METHOD_STRING)


// DISABLE REQUEST ENUM
// #define FOREACH_REQUEST_METHOD(REQUEST_METHOD)  \
//         REQUEST_METHOD(REQUEST_METHOD_GET)      \

// #define GENERATE_ENUM(ENUM) ENUM,
// #define GENERATE_STRING(STRING) #STRING,



// enum REQUEST_METHOD_ENUM {
//     FOREACH_REQUEST_METHOD(GENERATE_ENUM)
// };

// static const char *REQUEST_METHOD_STRING[] = {
//     FOREACH_REQUEST_METHOD(GENERATE_STRING)
// };*/



class WebRequest {
  
  // String url;
  
  // String (*parameters)[2];
  
  // int parametersCount;
  
  // // REQUEST_METHOD_ENUM method; 
  
  // String body;
  
  // int contentLength;
  
  // String realRequest;
  
  // EthernetClient ethernetClient;

  // WebPage webPage;



  public:

    WebRequest();

    // WebRequest( String request );

    // WebRequest( String request , EthernetClient ethernetClient ) ;

    // ~WebRequest();

    // String* splitString( String string , String delimiter  );

    // void setRequestUrl( String request );
    
    // // DISABLE REQUEST ENUM
    // //REQUEST_METHOD_ENUM setRequestMethod( String request );
    
    // int setContentLength( String request );
    
    // String setRequestBody( String request );

    // String getBody();

    // String getUrl();

    // // DISABLE REQUEST ENUM
    // //REQUEST_METHOD_ENUM getMethod();

    // int getContentLength();

    // void setRequestParameters( String parameters );

    // bool hasEnded();

    // String (*getParameters())[2];

    // int getParametersCount();

    // void setWebPage(WebPage webPage);

    // void reply();

    // EthernetClient getEthernetClient();
    
};


#endif