/*
ECE210 Arduino Final Project - Rangefinder
Derek Titus, Suzanne Baltar, C3C
USAFA/DFEC

May 2013


*/

// include the library code:
#include <LiquidCrystal.h>

// initialize variables
LiquidCrystal lcd(5, 4, 3, 2, 1, 0);

int LEDnumber = 4; //number of LEDs
int LEDpins[] = {8,9,10,11};
int LEDstates[] = {HIGH, HIGH, HIGH, HIGH};
int i = 0; //loop variable
int j = 0; //loop variable
int Dtime; //delay time

int bigredbutton; //using the button
int EchoRead; //motion sensor
int Echovalue; //echo value to find distance
int DistanceCM;
int DistanceFT;
int DistanceIN;
int buzzer;


void setup() {
  // output LEDs 0-4
  for(i = 0; i < LEDnumber;i++) {
    pinMode(LEDpins[i], OUTPUT);
  }
 pinMode(6,OUTPUT);
 pinMode(7,INPUT);
 pinMode(13,INPUT);
 
 //Serial.begin(9600);

  lcd.begin(20,4); //coumns and rows of LCD
}

void loop() {
  //**********put code here******//
  
 loop(); {
   do{
   
  digitalWrite(6,HIGH);
  delayMicroseconds(10);
  digitalWrite(6,LOW);
  bigredbutton = digitalRead(13);
    
  Echovalue = pulseIn(7,HIGH);
  //Serial.println(Echovalue);
  DistanceCM = (Echovalue)/58;
  DistanceIN = (Echovalue)/148;
  DistanceFT = DistanceIN/12;
  
  lcd.setCursor(0,0);
  
  lcd.print("Mode: Instant Range");
  
  lcd.setCursor(0,1);
  //lcd.print("The distance is: ");
  lcd.print(DistanceCM);
  lcd.print(" cm "); //prints distance in cm
  
  lcd.setCursor(0,2);
  //lcd.print("The distance is: ");
  lcd.print(DistanceIN);
  lcd.print(" in "); //prints distance in m
  
  lcd.setCursor(0,3);
  //lcd.print("The distance is: ");
  lcd.print(DistanceFT);
  lcd.print(" ft "); //prints distance in in
   }
while(bigredbutton == HIGH);
   
 }
 
 delay(3000);
 
loop(); {
   do{
   
  digitalWrite(6,HIGH);
  delayMicroseconds(10);
  digitalWrite(6,LOW);
  bigredbutton = digitalRead(13);
    
  Echovalue = pulseIn(7,HIGH);
  //Serial.println(Echovalue);
  DistanceCM = (Echovalue)/58;
  DistanceIN = (Echovalue)/148;
  DistanceFT = DistanceIN/12;

  lcd.setCursor(0,0);
  
  lcd.print("Mode: Stay Away    ");
  
  lcd.setCursor(0,1);
  //lcd.print("The distance is: ");
  lcd.print(DistanceCM);
  lcd.print(" cm "); //prints distance in cm
  
  lcd.setCursor(0,2);
  //lcd.print("The distance is: ");
  lcd.print(DistanceIN);
  lcd.print(" in "); //prints distance in m
  
  lcd.setCursor(0,3);
  //lcd.print("The distance is: ");
  lcd.print(DistanceFT);
  lcd.print(" ft "); //prints distance in in
 
if (DistanceFT <=4);
pinMode(12, HIGH);
}
while(bigredbutton == HIGH);
 
}

delay(3000);

loop(); {
  
  do{
  
 digitalWrite(6,HIGH);
  delayMicroseconds(10);
  digitalWrite(6,LOW);
  bigredbutton = digitalRead(13);
    
  Echovalue = pulseIn(7,HIGH);
  //Serial.println(Echovalue);
  DistanceCM = (Echovalue)/58;
  DistanceIN = (Echovalue)/148;
  DistanceFT = DistanceIN/12;
  
  lcd.setCursor(0,0);
  
  lcd.print("Mode: Instant Range");
  
  lcd.setCursor(0,1);
  //lcd.print("The distance is: ");
  lcd.print(DistanceCM);
  lcd.print(" cm "); //prints distance in cm
  
  lcd.setCursor(0,2);
  //lcd.print("The distance is: ");
  lcd.print(DistanceIN);
  lcd.print(" in "); //prints distance in m
  
  lcd.setCursor(0,3);
  //lcd.print("The distance is: ");
  lcd.print(DistanceFT);
  lcd.print(" ft "); //prints distance in in
  
  //mode 3 code
  
}
while(bigredbutton == HIGH);
   
 }
     
  delay(3000);
  
  
  //end of code//
}
