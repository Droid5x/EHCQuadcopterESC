// Copyright RPI Embedded Hardware Club 2014
// Authors: Mark Blanco and Alex Buchholz and Frank Sokolowski
// 10/20/2014

int potentiometer = 7;
int pin_2 = 2;
int pin_3 = 3;
int pin_4 = 4;
int pin_5 = 5;
int pin_6 = 6;
int pin_7 = 7;
float delay_value = 5;
float proportion = 0.00488759*1000;

//odd numbers are NChannels substituting PChannels

void setup(){
  Serial.begin(9600);
  for (int i = 2; i < 8; i++){
    pinMode(i,OUTPUT);
    digitalWrite(i,LOW);
  }
}

void loop(){
  delay_value = ( float(analogRead(potentiometer)) * proportion );
  Serial.println(delay_value);
  digitalWrite(7,HIGH);
  digitalWrite(5,LOW);
  delayMicroseconds(delay_value);
  delay_value = ( float(analogRead(potentiometer)) * proportion );
  digitalWrite(4,HIGH);
  digitalWrite(2,LOW);
  delayMicroseconds(delay_value);
  delay_value = ( float(analogRead(potentiometer)) * proportion );
  digitalWrite(3,HIGH);
  digitalWrite(7,LOW);
  delayMicroseconds(delay_value);
  delay_value = ( float(analogRead(potentiometer)) * proportion );
  digitalWrite(6,HIGH);
  digitalWrite(4,LOW);
  delayMicroseconds(delay_value);
  delay_value = ( float(analogRead(potentiometer)) * proportion );
  digitalWrite(5,HIGH);
  digitalWrite(3,LOW);
  delayMicroseconds(delay_value);
  delay_value = ( float(analogRead(potentiometer)) * proportion );
  digitalWrite(2,HIGH);
  digitalWrite(6,LOW);
  delayMicroseconds(delay_value);
}

