int sensorValue = 0;

void setup()
{
  pinMode(A0, INPUT);//将A0引脚配置为输入
  Serial.begin(9600);//初始化串口通信，并将波特率设置为9600

}

void loop()
{
  sensorValue = analogRead(A0);//读取模拟引脚A0上的输入
  
  Serial.println(sensorValue);//打印出读取的值
  delay(10); //延迟10ms
}