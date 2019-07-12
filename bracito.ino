/*#include <Servo.h> 
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
  motorDerecho.write (20);
  motorIzquierdo.write (90);
  delay (1000); 
  motorDerecho.write (40);
  motorIzquierdo.write (110);
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
}*/
/*#include <Servo.h> //Comienzo de trabajo en comandos 
 
 Servo motorBase;
 Servo motorDerecho;
 Servo motorIzquierdo;
 Servo motorMano;

 void setup ()
 {
  Serial.begin (9600);
  motorBase.attach (12);
  motorDerecho.attach (11);
  motorIzquierdo.attach (10);
  motorMano.attach (9);
 }
 int m,j,c;
 char s[4];
 
void loop (){
  if (Serial.available ()>0&& Serial.available ()<4)
  {
    Serial.readBytes (s,4);
    
    switch (s[0])
  {
   case 'b':
   m= ((s[1]-48)*100)+((s[2]-48)*10)+((s[3]-48));
   motorBase.write (m);
   break; 
   
   case 'm':
   m= ((s[1]-48)*100)+((s[2]-48)*10)+((s[3]-48));
   delay (0);
   motorMano.write (m);
   break;
   
   case 'd':
   m= ((s[1]-48)*100)+((s[2]-48)*10)+((s[3]-48));
   motorDerecho.write (m);
   break;
   
   case 'i':
   m= ((s[1]-48)*100)+((s[2]-48)*10)+((s[3]-48));
   motorIzquierdo.write (m);
   break;
  }
}
}*/


#include <Servo.h>//Comienzo de trabajo con bluetooh 
#include <SoftwareSerial.h>
SoftwareSerial BT (2,3);
 
 Servo motorBase;
 Servo motorDerecho;
 Servo motorIzquierdo;
 Servo motorMano;

 void setup ()
 {
  BT.begin (9600);
  /*Serial.begin (9600);*/
  motorBase.attach (12);
  motorDerecho.attach (11);
  motorIzquierdo.attach (10);
  motorMano.attach (9);
 }
 
 int m,j,c;
 char s[4];
 
void loop (){
  if (BT.available ()>0&& BT.available ()<4)
   BT.readBytes (s,4);
   { 
    switch (s[0])
  {
   case 'b':
   m= ((s[1]-48)*100)+((s[2]-48)*10)+((s[3]-48));
   motorBase.write (m);
   break; 
   
   case 'g':
   m= ((s[1]-48)*100)+((s[2]-48)*10)+((s[3]-48));
   motorMano.write (m);
   break;
   
   case 'd':
   m= ((s[1]-48)*100)+((s[2]-48)*10)+((s[3]-48));
   motorDerecho.write (m);
   break;
   
   case 'i':
   m= ((s[1]-48)*100)+((s[2]-48)*10)+((s[3]-48));
   motorIzquierdo.write (m);
   break;

      case 'y'://1-1-1
   motorMano.write (55);//primer cubo
delay (1000);
motorBase.write (45);
delay  (1000);
motorIzquierdo.write (115);
motorDerecho.write (135);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);//segundo cubo
delay (1000);
motorBase.write (90);
delay  (1000);
motorIzquierdo.write (100);
motorDerecho.write (125);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);//tercer Cubo
delay (1000);
motorBase.write (135);
delay  (1000);
motorIzquierdo.write (130);
motorDerecho.write (150);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);
   break;

   case 'a'://0-0-3
   motorMano.write (65);
delay (1000);
motorBase.write (45);
delay  (1000);
motorIzquierdo.write (115);
motorDerecho.write (135);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);//Primer Cubo
delay (1000);
motorBase.write (45);
delay  (1000);
motorIzquierdo.write (125);
motorDerecho.write (135);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);//Segundo Cubo
delay (1000);
motorBase.write (45);
delay  (1000);
motorIzquierdo.write (140);
motorDerecho.write (135);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);
   break;
   
   case 'e'://0-1-2
motorMano.write (65);
delay (1000);
motorBase.write (45);
delay  (1000);
motorIzquierdo.write (115);
motorDerecho.write (135);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);//Primer Cubo
delay (1000);
motorBase.write (45);
delay  (1000);
motorIzquierdo.write (125);
motorDerecho.write (135);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);//Segundo Cubo
delay (1000);
motorBase.write (90);
delay  (1000);
motorIzquierdo.write (100);
motorDerecho.write (125);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);
   break;

   case 'p'://0-2-1
   motorMano.write (55);//Primer Cubo
delay (1000);
motorBase.write (90);
delay  (1000);
motorIzquierdo.write (100);
motorDerecho.write (125);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);//segundo cubo
delay (1000);
motorBase.write (90);
delay  (1000);
motorIzquierdo.write (105);
motorDerecho.write (125);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (65);//Tercer cubo
delay (1000);
motorBase.write (45);
delay  (1000);
motorIzquierdo.write (115);
motorDerecho.write (135);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);
break;

case 't': //0-3-0
motorMano.write (55);//Primer Cubo
delay (1000);
motorBase.write (90);
delay  (1000);
motorIzquierdo.write (100);
motorDerecho.write (125);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);//segundo Cubo
delay (1000);
motorBase.write (90);
delay  (1000);
motorIzquierdo.write (105);
motorDerecho.write (125);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);//Tercer Cubo
delay (1000);
motorBase.write (90);
delay  (1000);
motorIzquierdo.write (115);
motorDerecho.write (125);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
break;

case 'z': //2-1-0
motorMano.write (55);//Primer Cubo
delay (1000);
motorBase.write (90);
delay  (1000);
motorIzquierdo.write (100);
motorDerecho.write (125);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);//Segundo Cubo
delay (1000);
motorBase.write (135);
delay  (1000);
motorIzquierdo.write (130);
motorDerecho.write (150);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);
motorMano.write (55);//Tercer Cubo
delay (1000);
motorBase.write (135);
delay  (1000);
motorIzquierdo.write (135);
motorDerecho.write (150);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);
break;


case 'l': //3-0-0
motorMano.write (55);//Primer Cubo
delay (1000);
motorBase.write (135);
delay  (1000);
motorIzquierdo.write (130);
motorDerecho.write (150);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);//segundo Cubo
delay (1000);
motorBase.write (135);
delay  (1000);
motorIzquierdo.write (135);
motorDerecho.write (150);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);//Tercer Cubo
delay (1000);
motorBase.write (135);
delay  (1000);
motorIzquierdo.write (140);
motorDerecho.write (150);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);
break;



case 's': //2-0-1
motorMano.write (55);//Primer Cubo
delay (1000);
motorBase.write (135);
delay  (1000);
motorIzquierdo.write (130);
motorDerecho.write (150);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);//segundo Cubo
delay (1000);
motorBase.write (135);
delay  (1000);
motorIzquierdo.write (135);
motorDerecho.write (150);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);//tercer cubo
delay (1000);
motorBase.write (45);
delay  (1000);
motorIzquierdo.write (115);
motorDerecho.write (135);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);
break;

case 'f': //1-2-0
motorMano.write (55);//Primer Cubo
delay (1000);
motorBase.write (135);
delay  (1000);
motorIzquierdo.write (130);
motorDerecho.write (150);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);//Segundo Cubo
delay (1000);
motorBase.write (90);
delay  (1000);
motorIzquierdo.write (100);
motorDerecho.write (125);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);//tercer Cubo
delay (1000);
motorBase.write (90);
delay  (1000);
motorIzquierdo.write (105);
motorDerecho.write (125);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);
break;



case 'u'://1-0-2
motorMano.write (55);//Primer Cubo
delay (1000);
motorBase.write (135);
delay  (1000);
motorIzquierdo.write (130);
motorDerecho.write (150);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);//Segundo cubo
delay (1000);
motorBase.write (45);
delay  (1000);
motorIzquierdo.write (115);
motorDerecho.write (135);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);//Tercer Cubo
delay (1000);
motorBase.write (45);
delay  (1000);
motorIzquierdo.write (125);
motorDerecho.write (135);
delay (1000);
motorMano.write (80);
delay (1000);
motorBase.write (180);
delay (1000);
motorIzquierdo.write (65);
motorDerecho.write (80);
delay (1000);
motorMano.write (55);
break;

case 'q'://stop
delay (1000);
motorBase.write(90);
delay (1000);
motorDerecho.write (90);
motorIzquierdo.write (20);
delay (1000);
motorMano.write (65);
delay (1000);


  }
}
}
 
