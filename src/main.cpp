#include <Arduino.h>
#include <SPI.h>
#include <Ethernet.h>
#include <EthernetWeb.h>
#include "MemoryFree.h"


byte PHY_ADDRESS[] = {  0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED };
IPAddress IP_ADDRESS(10, 3, 141, 103);
IPAddress DNS_ADDRESS(10, 3, 141, 10);
IPAddress GATEWAY_ADDRESS(10, 3, 141, 10);
IPAddress SUBNET(255, 255, 255, 0);

EthernetServer server(80); 
WebServer webServer;

String func_e1(WebRequest webRequest);
String func_e2(WebRequest webRequest);
ApiEndpoint *apiEndpoints = new ApiEndpoint[2];

ApiServer* apiServer = new ApiServer();


void setup() {
  
  Serial.begin(9600);
  while (!Serial) {;} // Hold on while Serial is being initialized

  Serial.println(">STARTING-ETHERNET");
  Ethernet.begin(PHY_ADDRESS,IP_ADDRESS, DNS_ADDRESS, GATEWAY_ADDRESS, SUBNET);
  server.begin();
  Serial.print(">SERVER-IS-AT:");
  Serial.println(Ethernet.localIP());
  
  webServer = WebServer(server);

  apiEndpoints[0].setUrl("/e1")
    .setRequiredParameters( new String[1]{"a"} , 1 ) 
    .setFunction( func_e1 );
  apiEndpoints[1].setUrl("/e2")
    .setRequiredParameters( new String[1]{"a"} , 1 ) 
    .setFunction( func_e2 );

  apiServer = new ApiServer( apiEndpoints , 2 , server );
  
}


String func_e1(WebRequest webRequest){
  return "E1";
}

String func_e2(WebRequest webRequest){
  return "E2";
}


void loop() { 

  (*apiServer).runFullThread();
  
  delay(500); // Wait 500ms before re-initializing the loop

}

