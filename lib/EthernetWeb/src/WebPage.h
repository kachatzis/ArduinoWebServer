#ifndef WEBPAGE_H
#define WEBPAGE_H


#include <Arduino.h>


class WebPage {

  String body;
  
  String title;
  
 
 public:
    
    WebPage();

    ~WebPage();
    
    WebPage setBody(String body);
    
    WebPage setTitle(String title);
    
    String getBody();
    
    String getTitle();

};


#endif