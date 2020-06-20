char ch=' ';
void setup()
{
  Serial.begin(9600);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.println("ok!");
}

/*
设定
'w':表示前进
's':表示后退
'd':表示右转
'a':表示左转
'f':表示停止
*/
void loop()
{
  if(Serial.available()>0)
  {
  	ch=Serial.read();
    switch(ch)
    {
    case 'w':
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      break;
    case 's':
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(8,LOW);
      break;
    case 'd':
      digitalWrite(7,HIGH);
      digitalWrite(6,LOW);
      digitalWrite(8,HIGH);
      digitalWrite(9,LOW);
      break;
    case 'a':
      digitalWrite(6,HIGH);
      digitalWrite(7,LOW);
      digitalWrite(9,HIGH);
      digitalWrite(8,LOW);
      break;
    case 'f':
      digitalWrite(6,LOW);
      digitalWrite(7,LOW);
      digitalWrite(8,LOW);
      digitalWrite(9,LOW);
      break;
    default:
      break;
    }
  }
}