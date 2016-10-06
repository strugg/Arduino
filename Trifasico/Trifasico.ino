#include <avr/interrupt.h>

int f1a=12;//fase 1 de luz con fase 1 del motor
int f1b=11;//fase 2 de luz con fase 1 del motor
int f2a=10;//fase 2 de luz con fase 2 del motor
int f2b=9;//fase 1 de luz con fase 2 del motor
int f3=8;//fase 3 de luz con fase 3 del motor

void setup() {
  digitalWrite(f1a,0);
  digitalWrite(f1b,0);
  digitalWrite(f2a,0);
  digitalWrite(f2b,0);
  digitalWrite(f3,0);
  
  pinMode(f1a,1);
  pinMode(f1b,1);
  pinMode(f2a,1);
  pinMode(f2b,1);
  pinMode(f3,1);

  attachInterrupt(2,Boton,LOW);
  digitalWrite(21,HIGH);
  
}

void loop() {
  //Hacia delante
   delay(1000);
   digitalWrite(f1a,1);
   digitalWrite(f1b,0);
   digitalWrite(f2a,1);
   digitalWrite(f2b,0);
   digitalWrite(f3,1);
   delay(5000);
   digitalWrite(f1a,0);
   digitalWrite(f1b,0);
   digitalWrite(f2a,0);
   digitalWrite(f2b,0);
   digitalWrite(f3,0);
   delay(12000);
   
   //Hacia atras
   delay(1000);
   digitalWrite(f1a,0);
   digitalWrite(f1b,1);
   digitalWrite(f2a,0);
   digitalWrite(f2b,1);
   digitalWrite(f3,1);
   delay(5000);
   digitalWrite(f1a,0);
   digitalWrite(f1b,0);
   digitalWrite(f2a,0);
   digitalWrite(f2b,0);
   digitalWrite(f3,0);
   delay(12000);
   
}
void Boton()  {           //Funcion a la que ira el programa cada vez que se detecte una interrupcion
   
   digitalWrite(f1a,0);
   digitalWrite(f1b,0);
   digitalWrite(f2a,0);
   digitalWrite(f2b,0);
   digitalWrite(f3,0);

}
