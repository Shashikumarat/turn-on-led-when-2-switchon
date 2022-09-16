#include <Arduino.h>
#define Green_led_pin 2
#define switch1 34
#define switch2 36

void setup() 
{
  pinMode(Green_led_pin,OUTPUT);
  pinMode(switch1,INPUT);
  pinMode(switch2,INPUT);
}

void loop()
 {  
 
  digitalWrite(Green_led_pin,0);
   
  if(digitalRead(switch1)==0 && digitalRead(switch2)==0)
  {
    digitalWrite(Green_led_pin,HIGH);
  }
 
}