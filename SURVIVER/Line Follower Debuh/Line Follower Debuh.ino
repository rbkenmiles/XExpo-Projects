int n = 80;
const int ir1 = 22;
const int ir2 = 23;
const int ir3 = 24;
const int ir4 = 25;
const int ir5 = 26;

const int ena = 3;
const int enb = 4;
const int in1 = 10;
const int in2 = 11;
const int in3 = 12;
const int in4 = 13;
int s1;
int s2;
int s3;
int s4;
int s5;



void setup() {
pinMode(ir1, INPUT);
pinMode(ir2, INPUT);
pinMode(ir3, INPUT);
pinMode(ir4, INPUT);
pinMode(ir5, INPUT);
pinMode(in1, OUTPUT);
pinMode(in2, OUTPUT);
pinMode(in3, OUTPUT);
pinMode(in4, OUTPUT);
pinMode(ena, OUTPUT);
pinMode(enb, OUTPUT);
pinMode(LED_BUILTIN,OUTPUT);
Serial.begin(9600);

s1 = digitalRead(ir1) ;
s2 = digitalRead(ir2);
s3 = digitalRead(ir3);
s4 = digitalRead(ir4);
s5 = digitalRead(ir5);


}


void loop()
 {

  sensorCheck();

  
 }
void sensorsDetected() 
 {
s1 = digitalRead(ir1) ;
s2 = digitalRead(ir2);
s3 = digitalRead(ir3);
s4 = digitalRead(ir4);
s5 = digitalRead(ir5);

}


void sensorCheck()
{
s1 = digitalRead(ir1);
s2 = digitalRead(ir2);
s3 = digitalRead(ir3);
s4 = digitalRead(ir4);
s5 = digitalRead(ir5);
if (s1 == 1 && s2 == 1 && s3 == 0 && s4 == 1 && s5 == 1){
  moveForward();
  }
else if(s1 == 1 && s2 == 0 && s3 == 1 && s4 == 1 && s5 == 1){
  slightLeft();
  }
else if(s1 == 1 && s2 == 1 && s3 == 1 && s4 == 0 && s5 == 1){
  slightRight();
  }
else if(s1 == 0 && s2 == 1 && s3 == 1 && s4 == 1 && s5 == 1){
  hardLeft();
  }
else if(s1 == 1 && s2 == 1 && s3 == 1 && s4 == 1 && s5 == 0){
  hardRight();
  }
/*else if(s1 == 1 && s2 == 1 && s3 == 1 && s4 == 1 && s5 == 1){
  moveForward();
  }*/
else if(s1 == 1 && s2 == 1 && s3 == 0 && s4 == 0 && s5 == 0){
  hardRight();
  }
else if(s1 == 0 && s2 ==0 && s3 == 0 && s4 == 1 && s5 == 1){
  hardLeft();
  }
else if(s1 == 1 && s2 ==1 && s3 == 1 && s4 == 0 && s5 == 0){
  slightRight();
  }
else if(s1 == 0 && s2 ==0 && s3 == 1 && s4 == 1 && s5 == 1){
  slightLeft();
  }
else if(s1 == 1 && s2 ==0 && s3 == 0 && s4 == 1 && s5 == 1){
  slightLeft();
  }
else if(s1 == 1 && s2 ==1 && s3 == 0 && s4 == 0 && s5 == 1){
  slightRight();
  }
else{fullStop();}
}
/*
MAIN MOTION PARTA for v1.0.0
*/
void moveForward(){
  analogWrite(ena,n);
  analogWrite(enb,n);

  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}
void hardLeft(){
  analogWrite(ena,n);
  analogWrite(enb,n);
  digitalWrite(in1,LOW);
  digitalWrite(in2,HIGH);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}
void hardRight(){
  analogWrite(ena,n);
  analogWrite(enb,n);
  digitalWrite(in1,HIGH); 
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,HIGH);
}
void slightLeft(){
  analogWrite(ena,n);
  analogWrite(enb,n);
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
}
void slightRight(){
  analogWrite(ena,n);
  analogWrite(enb,n);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
}

void fullStop(){
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(in3,LOW);
  digitalWrite(in4,LOW);
}