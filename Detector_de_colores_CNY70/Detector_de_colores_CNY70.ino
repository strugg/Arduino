int sensorderecho;
int sensorizquierdo;
void setup() {
Serial.begin(9600); //velocidad del puerto serial
}
void loop() {
sensorderecho = analogRead(A0);
Serial.println("Valor de sensor derecho: ");
Serial.println(sensorderecho);
sensorizquierdo = analogRead(A1);
Serial.println("Valor de sensor izquierdo: ");
Serial.println(sensorizquierdo);
delay(2000);
}

