#include<LiquidCrystal.h>

const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
/*
 * rs=register select(0/1)
 * rs=0 --> write data into memory 
 * rs=1 --> write control signal
 */

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.print("Hello,world!");
}

void loop() {
  // put your main code here, to run repeatedly:
    // set the cursor to column 0, row 1
     lcd.setCursor(0, 1);
  // print the number of seconds since reset
     lcd.print(millis() / 1000);
}
