int Rpin=8;
int buttonPin=12;
int buttonRead;
int dt=100;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(Rpin,OUTPUT);
pinMode(buttonPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonRead=digitalRead(buttonPin);
Serial.println(buttonRead);
delay(dt);

if (buttonRead>=1){
  digitalWrite(Rpin,LOW);
  buttonRead=buttonRead+1;
  }
if (buttonRead<=0){
  digitalWrite(Rpin,HIGH);
  buttonRead=buttonRead-1;
}
}
