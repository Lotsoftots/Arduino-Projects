int mypin=A1;
float V2;
int readPin;
String Mess1=" Potentiometer value is ";
int dtime=900;
int redPin=13;
int yellowPin=12;
int greenPin=11;
void setup() {
pinMode(mypin,INPUT);  // put your setup code here, to run once:
pinMode(greenPin,OUTPUT);
pinMode(redPin,OUTPUT);
pinMode(yellowPin,OUTPUT);
Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly;
readPin=analogRead(mypin);
V2=(5./1023.)*readPin;
Serial.print(Mess1); 
Serial.println(V2);  
if (V2<3) {
  digitalWrite(greenPin,HIGH);
  digitalWrite(redPin,LOW);
  digitalWrite(yellowPin,LOW);
 }
 if (V2>3 && V2<4){
  digitalWrite(greenPin,LOW);
  digitalWrite(redPin,LOW);
  digitalWrite(yellowPin,HIGH);
 }

if (V2>4){
  digitalWrite(greenPin,LOW);
  digitalWrite(redPin,HIGH);
  digitalWrite(yellowPin,LOW);
}
 

delay(dtime);

}
