
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);

}

void loop() {
  int sensorValue = analogRead(A0);
  int valorvoltaje = ((5 * sensorValue) / 1023);

  Serial.print("Valor analogico: ");
  Serial.print(sensorValue);
  Serial.print("Valor de voltaje: ");
  Serial.println(valorvoltaje);
  delay(100);

  if (valorvoltaje > 2)
  {
    digitalWrite(13, HIGH);
  }
  else if (valorvoltaje < 2)
  {
    digitalWrite(13, LOW);
  }

}
