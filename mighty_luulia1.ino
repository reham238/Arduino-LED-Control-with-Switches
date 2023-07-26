// C++ code
//
int i;
int reading1 =0;
int reading2 =0;
void setup()
{
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(A5,INPUT);
  pinMode(A4,INPUT);
}

void loop()
{
  reading1=digitalRead(A5);
  if(reading1==1)
  {
    digitalWrite(3,1);
    digitalWrite(5,1);
  }
  else if(reading1==0)
  {
for(i=255;i>=0;i-=5)
{
 analogWrite(3,i);
 analogWrite(5,i);
  delay(250);
}
    
  }
 delay(1000);
   reading2=digitalRead(A4);
  if(reading2==1)
  {
    digitalWrite(9,1);
    digitalWrite(11,1);
  }
  else if(reading2==0)
  {
for(i=255;i>=0;i-=5)
{
 analogWrite(9,i);
 analogWrite(11,i);
  delay(250);
}
    
  }
 delay(1000);
}