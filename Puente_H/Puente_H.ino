int derecha=3;
int izquierda=2;

void setup() {
  pinMode(2,1);
  pinMode(3,1);
}

void loop() {
  digitalWrite(derecha,1);
  digitalWrite(izquierda,0);
  delay(5000);

  digitalWrite(derecha,0);
  digitalWrite(izquierda,1);
  delay(5000);

}
