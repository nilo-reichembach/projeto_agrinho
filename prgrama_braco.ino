// inclui bibilioteca do servomotor
#include <Servo.h>
#include <AFMotor.h>

// define pinos dos servos


// nomeia os servos
Servo serv1,serv2,serv3,serv4;

// cria as variavies dos angulos de cada motor
int motor1,motor2,motor3,motor4;

void setup() {

  //inicia o monitor serial

  // atribui pinos dos servos
  serv1.attach(pinServ1);
  serv2.attach(pinServ2);
  serv3.attach(pinServ3);
  serv4.attach(pinServ4);
  
}

void loop(){

  mostradorTimer = millis();
  }

}
