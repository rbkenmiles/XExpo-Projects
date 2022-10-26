const int ena = 3;
const int enb = 4;
const int in1 = 11;
const int in2 = 10;
const int in3 = 9;
const int in4 = 8;

void setup() {
pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
pinMode(in3, OUTPUT);
pinMode(in4, OUTPUT);
pinMode(ena, OUTPUT);
pinMode(enb, OUTPUT);
  
  // put your setup code here, to run once:

}

void moveForward(){
  analogWrite(ena,100);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  
  analogWrite(enb,100);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}
void fullStop(){
  analogWrite(ena,0);
 
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  
  
  analogWrite(enb,0);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
}


void loop() {
  moveForward();
  delay(2000);
  fullStop();
  delay(2000);
  
  

 
  
  // put your main code here, to run repeatedly:

}
