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
  motorBase. write (0);
  delay (2000);
  motorDerecho.write (130);
  motorIzquierdo.write (60);
  delay (2000);
  motorMano.write (10);
  delay (2000);
   motorMano.write (90);
  delay (1000);
  motorBase.write (90);
  delay (2000);
  motorDerecho.write (60);
  motorIzquierdo.write (120);
  delay (2000);
  motorBase.write (180);
  delay (1000);
  motorDerecho.write (150);
  motorIzquierdo.write (90);
  delay (1500);
  motorDerecho.write (90);
  motorIzquierdo.write (180);
 delay (2000);
 motorBase.write (90);
 delay (1000);
 motorDerecho.write (30);
 motorIzquierdo.write (100);
 delay (1500);
 motorDerecho.write (120);
  motorIzquierdo.write (30);
  delay (2000);
  motorDerecho.write (150);
  motorIzquierdo.write (180);
  delay (1000);
  motorDerecho.write (20);
  motorIzquierdo.write (40);
  delay (1000);
  motorDerecho.write (90);
  motorIzquierdo.write (180);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
