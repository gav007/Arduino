#include <Arduino.h>



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(9, OUTPUT);
  
}

void loop() {
int POT = 0;
float voltage;
  
POT = analogRead(A0);
//Serial.println(POT);

voltage = POT * (5.0 / 1023.0);
Serial.print("Voltage: ");
Serial.println(voltage);
delay(25);
analogWrite(9, POT/4);
}



