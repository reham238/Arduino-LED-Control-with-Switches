// C++ code
// delay(250);
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
    analogWrite(3,128);
    analogWrite(11,128);
  }
  else if(reading1==0)
  {
  analogWrite(3,0);
  analogWrite(11,0);
}
   
     reading2=digitalRead(A4);
  if(reading2==1)
  {
    digitalWrite(9,1);
    digitalWrite(5,1);
  }
  else if(reading2==0)
  {

    digitalWrite(9,0);
    digitalWrite(5,0);
    
  }
}
