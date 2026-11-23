/*
 */

void setup() {
    for(int i =2;i<=11;i++){
    pinMode(i,OUTPUT);
    }
}

void loop() {
    for(int i =2;i<=11;i++){
    digitalWrite(i,1);
      delay(300);
      digitalWrite(i,0);
    }
  int i=2;
}
