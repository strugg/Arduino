const int led = 8;
const int pot = 0;

int brillo;

void setup() {
  pinMode(led, OUTPUT);

}

void loop() {
  brillo = analogRead(pot) / 4;
  analogWrite(led, brillo);

}
