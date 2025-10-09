int potPin=A1;
int Potval;
int Buzzpin=8;
String msg="Please input your number.";
int Dtime=2000;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Buzzpin,OUTPUT);
pinMode(potPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogRead(potPin);
Potval=analogRead(potPin); 

if(Potval>=1000) {
  digitalWrite(Buzzpin,HIGH);
}
if(Potval<=1000) {
  digitalWrite(Buzzpin,LOW);
}
Serial.println(Potval);
delay(Dtime);
}
