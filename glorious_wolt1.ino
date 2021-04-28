#include <Servo.h>
Servo servo1;
int Red=3;
int Blue=4;
int Green=5;
int potPin=A1;
int val;
long distance;
 
void setup() 
{
 //ultra();
  pinMode(potPin, INPUT);
  pinMode(Red, OUTPUT);
  pinMode(Blue, OUTPUT);
  pinMode(Green, OUTPUT);
  
}
  
void loop() {
  distance=analogRead(A1);
  servo1.attach(7);
  if(distance>=100){
  servo1.write(60);
  digitalWrite (Red, HIGH);
  delay(2000);
  digitalWrite(Red, LOW);
  delay(500);
  }
  servo1.attach(7);
  if(distance>=100){
  servo1.write(120);
  digitalWrite (Blue, HIGH);
  delay(2000);
  digitalWrite(Blue, LOW);
  delay(500);
  }
  servo1.attach(7);
  if(distance>=100){
  servo1.write(180);
  digitalWrite (Green, HIGH);
  delay(2000);
  digitalWrite(Green, LOW);
  delay(500);
  }
}
 
  
  