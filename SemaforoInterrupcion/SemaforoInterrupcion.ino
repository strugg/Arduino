#include <avr/interrupt.h>
int verde=3;
int amar=4;
int rojo=5;
int boton=2;

void setup(){
  pinMode(boton, INPUT);
  pinMode(verde, OUTPUT);
  pinMode(amar, OUTPUT);
  pinMode(rojo, OUTPUT);
  
  digitalWrite(2, HIGH);
  
  sei();                  //Habilitamos las interrupciones globales
  EIMSK |= (1<<INT0);     //Declaramos el uso de la interrupcion 0
  EICRA |= (1<<ISC01);    //Definimos que la deteccion sea por flanco descendente.
}

void loop(){  
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

ISR(INT0_vect){           //Funcion a la que ira el programa cada vez que se detecte una interrupcion
  digitalWrite(rojo,1);
  digitalWrite(verde,0);
  digitalWrite(amar,0);  
}
