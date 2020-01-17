
int A=7,B=8,C=9,D=10,E=11,F=12,G=13;

int buttonState=0; ///initial button State,if buttonState==1,then i will print a digit
int buttonPin=2; ///switch's negative terminal to arduino digital pin number 2

int var=0;
int number_code[10][7]={
     {1,1,1,1,1,1,0},  //0
        { 0,1,1,0,0,0,0 },    // 1
        { 1,1,0,1,1,0,1 },    // 2
        { 1,1,1,1,0,0,1 },    // 3
         { 0,1,1,0,0,1,1 },    // 4
        { 1,0,1,1,0,1,1 },    // 5
        { 1,0,1,1,1,1,1 },    // 6
          { 1,1,1,0,0,0,0 },    // 7
          { 1,1,1,1,1,1,1 },    // 8
         { 1,1,1,0,0,1,1 }};   // 9

void setup()
{
  for(int i=7;i<=13;i++){
    pinMode(i,OUTPUT);
  }
}


void printNum(int n)
{
     int pin=7;
     for(int i=0;i<7;i++){
      digitalWrite(pin,number_code[n][i]);
      pin++;
     }
}

void loop(){

    buttonState=digitalRead(buttonPin);

    if(buttonState==1){
      var++;
      var=var%10;
      delay(1000);
    }

    if(var==0)printNum(0);
    else if(var==1)printNum(1);
    else if(var==2)printNum(2);
    else if(var==3)printNum(3);
    else if(var==4)printNum(4);
    else if(var==5)printNum(5);
    else if(var==6)printNum(6);
    else if(var==7)printNum(7);
    else if(var==8)printNum(8);
    else if(var==9)printNum(9);
  
}
