volatile int contador = 0;   // Somos de lo mas obedientes
int n = contador ;
long T0 = 0 ;  // Variable global para tiempo

void setup()
   {    pinMode(2, INPUT);
        Serial.begin(9600); 
        attachInterrupt( 0, ServicioBoton, LOW);
   } 
void loop()
   {   if (n != contador)
           {   Serial.println(contador);
               n = contador ;
           }
   }
void ServicioBoton()
   {
       if ( millis() > T0  + 250)
          {   contador++ ;
              T0 = millis();
          }
    }
