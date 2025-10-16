#include <Servo.h>  
int lightVal;
int lightPin=A0;  
int servoPin=9;
int servoPosDay=180;
int servoPosNight=0;
int servoPosCloudy=90;
int dt=500;
Servo myServo; 
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo.attach(servoPin);
pinMode(lightPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal=analogRead(lightPin);
Serial.println(lightVal);
delay(dt);
if (lightVal>=590){
  myServo.write(servoPosDay);
 
}
if (lightVal<=480){
  myServo.write(servoPosNight);

}
if (lightVal>480 && lightVal<590){
  myServo.write(servoPosCloudy);
}

}
