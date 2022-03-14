# coding=utf-8
import turtle
import time
import serial   #导入串口通讯库

ser=serial.Serial("com4",9600,timeout=1)
apple=0
# 同时设置pencolor=color1, fillcolor=color2
turtle.color("red", "yellow")

def sendtoArduino(c):
    c=b"%d"%int(c)
    print(c)
    ser.write(c)
    
turtle.begin_fill()
for _ in range(10):
    turtle.forward(200)
    i=0
    while i<15:
        sendtoArduino(5)
        sendtoArduino(3)
        i=i+1
    turtle.left(170)
    i=0
    while i<15:
        sendtoArduino(6)
        i=i+1
    i=0
    turtle.end_fill()
 
turtle.mainloop()
