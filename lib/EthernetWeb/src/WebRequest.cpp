#include <WebRequest.h>

 
WebRequest::WebRequest() {
  // this->url = "";
  // // DISABLE REQUEST ENUM
  // //this->method = REQUEST_METHOD_ENUM::REQUEST_METHOD_GET;
  // this->body = "";
  // this->contentLength = -1;
  // this->parametersCount;
  // this->webPage = WebPage();
}

// WebRequest::WebRequest( String request ) : WebRequest(){
//   request.trim();
//   this->realRequest = request;
//   this->setRequestUrl( request );
//   // DISABLE REQUEST ENUM
//   //this->setRequestMethod( request );
//   this->setContentLength( request );
// }

// WebRequest::WebRequest( String request , EthernetClient ethernetClient ) : WebRequest(request){
//   this->ethernetClient = ethernetClient;
//     //this->reply();
//     //ethernetClient.stop();
//   Serial.println("  >WEB-REQUEST-ANALYZING-ENDED");
// }

// WebRequest::~WebRequest() {
//   Serial.println("  >DECONSTRUCTING-WEB-REQUEST");
//   String url;
// }

// String* WebRequest::splitString( String string , String delimiter  ){
//   String* result = new String[2];
//   for (int i = 0; i < string.length(); i++){
//     if ( string.substring( i , i + delimiter.length() ) == delimiter ){
//       result[0] = string.substring( 0 , i );
//       result[1] = string.substring( i + delimiter.length() , string.length() );
//     }
//   }
//   return result;
// }

// void WebRequest::setRequestUrl( String request ){
//   String url;

//   int urlStartIndex = request.indexOf(" ") + 1;
//   int urlEndIndex = request.lastIndexOf(" ") - 1;
  
//   for (int i=0; i<=urlEndIndex-urlStartIndex; i++){
//     url += request[ i + urlStartIndex ];
//   }
  
//   String* str = splitString( url , "?" );
//   this->url = str[0];
//   this->setRequestParameters( str[1] );
// }

// // DISABLE REQUEST ENUM
// // REQUEST_METHOD_ENUM WebRequest::setRequestMethod( String request ){
// //     // Default
// //   this->method = REQUEST_METHOD_ENUM::REQUEST_METHOD_GET;
  
// //     // extern REQUEST_METHOD_ENUM requestMethod;
// //     // int urlIndex = 0;
// //     // int i=0;
// //     // String header = "";
// //     // do{
// //     //     header += request[ i ];
// //     //     i++;
// //     // }while( request[ i ] != '\n' && i < 10 );
    
// //     // if ( header.indexOf("GET ")>-1 ) {
// //     //   return REQUEST_METHOD_GET;
// //     // }
// //     // //return REQUEST_METHOD_GET;
// // }

// int WebRequest::setContentLength( String request ){
//     // Default
//   this->contentLength = 0;
//     // int contentLengthIndex = request.indexOf("Content-Length:");
//     // String contentLength = "";
//     // int i=0;
//     // do{
//     //   if ( request[ contentLengthIndex + ((String)"Content-Length: ").length() + i ] != '\n') 
//     //     contentLength += reqsizeof(input)/uest[ contentLengthIndex + ((String)"Content-Length: ").length() + i ] ;
//     //     i++;
//     //   if (i>100)
//     //     return -1;
//     // }while( request[ contentLengthIndex + ((String)"Content-Length: ").length() + i ] != '\n');

//     // this->contentLength = contentLength.toInt();
//     // //return contentLength.toInt();
// }

// String WebRequest::setRequestBody( String request ){
//   return "";
// }

// String WebRequest::getBody(){
//   return this->body;
// }

// String WebRequest::getUrl(){
//   return this->url;
// }

// // DISABLE REQUEST ENUM
// // REQUEST_METHOD_ENUM WebRequest::getMethod(){
// //   return this->method;
// // }

// int WebRequest::getContentLength(){
//   return this->contentLength;
// }

// void WebRequest::setRequestParameters( String parameters ){

//   int parametersCount;
  
//   String *str = EthernetWebUtils::split_string_to_array( parameters , "&" , &parametersCount );

//   this->parametersCount = parametersCount;

//   this->parameters = EthernetWebUtils::split_2d_string_to_array( str , "=" , parametersCount );
// }

// bool WebRequest::hasEnded(){
//   if ((this->url).length() > 0){
//     return true;
//   }
//   return false;
// }

// String (*WebRequest::getParameters())[2]{
//   return this->parameters;
// }

// int WebRequest::getParametersCount(){
//   return this->parametersCount;
// }

// void WebRequest::setWebPage(WebPage webPage){
//   this->webPage = webPage;
// }

// void WebRequest::reply(){
//   EthernetWebUtils::serveWebPage( this->webPage , this->ethernetClient );
// }

// EthernetClient WebRequest::getEthernetClient(){
//   return this->ethernetClient;
// }

