volatile byte counter = 0;
const byte interruptpin = 2;
 
void setup() {
  Serial.begin(9600);
  attachInterrupt(digitalPinToInterrupt(interruptpin), count, FALLING);
}

void loop() {
  delay(999);   
  Serial.print(counter*30);
  Serial.println("rpm.");
  counter = 0;
}
 
void count()
{
 counter++;
}
