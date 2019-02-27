#include <WebPage.h>

 

WebPage::WebPage(){
  body = "<p>NULL</p>";
  title = "NULL";
  useClient = true;
}

WebPage WebPage::setBody(String body){
  this->body = body;
  return *this;
}

WebPage WebPage::setTitle(String title){
  this->title = title;
  return *this;
}

WebPage WebPage::setUseClient(bool useClient){
  this->useClient = useClient;
  return *this;
}

String WebPage::getBody(){
  return this->body;
}

String WebPage::getTitle(){
  return this->title;
}

bool WebPage::getUseClient(){
  return this->useClient;
}
  
