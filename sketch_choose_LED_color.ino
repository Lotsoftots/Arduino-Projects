String myLED;
String msg="What color LED do you want turned on? ";
int Rled=11;
int Gled=9;
int Bled=10;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Rled, OUTPUT);
pinMode(Gled, OUTPUT);
pinMode(Bled, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available()==0) {

}
myLED=Serial.readString();

if (myLED=="blue" || myLED=="Blue") {
digitalWrite(Bled,HIGH);
digitalWrite(Rled,LOW);
digitalWrite(Gled,LOW);
}
if (myLED=="green" || myLED=="Green") {
digitalWrite(Bled,LOW);
digitalWrite(Rled,LOW);
digitalWrite(Gled,HIGH);
}
if (myLED=="red" || myLED=="Red"){
digitalWrite(Bled,LOW);
digitalWrite(Rled,HIGH);
digitalWrite(Gled,LOW);
}

 }