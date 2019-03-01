#ifndef WEBPAGE_H
#define WEBPAGE_H


#include <Arduino.h>


class WebPage {

  String body;
  
  String title;
  
  bool useClient;
  
 
 public:
    
    WebPage();
    
    WebPage setBody(String body);
    
    WebPage setTitle(String title);
    
    WebPage setUseClient(bool useClient);
    
    String getBody();
    
    String getTitle();
    
    bool getUseClient();

};


#endif