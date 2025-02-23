#include "Board.h"

void setup()
{
  boardInit();
  Serial.begin(9600);
}

void loop() 
{
  Serial.print("Relay 1 ON\n");
  Relay_1(ON);
  delay(1000);
  Serial.print("Relay 2 ON\n");
  Relay_2(ON);
  delay(1000);
  Serial.print("Relay 1 OFF\n");
  Relay_1(OFF);
  delay(1000);
  Serial.print("Relay 2 OFF\n");
  Relay_2(OFF);
  delay(1000);                       // wait for a second
  Serial.print("ADC1 = ");
  Serial.println(analogRead(ADC_1_GPIO));
  delay(1000);    
  Serial.print("ADC2 = ");
  Serial.println(analogRead(ADC_2_GPIO));
  delay(1000);    
  Serial.print("ADC3 = ");
  Serial.println(analogRead(ADC_3_GPIO));
  delay(1000);    
}
