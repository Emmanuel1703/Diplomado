
void setup() {

  pinMode(13, OUTPUT);

  for( int i=1; i<=10; i++)
  {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2500);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(2500);
  }

  digitalWrite(13, HIGH); 
}


void loop() {
}
