#include "WebPage.h"


WebPage::WebPage(){
  body = "";
  title = "";
}

WebPage::~WebPage(){
  this->body = "";
  this->title = "";
}

WebPage WebPage::setBody(String body){
  this->body = body;
  return *this;
}

WebPage WebPage::setTitle(String title){
  this->title = title;
  return *this;
}

String WebPage::getBody(){
  return this->body;
}

String WebPage::getTitle(){
  return this->title;
}
