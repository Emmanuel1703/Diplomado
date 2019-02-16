int LED = 13;
int PULSADOR = 2;
int interrup=0;

volatile bool estado = false;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(PULSADOR, INPUT);
  attachInterrupt(interrup,fun,RISING);
   
  //digitalWrite(LED, LOW);
  
  
}
void fun(){
  estado=true;
}

void loop() {
  if(estado==true){
  for( int i=1; i<=5; i++)
  {
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);
  }

  digitalWrite(13, HIGH); 
  delay(100000);
  }
  
  
}
