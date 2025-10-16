int Xpin=A0;
int Ypin=A1;
int SWpin=11;
int Xval;
int Yval;
int SWval;
int dt=200;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Xpin,INPUT);
pinMode(Ypin,INPUT);
pinMode(SWpin,INPUT);
digitalWrite(SWpin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
Xval=analogRead(Xpin);
Yval=analogRead(Ypin);
SWval=digitalRead(SWpin);
delay(dt);
Serial.print("X Value =");
Serial.print(Xval);
Serial.print(" Y Value =");
Serial.print(Yval);
Serial.print(" Switch State is ");
Serial.println(SWval);
delay(dt);
}
