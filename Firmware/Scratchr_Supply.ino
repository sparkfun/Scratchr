void setup() {

 Serial.begin(9600);
 pinMode(2, INPUT);
 pinMode(3, OUTPUT);
 digitalWrite(2, 1);

}

void loop() {

  while(digitalRead(2)==0){
    analogWrite(3, map(analogRead(A0),0,1023,0,255));
        Serial.println(map(analogRead(A0),0,1023,0,255));
  }
    analogWrite(3,0);
}


