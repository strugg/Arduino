float grados;
void setup() 
{
  pinMode(2, OUTPUT);
  Serial.begin(9600); 
}
void loop()
{     
  grados=(5.0*analogRead(0)*100.0)/1023.0;
  Serial.print("Grados Celsius: ");
  Serial.println(grados);
  delay(2000);
}

