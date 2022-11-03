int n = 70;
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

void setup() {
  pinMode(ir1, INPUT);
  pinMode(ir2, INPUT);
  pinMode(ir3, INPUT);
  pinMode(ir4, INPUT);
  pinMode(ir5, INPUT);
  Serial.begin(9600);

  // put your setup code here, to run once:

}
void sensorCheck() {
  s1 = digitalRead(ir1);
  s2 = digitalRead(ir2);
  s3 = digitalRead(ir3);
  s4 = digitalRead(ir4);
  s5 = digitalRead(ir5);
}


void loop() {
  // put your main code here, to run repeatedly:
  sensorCheck();
  Serial.print(s1);
  Serial.print(" | ");
  Serial.print(s2);
  Serial.print(" | ");
  Serial.print(s3);
  Serial.print(" | ");
  Serial.print(s4);
  Serial.print(" | ");
  Serial.println(s5);
  delay(2000);

}
