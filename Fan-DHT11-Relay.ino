#include <LiquidCrystal.h>
#include <dht.h>
#define rele1 13
int sensorPin = A0;
dht sensor;

void setup() {
  pinMode(rele1, OUTPUT); 
}

void loop() {
 
  sensor.read11(sensorPin);

  if ((sensor.temperature) >= 29.00){
    digitalWrite(rele1, HIGH);
  }
  else if (((sensor.temperature) >= 28.00) && ((sensor.humidity) >= 50.00)){
    digitalWrite(rele1, HIGH);
  }
  else {
    digitalWrite(rele1, LOW);
  }
  

delay(10000); //10 sec
}
