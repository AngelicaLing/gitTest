void setup() {
  // put your setup code here, to run once:
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(8,HIGH);
digitalWrite(9,LOW);

digitalWrite(6,HIGH);
digitalWrite(7,LOW);
delay(1000);
//////////////////////////////
digitalWrite(8,LOW);
digitalWrite(9,HIGH);

digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(1000);
}
