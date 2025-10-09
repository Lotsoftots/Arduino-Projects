String myLED;
String msg="What color do want the LED to be? ";
int Rled=11;
int Gled=9;
int Bled=10;
float Cyancolor=150;
float Orangecolor=150;
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

if (myLED=="cyan" || myLED=="Cyan"){
 analogWrite(Bled,Cyancolor);
 analogWrite(Rled,Cyancolor);
 digitalWrite(Gled,HIGH); 
}
if(myLED=="orange" || myLED=="Orange"){
  digitalWrite(Bled,LOW);
  analogWrite(Rled,255);
  analogWrite(Gled,90);
}
if(myLED=="yellow" || myLED=="Yellow"){
  digitalWrite(Bled,LOW);
  analogWrite(Rled,155);
  analogWrite(Gled,155);
}
if(myLED=="off" || myLED=="Off"){
  digitalWrite(Bled,LOW);
  digitalWrite(Rled,LOW);
  digitalWrite(Gled,LOW);
}
if(myLED=="fuchsia" || myLED=="Fuchsia"){
  analogWrite(Bled,255);
  analogWrite(Rled,255);
  digitalWrite(Gled,LOW);
}
if (myLED=="all" || myLED=="All"){
  digitalWrite(Bled,HIGH);
  digitalWrite(Rled,HIGH);
  digitalWrite(Gled,HIGH);
}
 }