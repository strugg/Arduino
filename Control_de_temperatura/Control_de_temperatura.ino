int temperatura;  
float grados;
int res=2;
int volts=5;

void setup() {
  Serial.begin(9600);
  pinMode(res,OUTPUT);
  
  grados=(volts*analogRead(0)*100.0)/1023.0;
  Serial.print("La temperatura actual es de: ");
  Serial.println(grados);
  
  Serial.println("A que temperatura se quiere llegar?");
}
void loop() 
{
    if (temperatura >= grados){
    digitalWrite(res,HIGH);
    grados=(volts*analogRead(0)*100.0)/1023.0;
    Serial.print("La temperatura a llegar es de: ");
    Serial.println(temperatura);
    Serial.print("La temperatura actual es de: ");  
    Serial.println(grados);
    delay(1000);
    }
    else if (temperatura <= grados) {
    digitalWrite(res,LOW);
    grados=(volts*analogRead(0)*100.0)/1023.0;
    Serial.print("La temperatura actual es de: ");  
    Serial.println(grados);
    delay(500);
    }
}

void serialEvent(){
    while (Serial.available()==0) { 
      }
    
    temperatura=Serial.parseInt();
}  
