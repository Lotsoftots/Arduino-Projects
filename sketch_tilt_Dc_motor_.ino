int speedPin=5;
int dir1=4;
int dir2=3;
int mSpeed=130;
int dt=100;
int Stspeed=255;
int Xpin=A0;
int Xval;
int Ypin=A1;
int Yval;
int SWpin=2;
int SWval;
int off=0;
void setup() {
  // put your setup code here, to run once:
pinMode(speedPin,OUTPUT);
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
pinMode(Xpin,INPUT);
pinMode(Ypin,INPUT);
pinMode(SWpin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
SWval=digitalRead(SWpin);
Xval=analogRead(Xpin);
Yval=analogRead(Ypin);
Serial.print(SWval);
Serial.print( Yval);
Serial.println(  Xval);

  digitalWrite(dir1,LOW);
digitalWrite(dir2,HIGH);
analogWrite(speedPin,255);
delay(dt);
analogWrite(speedPin,mSpeed);
delay(5000);

}
