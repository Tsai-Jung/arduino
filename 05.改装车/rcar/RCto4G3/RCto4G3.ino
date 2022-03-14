#define BLINKER_MIOT_LIGHT
#define BLINKER_WIFI
#include <Servo.h> 
#include <Blinker.h>
char auth[] = "6XXXXXXXXXa";//BLINKER的设备代码
char ssid[] = "Coco";        //WIFI名字
char pswd[] = "123123123";   //密码

BlinkerButton Button1("forward");//2222这里需要根据自己在BLINKER里面设置的名字进行更改
BlinkerButton Button2("backward");//11111
BlinkerButton Button3("left");//3333
BlinkerButton Button4("right");//0000
BlinkerButton Button5("rfr");
BlinkerButton Button6("rf");
BlinkerButton Button7("rb");
BlinkerButton Button8("rbr");
BlinkerButton Button9("lfr");
BlinkerButton Button10("lf");
BlinkerButton Button11("lb");
BlinkerButton Button12("lbr");
BlinkerButton Button13("forward10");
BlinkerButton Button14("forward5");
BlinkerButton Button15("backward10");
BlinkerButton Button16("backward5");

//按下按键后就会进行此函数
void button1_callback(const String & state)
{
    BLINKER_LOG("get button state: ", state);
    if (state=="tap") {
        digitalWrite(2, LOW);
        delay(800);
        digitalWrite(2, HIGH);
        // 反馈开关状态
        Button1.print("tap");
    }
    if (state=="press") {
        digitalWrite(2, LOW);
        // 反馈开关状态
        Button1.print("press");
    }
    if (state=="pressup") {
        digitalWrite(2, HIGH);
        delay(200);
        digitalWrite(1, LOW);
        delay(200);
        digitalWrite(1, HIGH);
        // 反馈开关状态
        Button1.print("pressup");
    }
    
}
void button2_callback(const String & state)
{
    BLINKER_LOG("get button state: ", state);
    if (state=="tap") {
     digitalWrite(1, LOW);
     delay(800);
     digitalWrite(1, HIGH);
        // 反馈开关状态
     Button1.print("tap");
    }
    if (state=="press") {
     digitalWrite(1, LOW);
        // 反馈开关状态
     Button1.print("press");
    }
    if (state=="pressup") {
        digitalWrite(1, HIGH);
        delay(200);
        digitalWrite(2, LOW);
        delay(200);
        digitalWrite(2, HIGH);
        // 反馈开关状态
        Button1.print("pressup");
    }
}
void button3_callback(const String & state)
{
    BLINKER_LOG("get button state: ", state);
    if (state=="tap") {
     digitalWrite(3, LOW);
     digitalWrite(2, LOW);
     delay(500);
     digitalWrite(2, HIGH);
     delay(1000);
     digitalWrite(3, HIGH);
        // 反馈开关状态
     Button1.print("tap");
    }
}
void button4_callback(const String & state)
{
    BLINKER_LOG("get button state: ", state);
    if (state=="tap") {
     digitalWrite(0, LOW);
     digitalWrite(2, LOW);
     delay(500);
     digitalWrite(2, HIGH);
     delay(1000);
     digitalWrite(0, HIGH);  
        // 反馈开关状态
     Button1.print("tap");
    }
}
void button5_callback(const String & state)//rfr
{
    BLINKER_LOG("get button state: ", state);
    if (state=="tap") {
     digitalWrite(0, LOW);
     digitalWrite(2, LOW);
     delay(1000);
     digitalWrite(2, HIGH);
     delay(1000);
     digitalWrite(0, HIGH);
     
     digitalWrite(3, LOW);
     digitalWrite(1, LOW);
     delay(1200);
     digitalWrite(1, HIGH);
     delay(1000);
     digitalWrite(3, HIGH);
     
        // 反馈开关状态
     Button1.print("tap");
    }
}
void button6_callback(const String & state)//rf
{
    BLINKER_LOG("get button state: ", state);
    if (state=="tap") {
     digitalWrite(0, LOW);
     digitalWrite(2, LOW);
     delay(1000);
     digitalWrite(2, HIGH);
     delay(1000);
     digitalWrite(0, HIGH);
        // 反馈开关状态
     Button1.print("tap");
    }
    if (state=="press") {
     digitalWrite(0, LOW);
     digitalWrite(2, LOW);
        // 反馈开关状态
     Button1.print("press");
    }
    if (state=="pressup") {
        digitalWrite(0, HIGH);
        digitalWrite(2, HIGH);
        delay(200);
        digitalWrite(1, LOW);
        delay(200);
        digitalWrite(1, HIGH);
        // 反馈开关状态
        Button1.print("pressup");
    }
}
void button7_callback(const String & state)//rb
{
    BLINKER_LOG("get button state: ", state);
    if (state=="tap") {
     digitalWrite(0, LOW);
     digitalWrite(1, LOW);
     delay(1000);
     digitalWrite(1, HIGH);
     delay(1000);
     digitalWrite(0, HIGH);    
        // 反馈开关状态
     Button1.print("tap");
    }
    if (state=="press") {
     digitalWrite(0, LOW);
     digitalWrite(1, LOW);
        // 反馈开关状态
     Button1.print("press");
    }
    if (state=="pressup") {
        digitalWrite(0, HIGH);
        digitalWrite(1, HIGH);
        delay(200);
        digitalWrite(2, LOW);
        delay(200);
        digitalWrite(2, HIGH);
        // 反馈开关状态
        Button1.print("pressup");
    }
}

void button8_callback(const String & state)//rbr
{
    BLINKER_LOG("get button state: ", state);
    if (state=="tap") {
     digitalWrite(0, LOW);
     digitalWrite(1, LOW);
     delay(1000);
     digitalWrite(1, HIGH);
     delay(1000);
     digitalWrite(0, HIGH);
     
     digitalWrite(3, LOW);
     digitalWrite(2, LOW);
     delay(1200);
     digitalWrite(2, HIGH);
     delay(1000);
     digitalWrite(3, HIGH);
     
        // 反馈开关状态
     Button1.print("tap");
    }
}
void button9_callback(const String & state)//lfr
{
    BLINKER_LOG("get button state: ", state);
    if (state=="tap") {
     digitalWrite(3, LOW);
     digitalWrite(2, LOW);
     delay(1000);
     digitalWrite(2, HIGH);
     delay(1000);
     digitalWrite(3, HIGH);
     
     digitalWrite(0, LOW);
     digitalWrite(1, LOW);
     delay(1200);
     digitalWrite(1, HIGH);
     delay(1000);
     digitalWrite(0, HIGH);
     
        // 反馈开关状态
     Button1.print("tap");
    }
}
void button10_callback(const String & state)//lf
{
    BLINKER_LOG("get button state: ", state);
    if (state=="tap") {
     digitalWrite(3, LOW);
     digitalWrite(2, LOW);
     delay(1000);
     digitalWrite(2, HIGH);
     delay(1000);
     digitalWrite(3, HIGH);   
        // 反馈开关状态
     Button1.print("tap");
    }
    if (state=="press") {
     digitalWrite(3, LOW);
     digitalWrite(2, LOW);
        // 反馈开关状态
     Button1.print("press");
    }
    if (state=="pressup") {
        digitalWrite(3, HIGH);
        digitalWrite(2, HIGH);
        delay(200);
        digitalWrite(1, LOW);
        delay(200);
        digitalWrite(1, HIGH);
        // 反馈开关状态
        Button1.print("pressup");
    }
}
void button11_callback(const String & state)//lb
{
    BLINKER_LOG("get button state: ", state);
    if (state=="tap") {
     digitalWrite(3, LOW);
     digitalWrite(1, LOW);
     delay(1000);
     digitalWrite(1, HIGH);
     delay(1000);
     digitalWrite(3, HIGH);    
        // 反馈开关状态
     Button1.print("tap");
    }
         if (state=="press") {
     digitalWrite(3, LOW);
     digitalWrite(1, LOW);
        // 反馈开关状态
     Button1.print("press");
    }
    if (state=="pressup") {
        digitalWrite(3, HIGH);
        digitalWrite(1, HIGH);
        delay(200);
        digitalWrite(2, LOW);
        delay(200);
        digitalWrite(2, HIGH);
        // 反馈开关状态
        Button1.print("pressup");
    }
}
void button12_callback(const String & state)//rbr
{
    BLINKER_LOG("get button state: ", state);
    if (state=="tap") {
     digitalWrite(3, LOW);
     digitalWrite(1, LOW);
     delay(1000);
     digitalWrite(1, HIGH);
     delay(1000);
     digitalWrite(3, HIGH);
     
     digitalWrite(0, LOW);
     digitalWrite(2, LOW);
     delay(1200);
     digitalWrite(2, HIGH);
     delay(1000);
     digitalWrite(0, HIGH);
     
        // 反馈开关状态
     Button1.print("tap");
    }
}
void button13_callback(const String & state)//f10
{
    BLINKER_LOG("get button state: ", state);
    if (state=="tap") {
        digitalWrite(2, LOW);
        delay(4000);
        // 反馈开关状态
        Button1.print("press");
    }   
}
void button14_callback(const String & state)//f5
{
    BLINKER_LOG("get button state: ", state);
    if (state=="tap") {
        digitalWrite(2, LOW);
        delay(2000);
        // 反馈开关状态
        Button1.print("press");
    }   
}
void button15_callback(const String & state)//b10
{
    BLINKER_LOG("get button state: ", state);
    if (state=="tap") {
        digitalWrite(1, LOW);
        delay(4000);
        // 反馈开关状态
        Button1.print("press");
    }   
}
void button16_callback(const String & state)//b5
{
    BLINKER_LOG("get button state: ", state);
    if (state=="tap") {
        digitalWrite(1, LOW);
        delay(2000);
        // 反馈开关状态
        Button1.print("press");
    }   
}
//接入小爱同学的代码，此部分代码根据BLINKER官网进行修改得到
void miotPowerState(const String & state)
{
   
    BLINKER_LOG("need set power state: ",state);
    if (state == BLINKER_CMD_OFF) {//如果语音接收到是关闭灯就设置GPIO口为高电平
        BlinkerMIOT.powerState("off");
        BlinkerMIOT.print();
    }
    else if (state == BLINKER_CMD_ON) {
        digitalWrite(0, LOW);
        digitalWrite(2, LOW);
        delay(1200);
        digitalWrite(2, HIGH);
        delay(1000);
        digitalWrite(0, HIGH);
     
        digitalWrite(3, LOW);
        digitalWrite(1, LOW);
        delay(1500);
        digitalWrite(1, HIGH);
        delay(1000);
        digitalWrite(3, HIGH);
        BlinkerMIOT.powerState("on");
        BlinkerMIOT.print();
    }
}


void setup() {
    Serial.begin(115200);
    pinMode(0,OUTPUT);
    digitalWrite(0,HIGH);//初始化，由于继电器是低电平触发。所以刚开始设为高电平
    pinMode(1,OUTPUT);
    digitalWrite(1,HIGH);//初始化，由于继电器是低电平触发。所以刚开始设为高电平
    pinMode(2,OUTPUT);
    digitalWrite(2,HIGH);//初始化，由于继电器是低电平触发。所以刚开始设为高电平
    pinMode(3,OUTPUT);
    digitalWrite(3,HIGH);//初始化，由于继电器是低电平触发。所以刚开始设为高电平
    Blinker.begin(auth, ssid, pswd);
    Button1.attach(button1_callback);
    Button2.attach(button2_callback);
    Button3.attach(button3_callback);
    Button4.attach(button4_callback);
    Button5.attach(button5_callback);
    Button6.attach(button6_callback);
    Button7.attach(button7_callback);
    Button8.attach(button8_callback);
    Button9.attach(button9_callback);
    Button10.attach(button10_callback);
    Button11.attach(button11_callback);
    Button12.attach(button12_callback);
    Button13.attach(button13_callback);
    Button14.attach(button14_callback);
    Button15.attach(button15_callback);
    Button16.attach(button16_callback);
    BlinkerMIOT.attachPowerState(miotPowerState);//这段代码一定要加，不加小爱同学控制不了,务必在回调函数中反馈该控制状态

}

void loop()
{
  Blinker.run();
   
}
