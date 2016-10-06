int verde=2;
int amar=3;
int rojo=4;
int boton=51;
int val=0;

void setup() {
  pinMode(verde,1);
  pinMode(amar,1);
  pinMode(rojo,1);

}

void loop() {
val = digitalRead(boton);

 if(val == HIGH){
  digitalWrite(rojo,1);
  delay(5000);
  digitalWrite(rojo,0);
  digitalWrite(verde,1);
  delay(5000);
  digitalWrite(verde,0);
  digitalWrite(amar,1);
  delay(2000);
  digitalWrite(amar,0);
 }
 if(val == LOW){
  digitalWrite(rojo,1);
  delay(5000);
  digitalWrite(rojo,0);
  digitalWrite(verde,1);
  delay(5000);
  digitalWrite(verde,0);
  digitalWrite(amar,1);
  delay(2000);
  digitalWrite(amar,0);
 }
}
  
