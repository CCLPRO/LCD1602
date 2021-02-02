// This program has 3 parts:- (1) Countdown from 9-0 on the 7 segment led 
// (2) LED lights display & (3) LCD1602 I2C CNY greeting display

#include <LiquidCrystal_I2C.h>
#include <Wire.h> 

//identifying the pins for 7 segment LED
const int ledPinA  =  2;     
const int ledPinB  =  3;
const int ledPinC  =  4;
const int ledPinD  =  5;
const int ledPinE  =  6;
const int ledPinG  =  7;
const int ledPinF  =  8;

int ledPin = 9; // LED lights display connected to digital pin 9
LiquidCrystal_I2C lcd(0x27, 16, 2);// initialise the LCD

void setup() {  
    lcd.clear();
    lcd.noBacklight();
    lcd.begin();
}

void loop() {
 // for loop to turn off the 7 segment LEDs  
  for(int i=2;i<9;i++)
  { pinMode(i,OUTPUT);
    digitalWrite(i,HIGH);
  }
 
  delay(1000); //Delay 1 second, try whether can omit this line
  
// countdown display 9
  digitalWrite(ledPinA, LOW);   // set the LED on
  digitalWrite(ledPinB, LOW);   // set the LED on
  digitalWrite(ledPinC, LOW);   // set the LED on
  digitalWrite(ledPinF, LOW);   // set the LED on
  digitalWrite(ledPinG, LOW);   // set the LED on
  
  delay(1000); //Delay 1 second
  
 // for loop to turn off the 7 segment LEDs  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  } 

 //display 8 
 
  digitalWrite(ledPinA, LOW);   // set the LED on
  digitalWrite(ledPinB, LOW);   // set the LED on
  digitalWrite(ledPinC, LOW);   // set the LED on
  digitalWrite(ledPinD, LOW);   // set the LED on
  digitalWrite(ledPinE, LOW);   // set the LED on
  digitalWrite(ledPinF, LOW);   // set the LED on
  digitalWrite(ledPinG, LOW);   // set the LED on

  delay(1000); //Delay 1 second
  
 // for loop to turn off the 7 segment LEDs  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }
  //display 7 

  digitalWrite(ledPinA, LOW);   // set the LED on
  digitalWrite(ledPinB, LOW);   // set the LED on
  digitalWrite(ledPinC, LOW);   // set the LED on
 
  delay(1000); //Delay 1 second
  
 // for loop to turn off the 7 segment LEDs  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }
 
 //display 6

  digitalWrite(ledPinA, LOW);   // set the LED on
  digitalWrite(ledPinF, LOW);   // set the LED on
  digitalWrite(ledPinE, LOW);   // set the LED on
  digitalWrite(ledPinD, LOW);   // set the LED on
  digitalWrite(ledPinC, LOW);   // set the LED on
  digitalWrite(ledPinG, LOW);   // set the LED on

  delay(1000); //Delay 1 second
  
  // for loop to turn off the 7 segment LEDs  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }

 //display 5

  digitalWrite(ledPinA, LOW);   // set the LED on
  digitalWrite(ledPinF, LOW);   // set the LED on
  digitalWrite(ledPinG, LOW);   // set the LED on
  digitalWrite(ledPinC, LOW);   // set the LED on
  digitalWrite(ledPinD, LOW);   // set the LED on

   delay(1000); //Delay 1 second
  
 // for loop to turn off the 7 segment LEDs  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }
 
//display 4

  digitalWrite(ledPinF, LOW);   // set the LED on
  digitalWrite(ledPinG, LOW);   // set the LED on
  digitalWrite(ledPinB, LOW);   // set the LED on
  digitalWrite(ledPinC, LOW);   // set the LED on

    delay(1000); //Delay 1 second
  
 // for loop to turn off the 7 segment LEDs  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }
 
//display 3
  digitalWrite(ledPinA, LOW);   // set the LED on
  digitalWrite(ledPinB, LOW);   // set the LED on
  digitalWrite(ledPinG, LOW);   // set the LED on
  digitalWrite(ledPinC, LOW);   // set the LED on
  digitalWrite(ledPinD, LOW);   // set the LED on

   delay(1000); //Delay 1 second
// for loop to turn off the 7 segment LEDs  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }
 
//display 2
  digitalWrite(ledPinA, LOW);   // set the LED on
  digitalWrite(ledPinB, LOW);   // set the LED on
  digitalWrite(ledPinG, LOW);   // set the LED on
  digitalWrite(ledPinE, LOW);   // set the LED on
  digitalWrite(ledPinD, LOW);   // set the LED on

  delay(1000); //Delay 1 second
  
 // for loop to turn off the 7 segment LEDs  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }
      
// display 1
 digitalWrite(ledPinB, LOW);   // set the LED on
 digitalWrite(ledPinC, LOW);   // set the LED on
 
  delay(1000); //Delay 1 second
  
 // for loop to turn off the 7 segment LEDs  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);  
  }
//display 0 
  digitalWrite(ledPinA, LOW);   // set the LED on
  digitalWrite(ledPinB, LOW);   // set the LED on
  digitalWrite(ledPinC, LOW);   // set the LED on
  digitalWrite(ledPinD, LOW);   // set the LED on
  digitalWrite(ledPinE, LOW);   // set the LED on
  digitalWrite(ledPinF, LOW);   // set the LED on

  delay(1000); //Delay 1 second
  
// for loop to turn off the 7 segment LEDs  
  for(int i=2;i<9;i++)
  {
    digitalWrite(i,HIGH);
  }
  if (int i = 8) {
  for (int i = 8; i < 20; i++) {
  
  // to change fro fade in to fade out or constant on, change LED green to red or yellow
   // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 50) {
    // sets the value (range from 0 to 255):
  analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    //delay(30)// display greeting on LCD
//  lcd.clear();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("WISHING YOU ALL ");
  lcd.setCursor(0,1);
  lcd.print("A HAPPY AND");
  
  delay(1500);
   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print("PROSPEROUS");
   lcd.setCursor(0,1);
   lcd.print("CHINESE NEW YEAR");
   delay(1500);
   lcd.clear();
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 50) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 5 milliseconds to see the dimming effect
  //delay(30); 
 
  // Print a message to the LCD.
   
   }
  }
 }
}

 