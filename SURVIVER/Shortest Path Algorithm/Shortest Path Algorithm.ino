char path[300] = {"FULLULULL"};
int pathlen = strlen(path);


void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  for (int i = 0;i<pathlen;i++){
    Serial.print(path[i]);
    if (path[i]== "U"){
      Serial.print("Got A UTURN----------");
    }
  }

  // put your main code here, to run repeatedly:

}
