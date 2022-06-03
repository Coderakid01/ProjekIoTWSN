#include <ESP8266WiFi.h>

void setup(){
  Serial.begin(115200);
  Serial.println();
  Serial.print("MAC Address Board ESP8266 Anda Adalah :  ");
  Serial.println(WiFi.macAddress());
}
 
void loop(){

}