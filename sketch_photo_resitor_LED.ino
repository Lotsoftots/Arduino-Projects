int lightPen=A0;
int lightVal;
int dv=250;
int Gpin=12;
int Rpin=13;
void setup() {
  // put your setup code here, to run once:
pinMode(lightPen,INPUT);
pinMode(Gpin,OUTPUT);
pinMode(Rpin,OUTPUT);
Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
 lightVal=analogRead(lightPen);
 

while(lightVal>=380){
  digitalWrite(Rpin,LOW);
  digitalWrite(Gpin,HIGH);
  Serial.println(lightVal);
  delay(dv);
}

while(lightVal<=120){
  digitalWrite(Rpin,HIGH);
  digitalWrite(Gpin,LOW);
  Serial.println(lightVal);
  delay(dv);
}
 Serial.println(lightVal);
  delay(dv);
}
