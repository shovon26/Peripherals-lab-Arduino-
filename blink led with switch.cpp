int ledPin1 = 12;
int ledPin2 = 11;
int ledPin3 = 10;
int InputPin = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(InputPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int  pinState = digitalRead(InputPin);

  if (pinState == HIGH) {
    digitalWrite(ledPin1, 1);
    digitalWrite(ledPin2, 1);
    digitalWrite(ledPin3, 1);
    delay(1000);
  }
  else {
    digitalWrite(ledPin1, 0);
    digitalWrite(ledPin2, 0);
    digitalWrite(ledPin3, 0);
    delay(1000);
  }
}
