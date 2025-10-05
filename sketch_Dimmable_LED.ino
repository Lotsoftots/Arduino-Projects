int Potpin=A1;
int Gpin=11;
int potVal;
float LEDVal;
int Dtime(900);

void setup() {
  // put your setup code here, to run once:
pinMode(Potpin,INPUT);
pinMode(Gpin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
potVal=analogRead(Potpin);
LEDVal=(255./1023.)* potVal;
analogWrite(Gpin,LEDVal);
Serial.println(LEDVal);
delay(Dtime);
}
