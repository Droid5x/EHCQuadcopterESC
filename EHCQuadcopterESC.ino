// Copyright RPI Embedded Hardware Club 2014
// Authors: Mark Blanco and Alex Buchholz
// 10/20/2014


int pin_2 = 2;
int pin_3 = 3;
int pin_4 = 4;
int pin_5 = 5;
int pin_6 = 6;
int pin_7 = 7;
int delay_value = 3;

//odd numbers are NChannels substituting PChannels

void setup(){
  for (int i = 2; i < 8; i++){
    pinMode(i,OUTPUT);
    digitalWrite(i,LOW);
  }
}

void loop(){
  digitalWrite(2,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(delay_value);
  digitalWrite(2,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  delay(delay_value);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
  delay(delay_value);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(delay_value);
  digitalWrite(3,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(7,LOW);
  delay(delay_value);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(7,LOW);
  delay(delay_value);
}

