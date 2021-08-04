// C++ code
//

void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
  
  // Attach interrupt
  attachInterrupt(digitalPinToInterrupt(2), interrupt, CHANGE);
}

void loop()
{
  
}

void interrupt(){
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(13, digitalRead(2));
  Serial.println(digitalRead(2));
}
