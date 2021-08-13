const int potenciometro1 = A0; // pino de entrada do potenciômetro
const int potenciometro2 = A1; // pino de entrada do potenciômetro
const int potenciometro3 = A2; // pino de entrada do potenciômetro
const int potenciometro4 = A3; // pino de entrada do potenciômetro

int pushbutton= 2;

int valor1 = 0;
int valor2 = 0;
int valor3 = 0;
int valor4 = 0;

#include <Servo.h> 
#define Servo_ba 9
#define Servo_sh 8
#define Servo_el 7
#define Servo_cl 6


Servo MG995_Servo1; 
Servo MG995_Servo2; 
Servo MG995_Servo3; 
Servo MG995_Servo4; 

int A = Serial.read();


 
void setup() {
Serial.begin(9600);
MG995_Servo1 .attach(Servo_ba);  
MG995_Servo2.attach(Servo_sh);
MG995_Servo3.attach(Servo_el);
MG995_Servo4.attach(Servo_cl);
pinMode (pushbutton, INPUT);

}

void loop(){
    int buttonState = digitalRead(pushbutton);
    Serial.println(buttonState);
    delay(1);

 if(buttonState==0){

valor1 = map(analogRead(potenciometro1),0,1023,0,180);
  valor2 = map(analogRead(potenciometro2),0,1023,0,180);
  valor3 = map(analogRead(potenciometro3),0,1023,0,180);
  valor4 = map(analogRead(potenciometro4),0,1023,20,155);

  
 MG995_Servo1.write(valor1);
 MG995_Servo2.write(valor2);
 MG995_Servo3.write(valor3);
 MG995_Servo4.write(valor4);
 }



  
if((buttonState == 1)){
   
//Posição 1:

//Base
valor1 = map(analogRead(potenciometro1), 0, 1023, 0, 180); 

delay(100);
MG995_Servo1.write(120); //Turn clockwise at high speedMG995_Servo1.attach(Servo_ba);//Always use attach function after detach to re-connect your servo with the board
delay(1000);

//SHOULDER
valor2 = map(analogRead(potenciometro2), 0, 1023, 0, 180); 

delay(100);
MG995_Servo2.write(80); //Turn clockwise at high speed
   MG995_Servo2.attach(Servo_sh);//Always use attach function after detach to re-connect your servo with the board
   delay(1000);

//Elbow
valor2 = map(analogRead(potenciometro3), 0, 1023, 0, 180); 

delay(100);
MG995_Servo3.write(130); //Turn clockwise at high speed
   MG995_Servo3.attach(Servo_el);//Always use attach function after detach to re-connect your servo with the board
   delay(1000);

//CLAW

//Base
valor4 = map(analogRead(potenciometro1), 0, 1023, 0, 180); 

delay(100);
MG995_Servo4.write(150); //Turn clockwise at high speed
   MG995_Servo4.attach(Servo_cl);//Always use attach function after detach to re-connect your servo with the board
   delay(1000);

//=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-====================----==================================================-----------------------
//POSIÇAO 2
 //Base
valor1 = map(analogRead(potenciometro1), 0, 1023, 0, 180); 

delay(100);
MG995_Servo1.write(48); //Turn clockwise at high speed
   MG995_Servo1.attach(Servo_ba);//Always use attach function after detach to re-connect your servo with the board
   delay(1000);



//Elbow
valor2 = map(analogRead(potenciometro3), 0, 1023, 0, 180); 

delay(100);
MG995_Servo3.write(106); //Turn clockwise at high speed
   MG995_Servo3.attach(Servo_el);//Always use attach function after detach to re-connect your servo with the board
   delay(1000);

//SHOULDER
valor2 = map(analogRead(potenciometro2), 0, 1023, 0, 180); 

delay(100);
MG995_Servo2.write(5); //Turn clockwise at high speed
   MG995_Servo2.attach(Servo_sh);//Always use attach function after detach to re-connect your servo with the board
   delay(1000);





//CLAW


valor4 = map(analogRead(potenciometro1), 0, 1023, 0, 180);
delay(100);
MG995_Servo4.write(20); //Turn clockwise at high speed
   MG995_Servo4.attach(Servo_cl);//Always use attach function after detach to re-connect your servo with the board
   delay(1000);






 //****************************************************************************************************************************************************************************************
   
   //POSIÇÃO3:



//Pos1: SERVO2 SHOULDER
valor2 = map(analogRead(potenciometro2), 0, 1023, 0, 180); 

delay(100);
MG995_Servo2.write(80); //Turn clockwise at high speed

  delay(3000);

//Pos1: SERVO1 BASE

valor1 = map(analogRead(potenciometro1), 0, 1023, 0, 180); 

delay(100);
MG995_Servo1.write(170); //Turn clockwise at high speed

  delay(3000);

   //Pos1:SERVO3 ELBOW

 valor3 = map(analogRead(potenciometro3), 0, 1023, 0, 180); 

delay(100);
MG995_Servo3.write(80); //Turn clockwise at high speed

  delay(3000);
  
  //Pos1: SERVO2 SHOULDER
valor2 = map(analogRead(potenciometro2), 0, 1023, 0, 180); 

delay(100);
MG995_Servo2.write(5); //Turn clockwise at high speed


  delay(3000);





 

  //Pos1: SERVO4 CLAW
  valor4 = map(analogRead(potenciometro4), 0, 1023, 0, 180); 

delay(100);
MG995_Servo4.write(150); //Turn clockwise at high speed
  delay(3000);

  //Pos1: SERVO2 SHOULDER
valor2 = map(analogRead(potenciometro2), 0, 1023, 0, 180); 

delay(100);
MG995_Servo2.write(80); //Turn clockwise at high speed

  delay(3000);
  }
  }

 

 
