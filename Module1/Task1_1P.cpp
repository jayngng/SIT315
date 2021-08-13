// C++ code
//

void setup()
{
  // Start Serial Monitor
  Serial.begin(9600);

  // Read PIN2 as input PIN
  pinMode(2, INPUT);

  // Read PIN13 as output PIN
  pinMode(13, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  // Read PIN2 voltage status, then write it out to PIN13 as OUTPUT. 
  // If the voltage is HIGH, the LED will blink!, vice versa.
  digitalWrite(13, digitalRead(2));

  // Write the PIN2 status to Serial Monitor.
  Serial.println(digitalRead(2));
}
