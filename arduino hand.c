#include<Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
int a=A0;
int b=A1;
int c=A2;
int val1=0;
int val2=0;
int val3=0;
 
void setup() {
  // put your  setup code here, to run once:
servo1.attach(10);
servo2.attach(11);
servo3.attach(9);
servo1.write(0);
servo2.write(0);
servo3.write(0);
Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
val1=analogRead(a);
val2=analogRead(b);
val3=analogRead(c);
Serial.print("Value1");
Serial.print(val1);
Serial.print("\t");
Serial.print("Value2");
Serial.print(val2);
Serial.print("\t");
Serial.print("Value3");
Serial.print(val3);
Serial.print("\n");
if(val1<900)
{
  servo1.write(180);
  delay(20);
}
if(val1>900)
{
  servo1.write(0);
  delay(20);
}
if(val2<900)
{
  servo2.write(180);
  delay(20);
}
if(val2>900)
{
  servo2.write(0);
  delay(20);
}
if(val3>900)
{
  servo3.write(0);
  delay(20);
}
if(val3<900)
{
  servo3.write(180);
  delay(20);
}


  
}
void setup()
{ Serial.begin(9600); 
servo1.attach(9); 
servo2.attach(8); 
servo3.attach(7); 
servo4.attach(6); 
servo5.attach(5); 
servo6.attach(4); 
pinMode(flexSensorPin1,INPUT); 
pinMode(flexSensorPin2,INPUT); 
pinMode(flexSensorPin3,INPUT); 
pinMode(flexSensorPin4,INPUT); 
pinMode(flexSensorPin5,INPUT); 
pinMode(flexSensorPin6,INPUT); 
 
} int pos=0; 
void loop()
{ int fsr1=analogRead(flexSensorPin1) ; 
//myServo.write(x); 
//Serial.println(fsr); 
int s1=map(fsr1, 605, 696, 180, 0);
 Serial.println(s1); 
if(s1>0 ||s1<180) 
servo1.write((s1)); 
delay(100); 
int fsr2=analogRead(flexSensorPin2) ; 
myServo.write(x); 
Serial.println(fsr); 
int s2=map(fsr2, 605, 696, 180, 0); 
Serial.println(s2); if(s2>0 ||s2<180) servo2.write((s2)); 
delay(100); 
int fsr3=analogRead(flexSensorPin3) ; 
myServo.write(x)