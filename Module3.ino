void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i =0; i < 5; i++){
    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(500);                
    digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
    delay(500);
  }
  for(int i = 0; i < 5; i++){  
    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(2000);                
    digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
    delay(2000); 
  }                  
}
