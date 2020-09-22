void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
  digitalWrite(13, LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    char x = Serial.read();
    
    if(x == '1'){
      digitalWrite(13, HIGH);
    }
    else if(x == '0'){
      digitalWrite(13, LOW);
    }
  }
}
