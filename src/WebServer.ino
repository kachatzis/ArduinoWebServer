#include <SPI.h>
#include <Ethernet3.h>
#include "WebRequest.h"
#include "EthernetWeb.h"



/*
byte PHY_ADDRESS[] = {  0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
IPAddress IP_ADDRESS(10, 3, 141, 103);
IPAddress DNS_ADDRESS(10, 3, 141, 10);
IPAddress GATEWAY_ADDRESS(10, 3, 141, 10);
IPAddress SUBNET(255, 255, 255, 0);


EthernetServer server(80); 
WebServer webServer;

String readString;

int pos = 0; 
*/
void setup() {
  
  Serial.begin(9600);
   while (!Serial) {;}

  /*
  Serial.println("Starting Ethernet");

  Ethernet.begin(PHY_ADDRESS,IP_ADDRESS, DNS_ADDRESS, GATEWAY_ADDRESS, SUBNET);
  server.begin();
  
  Serial.print("server is at ");
  Serial.println(Ethernet.localIP());
  
  webServer = WebServer(server);
  */
}


String func_e1( String a ){
  return( "{\"a\":\"" + a + "\"}" );
}



void loop() {
  
  /*ApiEndpoint (*apiEndpoints)[1];
  
  (*apiEndpoints)[0].setUrl("/e1")
    .setRequiredParameters( new String[1]{"a"} , 1 ) 
    .setWebPage( WebPage().setTitle("/e1").setBody("/e1") )
    .setFunction( &func_e1 );

  Serial.println("  >LOADING-API-SERVER");
  ApiServer apiServer = ApiServer( *apiEndpoints , 1 , server );
  apiServer.runFullThread();
  */
  Serial.println("  >555555555555");
  //Serial.println( WEBPAGE_H );
  delay(500);
}

