#include <Servo.h> 

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
  delay (1000); //Esperar un segundo 
  motorMano.write (30); //Abrir mano 
  delay (1000); //Esperar un segundo
  motorBase. write (0); //Mover Base a cero grados
  delay (2000); //Espera dos segundos
  motorDerecho.write (130);
  motorIzquierdo.write (60);
  delay (2000); //Espera dos segundos
  motorBase.write (90); //Mover Base a 90 grados 
  delay (2000); //Espera dos segundos 
  motorDerecho.write (60);
  motorIzquierdo.write (120);
  delay (2000); //Esperar dos segundos
  motorBase.write (180); //Mover Base a 180 grados
  delay (1000); //Esperar un segundo 
  motorDerecho.write (150);
  motorIzquierdo.write (90);
  delay (1500); //Esperar un segundo y medio 
  motorDerecho.write (90);
  motorIzquierdo.write (180);
 delay (2000); //Esperar dos segundos 
 motorBase.write (90); // La base vuelve a 90 grados
 delay (1000); //Esperar un segundo 
 motorDerecho.write (30);
 motorIzquierdo.write (100);
 delay (1500); //Esperar  segundo y medio 
 motorDerecho.write (120);
  motorIzquierdo.write (30);
  delay (2000); //Esperar dos segundos
  motorDerecho.write (150);
  motorIzquierdo.write (180);
  delay (1000); // Esperar un segundo 
  motorDerecho.write (20);
  motorIzquierdo.write (40);
  delay (1000); // Esperar un segundo 
  motorDerecho.write (90);
  motorIzquierdo.write (180);
  delay (1000); //Esperar un segundo
  motorMano.write (85); //cerrar mano 
}

void loop() {
  // put your main code here, to run repeatedly:

}
