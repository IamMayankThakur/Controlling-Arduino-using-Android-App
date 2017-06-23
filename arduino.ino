#include <SoftwareSerial.h>
int commandChar=0;
void setup ()
{
Serial.begin (9600);
pinMode(13,OUTPUT);
}
void loop ()
{
 while(Serial.available()==0){  }
commandChar = Serial.parseInt();
if(commandChar==5)
{
  digitalWrite(13,HIGH);
}
else
{
  digitalWrite(13,LOW);
}
}
