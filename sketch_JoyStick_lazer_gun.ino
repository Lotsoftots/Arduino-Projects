#include <Servo.h>
Servo ServoX;
int servoPin=10;
int buzzPin=7;
int servoPos;
int Xpin=A0;
int Ypin=A1;
int SWpin=11;
int Xval;
int Yval;
int SWval;
int PVal;
int dt=200;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Xpin,INPUT);
pinMode(Ypin,INPUT);
pinMode(SWpin,INPUT);
pinMode(servoPin,OUTPUT);
pinMode(buzzPin,OUTPUT);
digitalWrite(SWpin,HIGH);
ServoX.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
Xval=analogRead(Xpin);
PVal=(180./1023.)*Xval;
Yval=analogRead(Ypin);
SWval=digitalRead(SWpin);
ServoX.write(PVal);

if (SWval==0){
  digitalWrite(buzzPin,HIGH);
  }
else {
  digitalWrite(buzzPin,LOW);
}
delay(dt);
Serial.print("X Value =");
Serial.print(Xval);
Serial.print(" Y Value =");
Serial.print(Yval);
Serial.print(" Switch State is ");
Serial.println(SWval);
delay(dt);
}
