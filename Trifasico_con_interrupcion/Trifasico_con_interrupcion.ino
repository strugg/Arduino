#include <avr/interrupt.h>

/*int f1a=12;//fase 1 de luz con fase 1 del motor
int f1b=11;//fase 2 de luz con fase 1 del motor
int f2a=10;//fase 2 de luz con fase 2 del motor
int f2b=9;//fase 1 de luz con fase 2 del motor
int f3=8;//fase 3 de luz con fase 3 del motor
int g=7;//foco verde
int y=6;//foco amarillo
int r=5;//foco rojo
*/
void setup() {
  
  pinMode(12,1);
  pinMode(11,1);
  pinMode(10,1);
  pinMode(9,1);
  pinMode(8,1);
  pinMode(7,1);
  pinMode(6,1);
  pinMode(5,1);

  attachInterrupt(2,Boton,LOW);
  digitalWrite(21,1);
  
}
void display(int f1a, int f1b, int f2a, int f2b, int f3, int g, int y, int r){

  digitalWrite(12,f1a);
  digitalWrite(11,f1b);
  digitalWrite(10,f2a);
  digitalWrite(9,f2b);
  digitalWrite(8,f3);
  digitalWrite(7,g);
  digitalWrite(6,y);
  digitalWrite(5,r);
  
}
void loop() {
  delay(1000);
  display(1,0,1,0,1,1,0,0);
  delay(5000);
  display(0,0,0,0,0,0,1,0);
  delay(12000);
  delay(1000);
  display(0,1,0,1,1,0,0,1);
  delay(5000);
  display(0,0,0,0,0,0,1,0);
  delay(12000);
}

void Boton()  {           //Funcion a la que ira el programa cada vez que se detecte una interrupcion
   
   display(0,0,0,0,0,1,1,1);

}
