#define LS1 6 
#define LS2 7  // left sensor
#define RS1 2
#define RS2 3// right sensor
int LS,RS;
/*-------definning Outputs------*/
#define LM1 8       // left motor
#define LM2 9       // left motor
#define RM1 10       // right motor
#define RM2 11      // right motor

void setup()
{
  Serial.begin(9600);
  pinMode(LS1, INPUT);
  pinMode(RS1, INPUT);
  pinMode(LS2, INPUT);
  pinMode(RS2, INPUT);
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);
  pinMode(13, INPUT);
}

void loop()
{
  LS=digitalRead(LS1) || digitalRead(LS2);
  RS=digitalRead(RS1) || digitalRead(RS2);
  //Serial.print(LS);
 // Serial.print(RS);
  
  
  if(LS && RS)     // Move Forward
  {
    Serial.println(11);
   //Serial.print(RS);
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
  }
  
  if(!LS && RS)     // Turn right
  {
    Serial.println(01);
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
  }
  
  if(LS && !RS)     // turn left
  {
    Serial.println(10);
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
  }
  
  if(!LS && !RS)     // stop
  {
    Serial.println(00);
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
  }
  delay(100);
}
