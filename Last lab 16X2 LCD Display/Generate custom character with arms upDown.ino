#include<LiquidCrystal.h>

const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
/*
 * rs=register select(0/1)
 * rs=0 --> write data into memory 
 * rs=1 --> write control signal
 * en --> enable pin
 */

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

byte heart[8] = {
  B00000,
  B01010,
  B11111,
  B11111,
  B11111,
  B01110,
  B00100,
  B00000
};

byte smily[8] = {
  B00000,
  B00000,
  B01010,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000
};

byte frownie[8] = {
  B00000,
  B00000,
  B01010,
  B00000,
  B00000,
  B10001,
  B01110,
  B10001
};

byte armsDown[8] = {
  B00100,
  B01010,
  B00100,
  B00100,
  B01110,
  B10101,
  B00100,
  B01010
};

byte armsUp[8] = {
  B00100,
  B01010,
  B00100,
  B10101,
  B01110,
  B00100,
  B00100,
  B01010
};
void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);

  ///Create a new character
  lcd.createChar(0,heart);
  lcd.createChar(1,smily);
  lcd.createChar(2,frownie);
  lcd.createChar(3,armsDown);
  lcd.createChar(4,armsUp);

  ///set the cursor to the top left
  lcd.setCursor(0,0);

  ///print a message to the lcd
  lcd.print("I ");
  lcd.write((byte)0); ///'0' must be cust as a byte ////Will print character heart
  lcd.print("Arduino !");
  lcd.write((byte)1);  ///will print character smily
}

void loop() {
 
   ///Read the potentiometer on A0
   int Readsensor = analogRead(A0);  
   ///map the result to 200-1000
   int delayTime = map(Readsensor,0,1023,200,1000);
   lcd.setCursor(4,1)//set cursor to bottom row
   ///draw the little man arms down
   lcd.write(3);
   delay(delayTime);
   lcd.setCursor(4,1);
   ///Draw him arms up
   lcd.write(4);
   delay(delayTime);
   
}
