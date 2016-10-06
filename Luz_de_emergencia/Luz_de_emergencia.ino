int analogPin = 0;                            
int val = 0;          

void setup(){
Serial.begin(9600);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
}    
void display(int a, int b,int c,int d)
{
digitalWrite(2,a);
digitalWrite(3,b);
digitalWrite(4,c);
digitalWrite(5,d);
}

void loop(){
  
  val = analogRead(analogPin);  
  Serial.println(val);
  delay(300);        

  if(val>=10)
  {
    digitalWrite(2,0);
    digitalWrite(3,0);
    digitalWrite(4,0);
    digitalWrite(5,0);
  }
  else
  {
    display(1,0,0,0); //
    delay(200);
    display(0,1,0,0); //
    delay(200);
    display(0,0,1,0); //
    delay(200);
    display(0,0,0,1); //
    delay(200);
    display(0,0,1,0);
    delay(200);
    display(0,1,0,0);
    delay(200);
    display(1,0,0,0);
    delay(200);
  }
}
