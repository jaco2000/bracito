#include <Servo.h> 
void abrirCerrarMano (void); 

// Defino los pines
 #define pinBase 12
 #define pinDerecho 11
 #define pinIzquierdo 10
 #define pinMano 9

 //Definir servomotores
 Servo motorBase;
 Servo motorDerecho;
 Servo motorIzquierdo;
 Servo motorMano;

void setup() 
{
  motorBase.attach (pinBase);
  motorDerecho.attach (pinDerecho);
  motorIzquierdo.attach (pinIzquierdo);
  motorMano.attach (pinMano);
  delay (1000);
  motorBase.write (180); //Base queda hacia la izquierda
  delay (1000); //Esperar un segundo para que el brazo quede arriba
  motorDerecho.write (90);
  motorIzquierdo.write (180);
  delay (2000); //Esperar dos segundos para que la mano baje
  motorDerecho.write (160);
  motorIzquierdo.write (90);
  delay (1000); 
  motorBase.write (90);//Motor Base queda mirando hacia el frente
  delay (1000);//Espera un segundo para que el brazo quede a altura media y vaya hacia atras
  motorDerecho.write (60);
  motorIzquierdo.write (120);
  delay (1000);//Espera un segundo para quedar punto medio (altura y base)
  motorDerecho.write (105);
  motorIzquierdo.write (120);
  delay (1000);
  motorBase.write (0); //La base queda hacia la derecha
  delay (2000); //Esperar dos segundos para que el brazo vaya completamente hacia atrás 
  motorDerecho.write (0);
  motorIzquierdo.write (90);
  delay (1000); 
  motorDerecho.write (40);
  delay (1000);
  motorDerecho.write (80);
  delay (1000); //
  motorBase.write (90); //Base vuelve a frente
  //Después la mano hace su función 
}

void loop(){
  motorMano.attach (pinMano);
  motorMano.write (80); //Abrir mano
  delay (2000);
  motorMano.write (10); //Cerrar Mano
  delay (2000); // Tiempo para repetir el proceso
}
