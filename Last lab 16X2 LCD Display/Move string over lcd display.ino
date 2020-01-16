#include<LiquidCrystal.h>

const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
/*
 * rs=register select(0/1)
 * rs=0 --> write data into memory 
 * rs=1 --> write control signal
 * en --> enable pin
 */

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  lcd.print("Hello,world!");
}

void loop() {
  // put your main code here, to run repeatedly:

   /*sroll 13 positions(string length) to the left
    * to move it offcreen left
   */
   for(int pos=0;pos<13;pos++){
    lcd.scrollDisplayLeft();
    delay(150);
   }

   /* scroll 29 positions(string length+display length) to the 
    * right to move it offscreen rigth:
    */
    for(int pos=0;pos<29;pos++){
      lcd.scrollDisplayRight();
    delay(150);
    }

    /*sroll 16 positions(display length+string length) to the left
    * to move it back to center:
   */
   for(int pos=0;pos<16;pos++){
    lcd.scrollDisplayLeft();
    delay(150);
   }

   delay(1000);
   
}
