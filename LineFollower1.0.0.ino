//*************MOTOR PINS*********//
//Declare the Pins DONT SIMPLY COPY PASTE 
const int in1 ;
const int in2 ;
const int in3 ;
const int in4 ;
const int ENA ;
const int ENB ;
//SENSOR PINS
const int ir1 ;
const int ir2 ;
const int ir3 ;
const int ir4 ;
const int ir5 ;

void setup()
{
pinMode(in1,OUTPUT);
pinMode(in2,OUTPUT);
pinMode(in3,OUTPUT);
pinMode(in4,OUTPUT);
pinMode(ENA,OUTPUT);
pinMode(ENB,OUTPUT);
pinMode(ir1, INPUT);
pinMode(ir2, INPUT);
pinMode(ir3, INPUT);
pinMode(ir4, INPUT);
pinMode(ir5, INPUT);


}
void main(){
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);

//Makes the robot moces forward
}
