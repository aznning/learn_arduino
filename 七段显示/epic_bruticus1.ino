void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  //digitalWrite(2, LOW);
  //digitalWrite(3, LOW);
  //digitalWrite(4, LOW);
  //digitalWrite(5, LOW);
  //digitalWrite(6, LOW);
  int income=0;
  if(Serial.available()>0)
  {
    income=Serial.read();
    switch(income)
    {
       case'0':
         zero();
         break;
       case'1':
         one();
         break;
       case'2':
         two();
         break;
       case'3':
         three();
         break;
       case'4':
         four();
         break;
        case'5':
         five();
         break;
      case'6':
         six();
         break;
      case'7':
         seven();
         break;
      case'8':
         eight();
         break;
      case'9':
         nine();
         break;
   }
  }
}
   void zero()
     { 
       digitalWrite(2, LOW);
       digitalWrite(3, LOW);
       digitalWrite(4, LOW);
       digitalWrite(5, LOW);
       digitalWrite(6, LOW);
   }
   void one()
     {  digitalWrite(3,HIGH);
        digitalWrite(2, LOW);
        digitalWrite(4, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);}
   void two()
   {    digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);
        digitalWrite(6,HIGH);}
   void three()
   {    digitalWrite(2,LOW);
        digitalWrite(3,HIGH);
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);
        digitalWrite(6,HIGH);}
   void four()
   {    digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,HIGH);
        digitalWrite(6,LOW);}
   void five()
   {    digitalWrite(2,LOW);
        digitalWrite(3,HIGH);
        digitalWrite(4,LOW);
        digitalWrite(5,HIGH);
        digitalWrite(6,LOW);}
   void six()
   {    digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,HIGH);
        digitalWrite(6,HIGH);}
   void seven()
   {    digitalWrite(2,LOW);
        digitalWrite(3,HIGH);
        digitalWrite(4,LOW);
        digitalWrite(5,HIGH);
        digitalWrite(6,HIGH);}
   void eight()
   {    digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(4,HIGH);
        digitalWrite(5,LOW);
        digitalWrite(6,LOW);}
   void nine()
   {    digitalWrite(2,LOW);
        digitalWrite(3,HIGH);
        digitalWrite(4,HIGH);
        digitalWrite(5,LOW);
        digitalWrite(6,LOW);}
