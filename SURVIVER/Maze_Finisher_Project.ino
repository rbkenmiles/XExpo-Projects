  //Maze Finisher V.1.0::
int n = 70;
const int ir1 = 22;
const int ir2 = 24;
const int ir3 = 26;
const int ir4 = 28;
const int ir5 = 30;

const int ena = 4;
const int enb = 3;
const int in1 = 10;
const int in2 = 11;
const int in3 = 9;
const int in4 = 8;
int s1;
int s2;
int s3;
int s4;
int s5;
void setup() {
  // put your setup code here, to run once:
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
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  main1();

  // put your main code here, to run repeatedly:

}

void sensorCheck() {
  s1 = digitalRead(ir1);
  s2 = digitalRead(ir2);
  s3 = digitalRead(ir3);
  s4 = digitalRead(ir4);
  s5 = digitalRead(ir5);
}

void main1() {
  sensorCheck();
  if (s1 == 1 && s2 == 1 && s3 == 0 && s4 == 1 && s5 == 1) {
    //11011 Move Forward
    moveForward();
  }
  else if (s1 == 1 && s2 == 0 && s3 == 1 && s4 == 1 && s5 == 1) {
    //10111
    slightLeft();
  }
  else if (s1 == 1 && s2 == 1 && s3 == 1 && s4 == 0 && s5 == 1) {
    //NOT IMPORTANT
    slightRight();
    delay(200);
  }
  else if (s1 == 0 && s2 == 1 && s3 == 1 && s4 == 1 && s5 == 1) {
    //NI
    hardLeft();
  }
  else if (s1 == 1 && s2 == 1 && s3 == 1 && s4 == 1 && s5 == 0) {
    //NI
    hardRight();
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
  }

  else if (s1 == 1 && s2 == 1 && s3 == 0 && s4 == 0 && s5 == 0) {
    //11000
    fullStop();
    delay(1000);
    move1Inch();
    fullStop();
    delay(1000);
    sensorCheck();
    if  (s1 == 1 && s2 == 1 && s3 == 1 && s4 == 1 && s5 == 1) {
      hardRight();
      
    }
    else {
      moveForward();
      
    }
  }

  else if (s1 == 0 && s2 == 0 && s3 == 0 && s4 == 1 && s5 == 1) {
    fullStop();
    delay(1000);
    move1Inch();
    fullStop();
    delay(300);
    sensorCheck();
    if  (s1 == 1 && s2 == 1 && s3 == 1 && s4 == 1 && s5 == 1) {
      hardLeft();
      
    }
    else {
      hardLeft();
      delay(700);
        
    }

  }

}




void moveForward() {
  analogWrite(ena, n);
  analogWrite(enb, n);

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
void hardLeft() {
  analogWrite(ena, n);
  analogWrite(enb, n);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
void hardRight() {
  analogWrite(ena, n);
  analogWrite(enb, n);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}
void slightLeft() {
  analogWrite(ena, 0);
  analogWrite(enb, n);
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}
void slightRight() {
  analogWrite(ena, n);
  analogWrite(enb, 0);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}

void fullStop() {
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
}



//FOR MAZE FINISHER
void move1Inch() {
  moveForward();
  delay(300);// Check the delay properly

}
