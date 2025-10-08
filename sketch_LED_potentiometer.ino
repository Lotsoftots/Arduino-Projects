int potVal;
int dtime=100;
int Ypin=11;
int potPin=A0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Ypin,OUTPUT);
pinMode(potPin,INPUT);
}

void loop() {
  // put your main code here, to run repeat:
potVal=analogRead(potPin);
Serial.println(potVal);
delay(dtime);

while(potVal>1000){
  digitalWrite(Ypin,HIGH);
  potVal=analogRead(potPin);
  Serial.println(potVal);;
  delay(dtime);
}
digitalWrite(Ypin,LOW);
}
