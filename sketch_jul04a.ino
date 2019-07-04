void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}
int income=0;
void loop()
{
  if(Serial.available()>0)
{income=Serial.read();
  switch(income)
{case'f':
 forward();
 break;
 case'b':
 backward();
 break;
 case'l':
 leftward();
 break;
 case'r':
 rightward();
 break;
}
}
}
 void forward()
 {
   digitalWrite(9,HIGH);
   digitalWrite(10,LOW);
   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   delay(1000);
 }
 void backward()
 { digitalWrite(10,HIGH);
   digitalWrite(9,LOW);
   digitalWrite(6,HIGH);
   digitalWrite(5,LOW);
   digitalWrite(3,HIGH);
   digitalWrite(4,LOW);
   delay(1000);
 }
  void leftward()
  {digitalWrite(9,LOW);
   digitalWrite(10,LOW);
   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   delay(1000);
  }
 void rightward()
 { digitalWrite(9,HIGH);
   digitalWrite(10,LOW);
   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   delay(1000);
 }
