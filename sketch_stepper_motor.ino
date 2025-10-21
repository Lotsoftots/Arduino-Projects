#include <Stepper.h>
int stepsPerRevolution=2048;
Stepper myStepper(stepsPerRevolution, 8,10,9,11);
int step=1;
int motSpeed=10;
int dt=100;
int buttonPin=13;
int buttonVal;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myStepper.setSpeed(motSpeed);
pinMode(buttonPin,OUTPUT);
digitalWrite(buttonPin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonVal=digitalRead(buttonPin);
Serial.println(buttonVal);
delay(dt);
if(buttonVal==1){
  myStepper.step(step);
 }
else{
  myStepper.step(-step);
}
}
