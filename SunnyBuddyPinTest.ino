
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  
  //Fault -- PIN 8
  //CHRG  -- PIN 9
  //GND   -- ARDUINO GND
  pinMode(8, INPUT);
  pinMode(9, INPUT);
}


void loop() {
  
  int chargeState = digitalRead(9); 
  //If the battery is good, fault is high
  //If the battery requires additional charge and has a power source, pin will be low
  if (digitalRead(9) == LOW && digitalRead(8) == HIGH){
    Serial.println("Battery is charging");
   }

  int faultState = digitalRead(8);
  
  if (faultState == LOW) {
    Serial.println("Bad Battery"); //Fault should always be high unless battery is bad
  }
  delay(200);
  Serial.print("Charge: ");
  Serial.println(chargeState);
  Serial.print("Fault: ");
  Serial.println(faultState);
  delay(2000);        
}



