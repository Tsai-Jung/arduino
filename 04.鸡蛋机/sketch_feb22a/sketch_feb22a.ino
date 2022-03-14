#include <Servo.h>
#include <Ticker.h>
Servo myservo;  // 定义Servo对象来控制
int pos = 30;    // 角度存储变量
char var;
/*
 * Stepper_Motor
 * 步进电机驱动，实现正反转
 */
void setup() {
  
  // put your setup code here, to run once:
  myservo.attach(2);  // 控制线连接数字2
  for (int i = 4; i < 12; i++) {
    pinMode(i, OUTPUT);
  }
  for (pos = 60; pos >= 20; pos --) { // 从180°到0°
    myservo.write(pos);              // 舵机角度写入
    delay(10);                       // 等待转动到指定角度
  }
  Serial.begin(9600);
  
}
void servopenOn() {
  for (pos = 20; pos <= 60; pos ++) { // 0°到180°
    // in steps of 1 degree
    myservo.write(pos);              // 舵机角度写入
    delay(10);                       // 等待转动到指定角度
  }
  
}
void servopenOff() {
  for (pos = 60; pos >= 20; pos --) { // 从180°到0°
    myservo.write(pos);              // 舵机角度写入
    delay(10);                       // 等待转动到指定角度
  }
}
void clockwise2(int num)
{
  for (int count = 0; count < num; count++)
  {
    for (int i = 4; i < 8; i++)
    {
      digitalWrite(i, HIGH);
      delay(3);
      digitalWrite(i, LOW);
    }
  }
}
void anticlockwise2(int num)
{
  for (int count = 0; count < num; count++)
  {
    for (int i = 7; i > 3; i--)
    {
      digitalWrite(i, HIGH);
      delay(3);
      digitalWrite(i, LOW);
    }
  }
}
void clockwise(int num)
{
  for (int count = 0; count < num; count++)
  {
    for (int i = 8; i < 12; i++)
    {
      digitalWrite(i, HIGH);
      delay(3);
      digitalWrite(i, LOW);
    }
  }
}

void anticlockwise(int num)
{
  for (int count = 0; count < num; count++)
  {
    for (int i = 11; i > 7; i--)
    {
      digitalWrite(i, HIGH);
      delay(3);
      digitalWrite(i, LOW);
    }
  }
}

void loop() {
  while(Serial.available()>0)
  {
    var=Serial.read();
    if(var == '1'){
      servopenOn(); }
    if(var== '2'){
      servopenOff();}
    if(var== '3'){
      clockwise(2);}//下面转轴
    if(var== '4'){
      anticlockwise(2);}
    if(var== '5'){
      clockwise2(2);}//上面转轴
    if(var== '6'){
      anticlockwise2(2);}
  }
}
