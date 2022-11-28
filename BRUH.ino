const int ir1 = 22;
const int ir2 = 23;
const int ir3 = 24;
const int ir4 = 25;
const int ir5 = 26;
int s1;
int s2;
int s3;
int s4;
int s5;
//Motors Declarations
int n = 80;
const int ena = 4;
const int enb = 5;
const int in1 = 8;
const int in2 = 9;
const int in3 = 10;
const int in4 = 11;

void setup(){
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
  Serial.begin(9600);
}
void sensorRead() {
  s1 = analogRead(ir1);
  s2 = analogRead(ir2);
  s3 = analogRead(ir3);
  s4 = analogRead(ir4);
  s5 = analogRead(ir5);
}

void sensorPrint() {
  sensorRead();
  Serial.print("S1 on white");
  Serial.print(s1);
  Serial.print(" ");
  Serial.print("S3 on black");
  Serial.println(s3);
  delay(1500);
}
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

void linefollower(){
  sensorRead();
  if (s1 == 1 && s2 == 1 && s3 == 0 && s4 == 1 && s5 == 1) {
    moveForward();
    }
  else if (s1 == 1 && s2 == 0 && s3 == 1 && s4 == 1 && s5 == 1) {
    slightLeft();
    }
  else if (s1 == 1 && s2 == 1 && s3 == 1 && s4 == 0 && s5 == 1) {
    slightRight();
    }
  else if (s1 == 0 && s2 == 1 && s3 == 1 && s4 == 1 && s5 == 1) {
    hardLeft();
    }
  else if (s1 == 1 && s2 == 1 && s3 == 1 && s4 == 1 && s5 == 0) {
    hardRight();
    }
  /*  //CAUTION
  else if (s1 == 1 && s2 == 1 && s3 == 0 && s4 == 0 && s5 == 0) {
    hardRight();
    } 
  else if (s1 == 0 && s2 == 0 && s3 == 0 && s4 == 1 && s5 == 1) {
    hardLeft();
    }
  else if (s1 == 1 && s2 == 1 && s3 == 1 && s4 == 0 && s5 == 0) {
    slightRight();
    } 
  else if (s1 == 0 && s2 == 0 && s3 == 1 && s4 == 1 && s5 == 1) {
    slightLeft();
    }
  else if (s1 == 1 && s2 == 0 && s3 == 0 && s4 == 1 && s5 == 1) {
    slightLeft();
    }
  else if (s1 == 1 && s2 == 1 && s3 == 0 && s4 == 0 && s5 == 1) {
    slightRight();
    }
  else if (s1 == 1 && s2 == 1 && s3 == 1 && s4 == 1 && s5 == 1) {
    hardLeft();
    delay(800);
    }
  else if (s1 == 0 && s2 == 0 && s3 == 0 && s4 == 1 && s5 == 1){
    hardLeft();
  }
  else {
    fullStop();
    }*/
}
void loop(){
  moveForward();
  delay(2000);
  slightLeft();
  delay(2000);
  slightRight();
  delay(2000);
  hardLeft();
  delay(2000);
  hardRight();
  delay(2000);
  fullStop();
  delay(2000);
}