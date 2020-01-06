int p[11],val[12],s=13,cr[30];

void setup() {
 for(int i=0;i<10;i++)
 {
     p[i]=i;
     pinMode(p[i],OUTPUT);
 }
pinMode(s,INPUT);
 val[0]=63;
 val[1]=6;
 val[2]=91;
 val[3]=79;
 val[4]=102;
 val[5]=109;
 val[6]=125;
 val[7]=7;
 val[8]=127;
 val[9]=111;

 cr[0]=119;
 cr[1]=127;
 cr[2]=57;

  cr[3]=63;
 cr[4]=121;
 cr[5]=113;

  cr[6]=61;
 cr[7]=118;
 cr[8]=6;

  cr[9]=31;
 cr[10]=118;
 cr[11]=56;

 cr[12]=0;
 cr[13]=0;
 cr[14]=63;

  cr[15]=115;
 cr[16]=0;
 cr[17]=119;

  cr[18]=109;
 cr[19]=0;
 cr[20]=62;

  cr[21]=62;
 cr[22]=0;
 cr[23]=0;

 cr[24]=102;
 cr[25]=91;

  
 
 
}

void off()
{
  for(int i=0;i<10;i++)digitalWrite(p[i],0);
}

void prnt(int v){

  int i=0;
  off();
  while(v>0)
  {
    if(v%2)digitalWrite(p[i],1);
    v/=2;
     i++;
  }
  delay(1000);
}

void call(int i)
{
  prnt(val[i]);
 
}

void hehe(int i)
{
  
   i%=10;
   if(digitalRead(s)==1)hehe(i);
   call(i);
   hehe(i+1);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<26;i++)prnt(cr[i]);
 //digitalWrite(p[0],1); 
//hehe(0);
   
}
