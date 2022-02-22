int redout1=7;              //用8号位控制红外
void setup() 
{
  Serial.begin(9600);     //设置波特率
  pinMode(redout1,INPUT); //设置为接收模式
}
void loop() 
{
 int date;
 date=digitalRead(redout1); 
 Serial.println(date);
 if(date==1)                //检测到红外线则返回值1，未检测到则返回值为0
 Serial.println("未检测到黑线");
 else
 Serial.println("检测到黑线");
 }
