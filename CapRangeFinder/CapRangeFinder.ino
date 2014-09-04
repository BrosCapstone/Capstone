//ECE210 Final Project
//Payden McBee, Kyle Morse
//USAFA\DFEC
// include the library code:
#include<LiquidCrystal.h>
// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
// initialize variables
double distanceCM=0; //this will be the distance measured in cm
double distanceIN=0; //this will be the distance measured in IN
double distanceFT=0;
//int LEDnumber = 1; //there are 10 LEDs, but they are wired
                   //to the same input, they will all flash 
                   //at once, but with varying frequencies
                   //based on distance from the target
double duration;  //this is the time returned by the 
int screen=0;     //used to determine mode state
int unit=0;       //used to toggle between units
void setup() {
 // set up the LCD’s number of columns and rows
 lcd.begin(20, 4);
 //set up output to trigger of rangefinder
 pinMode(7,OUTPUT); 
 //set up input from echo of rangefinder
 pinMode(8,INPUT);
 //supplies output signal to buzzer
 //pinMode(6,OUTPUT); 
 //this sets the push button to toggle between modes
 //pinMode(10,INPUT_PULLUP); 
 //this sets the push button to toggle between units
 //pinMode(13,INPUT_PULLUP); 
 //for leds
 pinMode(6,OUTPUT); //for buzzer
}
void loop() {
//the datasheet recommmended a minimum measurement cycle of 60ms  
delay(60); 
screen=0;
digitalWrite(7,HIGH);     //this code sends out a 10us pulse
delayMicroseconds(10);    //to the trigger
digitalWrite(7,LOW);
duration = pulseIn(8,HIGH); //this records the value returned by echo
distanceCM=duration/58; //formula given by datasheet 
                        //uS / 58 = centimeters or uS / 148 =inch
distanceIN=duration/148; //where uS is the value returned by echo
distanceFT=distanceIN/12; //ft=in/12;  12 inches in a foot
  
     lcd.setCursor(0,0);
     lcd.print("Feet:");
     //lcd.setCursor(0,10);
     lcd.print(distanceFT);
  
     lcd.setCursor(0,1);
     lcd.print("Inches:");        //this displays the distance
     //lcd.setCursor(3,1);      //to the target in inches
     lcd.print(distanceIN);
     
if (distanceIN <=5)
  {
    digitalWrite(6,HIGH);
  }
  else 
  {
    digitalWrite(6,LOW);
  }
}
