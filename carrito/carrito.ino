
void setup() {
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}


void Adelante() {
  pinMode(7, LOW);
  pinMode(8, HIGH);
  pinMode(13, HIGH);
  pinMode(12, LOW);
  analogWrite(3, 50);
  analogWrite(5, 60);
}

void Atras() {
  pinMode(7, HIGH);
  pinMode(8, LOW);
  pinMode(13, LOW);
  pinMode(12, HIGH);
}


void Derecha() {
  pinMode(7, LOW);
  pinMode(8, HIGH);
  pinMode(13, LOW);
  pinMode(12, HIGH);
}

void Izquierdo() {
  pinMode(7, HIGH);
  pinMode(8, LOW);
  pinMode(13, HIGH);
  pinMode(12, LOW);
}


void loop() {
  Adelante();
  delay(1000);


}
