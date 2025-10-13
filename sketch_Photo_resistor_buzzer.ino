float Tone;
int LightVal;
int Buzzpin=11;
int ReadLight=A0;
int dt(500);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Buzzpin,OUTPUT);
pinMode(ReadLight,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
LightVal=analogRead(LightVal);
Tone=13./497.*(LightVal-160)+120;
digitalWrite(Buzzpin,HIGH);
delayMicroseconds(Tone);
digitalWrite(Buzzpin,LOW);
delayMicroseconds(Tone);
Serial.println(LightVal);
}
