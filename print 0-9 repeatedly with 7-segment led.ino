
int A=7,B=8,C=9,D=10,E=11,F=12,G=13;

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
}

void setup()
{
  for(int i=7;i<=13;i++){
    pinMode(i,OUTPUT);
  }
}


void write_num(int n)
{
     int pin=7;
     for(int i=0;i<7;i++){
      digitalWrite(pin,number_code[n][i]);
      pin++;
     }
}

void loop(){
     for(int n=0;n<=9;n++)
     {
      write_num(n);
      delay(1000);
     }

     delay(2000);
  
}
