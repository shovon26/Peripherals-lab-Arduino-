int led1 = 8;
int led2 = 7;
int led3 = 6;
int led4 = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);

  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2, LOW);
  delay(1000);

  digitalWrite(led3, HIGH);
  delay(1000);
  digitalWrite(led3, LOW);
  delay(1000);

  digitalWrite(led4, HIGH);
  delay(1000);
  digitalWrite(led4, LOW);
  delay(1000);
  
}
