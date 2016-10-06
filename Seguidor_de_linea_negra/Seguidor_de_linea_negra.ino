int enPin = 6;  // PWM se conecta al pin 1 del puente-H
int in1Pin = 5; // Entrada 2 del puente H
int in2Pin = 4; // Entrada 7 del puente H

int en2Pin = 9; // PWM se conecta al pin 9 del puente H
int in3Pin = 2; // Entrada 10 del puente H
int in4Pin = 3; // Entrada 14 del puente H

int s1; //Sensor derecho
int s2; //Sensor izquierdo

int led=13;
int led1=12;
#define Pecho 8
#define Ptrig 7
long duracion, distancia;

void setup(){
  pinMode(in1Pin, OUTPUT); //Configura in1Pin como salida
  pinMode(in2Pin, OUTPUT); //Configura in2Pin como salida
  pinMode(in3Pin, OUTPUT); //Configura in3Pin como salida
  pinMode(in4Pin, OUTPUT); //Configura in4Pin como salida
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(Pecho, INPUT);   // define el pin 8 como entrada (echo)
  pinMode(Ptrig, OUTPUT);  // define el pin 7 como salida  (triger)
  digitalWrite(enPin,HIGH);
  digitalWrite(en2Pin,HIGH);
}
void loop(){ 

  s1 = analogRead(A0);
  s2 = analogRead(A1);
  
  digitalWrite(Ptrig, LOW);
  delayMicroseconds(2);
  digitalWrite(Ptrig, HIGH);   // genera el pulso de triger por 10ms
  delayMicroseconds(10);
  digitalWrite(Ptrig, LOW);
  duracion = pulseIn(Pecho, HIGH);
  distancia = (duracion/2) / 29;
  
if (distancia>11 && s1>300 && s2>300){   
  int speed = 180;
  analogWrite(enPin,speed);      //Carro hacia delante
  analogWrite(en2Pin,speed);
  
  digitalWrite(in2Pin,HIGH);     //Motor derecho 
  digitalWrite(in1Pin,LOW);
  
  digitalWrite(in4Pin,HIGH);      //Motor izquierdo 
  digitalWrite(in3Pin,LOW);
}
if (distancia>11 && s1<800 && s2<800){
  int speed = 100;
  analogWrite(enPin,speed);      //Carro hacia atras
  analogWrite(en2Pin,speed);
  
  digitalWrite(in2Pin,LOW);     //Motor derecho 
  digitalWrite(in1Pin,HIGH);
  
  digitalWrite(in4Pin,LOW);      //Motor izquierdo 
  digitalWrite(in3Pin,HIGH);
}
if (distancia>11 && s1<800 && s2>300){
  analogWrite(enPin,230);      //Carro hacia izquierda
  analogWrite(en2Pin,150);
  
  digitalWrite(in2Pin,HIGH);     //Motor derecho 
  digitalWrite(in1Pin,LOW);
  
  digitalWrite(in4Pin,LOW);      //Motor izquierdo 
  digitalWrite(in3Pin,HIGH);
  digitalWrite(led,HIGH);
}
if (distancia>11 && s2<800 && s1>300){
  analogWrite(enPin,150);      //Carro hacia derecha
  analogWrite(en2Pin,230);

  digitalWrite(in2Pin,LOW);     //Motor derecho 
  digitalWrite(in1Pin,HIGH);
  
  digitalWrite(in4Pin,HIGH);      //Motor izquierdo 
  digitalWrite(in3Pin,LOW);
  digitalWrite(led1,HIGH);
}
if (distancia<=10){
  digitalWrite(in2Pin,LOW);     //Motor derecho 
  digitalWrite(in1Pin,LOW);
  
  digitalWrite(in4Pin,LOW);      //Motor izquierdo 
  digitalWrite(in3Pin,LOW);

  digitalWrite(led,HIGH);
  digitalWrite(led1,HIGH);
}
digitalWrite(led,LOW);
digitalWrite(led1,LOW);
}
