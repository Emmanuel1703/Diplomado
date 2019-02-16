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
  digitalWrite(LED,HIGH);
  delay(2000);
  digitalWrite(LED,LOW);
  estado=false;
  }
  
  
}
