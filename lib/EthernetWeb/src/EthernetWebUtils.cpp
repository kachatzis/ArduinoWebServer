#include <EthernetWebUtils.h>


void EthernetWebUtils::serveWebPage( WebPage webPage , EthernetClient client ){
    Serial.print("  >SERVING-WEBPAGE:");
    Serial.println(webPage.getTitle());
    client.println("HTTP/1.1 200 OK"); //send new page
    client.println("Content-Type: text/html");
    client.println();     
    client.println("<HTML>");
    client.println("<HEAD>");
    client.println("<TITLE>");
    client.println( webPage.getTitle() );
    client.println("</TITLE>");
    client.println("</HEAD>");
    client.println("<BODY>");
    client.println( webPage.getBody() );
    client.println("</BODY>");
    client.println("</HTML>");
}



int EthernetWebUtils::split_string_to_array_get_size( String input , char* delimiter ) {
    char* inputArray;
    inputArray = &input[0];
    char *str;
    char *p = inputArray;
    int i = 0;
    while ( ( str = strtok_r(p , delimiter, &p) ) != NULL ){
      i++;
    }
    return i;
}


String *EthernetWebUtils::split_string_to_array( String input , char* delimiter , int* parametersCount ){
    char* inputArray;
    inputArray = &input[0];
    char *str;
    char *p = inputArray;
    int arraySize = EthernetWebUtils::split_string_to_array_get_size( input , delimiter );
    *parametersCount = arraySize;
    String* result = new String[arraySize];
    int i = 0;
    while ( ( str = strtok_r(p , delimiter, &p) ) != NULL ){
      result[i] = str;
      i++;
    }
    return result;
}


String (*EthernetWebUtils::split_2d_string_to_array( String* input , char* delimiter , int parametersCount ))[2]{
  int arraySize = parametersCount;
  String (*result)[2];
  result = new String[arraySize][2];
  for(int i=0; i<arraySize; i++){
    String* tempStr = EthernetWebUtils::split_string_to_array( input[i] , "=" , new int(2) );
    result[i][0] = tempStr[0];
    result[i][1] = tempStr[1];  
  }
  return result;
}

