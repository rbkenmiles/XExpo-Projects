#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#define outputA 6
#define outputB 7
// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 16, 2);

 int counter = 0; 
 int aState;
 int aLastState;  

 void setup() { 
   pinMode (outputA,INPUT);
   pinMode (outputB,INPUT);
   
   Serial.begin (9600);
   // Reads the initial state of the outputA
   aLastState = digitalRead(outputA); 
   lcd.begin();

  // Turn on the blacklight and print a message.
  lcd.backlight();  
 } 

 void loop() { 
   aState = digitalRead(outputA); // Reads the "current" state of the outputA
   // If the previous and the current state of the outputA are different, that means a Pulse has occured
   if (aState != aLastState){     
     // If the outputB state is different to the outputA state, that means the encoder is rotating clockwise
     if (digitalRead(outputB) != aState) { 
       counter --;
     } else {
       counter ++;
     }
     Serial.print("Position: ");
     Serial.println(counter);
       // Do nothing here...
     lcd.clear();
     delay(100);
     lcd.print(counter);
     delay(1000);
   } 
   aLastState = aState; // Updates the previous state of the outputA with the current state
 }
