
int bt=0;
int a=8;
int led = 13;

void setup(){
  pinMode( a, INPUT);
  pinMode( led , OUTPUT )
}

void loop(){
  
  int b=digitalRead(a);
if (b==HIGHT)
{
   digitalWrite(led,HIGHT);
}

 ELSE