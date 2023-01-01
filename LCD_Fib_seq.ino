                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             /*
  LiquidCrystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe
 modified 7 Nov 2016
 by Arturo Guadalupi

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystalHelloWorld

*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
unsigned long n1 = 1, n2 = 1; //first values in the fib seq
unsigned long n3 = 0; // will be used to store the calculated value
int index = 1; //to keep track of the index
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("Fibonacci #: ");
}

void loop() {
  //update fib index
  UpdateIndex();
  
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  Fibonacci();
  delay(1500);
}

//updates the index number on the LCD display
void UpdateIndex(){
  lcd.setCursor(12,0);
  lcd.print(index);
}

//calculate and display number on LCD
void Fibonacci(){
  lcd.setCursor(0, 1);
  //calculate the number
  if(index == 1){
    n3 = n1;
  }
  else if(index == 2){
    n3 = n2;
  }
  else if(index == 48){
    //reset at max number; 47, otherwise it will overflow
    n1 = 1;
    n2 = 1;
    n3 = n1;
    index = 1;
    lcd.clear();
    lcd.print("Fibonacci #: ");
    return ;
  }
  else{
    n3 = n1 + n2;
    n1 = n2;
    n2 = n3;
  }
  
  lcd.print(n3);
  index++;

}
