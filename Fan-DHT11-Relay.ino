#include <LiquidCrystal.h>
#include <dht.h>
#define rele1 13
int sensorPin = A0;
dht sensor;

void setup() {

pinMode(rele1, OUTPUT); 
//Serial.begin(9600); //set baud rate

}

void loop() {
 
  sensor.read11(sensorPin);
  //String myString = String(sensor.temperature);
  //String myString2 = String(sensor.humidity);

  if ((sensor.temperature) >= 25.00){
    digitalWrite(rele1, HIGH);
  }
  else if (((sensor.temperature) >= 24.00) && ((sensor.humidity) >= 60.00)){
    digitalWrite(rele1, HIGH);
  }
  else {
    digitalWrite(rele1, LOW);
  }
  
  //Serial.println(myString);
  //Serial.println(myString2);

delay(10000); //10 sec
}
