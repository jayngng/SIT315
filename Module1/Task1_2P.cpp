// C++ code
//

void setup()
{
  // Setup Serial Monitor 
  Serial.begin(9600);

  // PIN2 as input and PIN13 as OUTPUT
  pinMode(2, INPUT); 
  pinMode(13, OUTPUT);
  
  // Attach interrupt to PIN2, set mode to CHANGE and attach "interrupt" function
  attachInterrupt(digitalPinToInterrupt(2), interrupt, CHANGE);
}

void loop()
{
  
}

void interrupt(){
  // Read the PIN2 status and write output to PIN13 
  digitalWrite(13, digitalRead(2));

  // Print the output with Serial Monitor
  Serial.println(digitalRead(2));
}
