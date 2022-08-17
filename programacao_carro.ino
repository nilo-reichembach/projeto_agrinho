
#include <AFMotor.h>    //funcionamento do carro
#include <Servo.h>      //funcionamento do braço
#include <Ultrasonic.h> // funcionamento do sensor

AF_DCMotor motor2(2);   // define os motores do carro 
AF_DCMotor motor3(3); 

int pino_Trig = 2;      // define os pinos de funcionamento do sensor ultrassônico
int pino_Echo = 3;

Ultrasonic Sensor(pino_Trig, pino_Echo);

Servo serv1,serv2,serv3,serv4;   //define os motores do braço como servo 1 ...

int distancia;   // inclui uma variável para armazenar os valores de distância.


void setup() {
motor2.run(RELEASE);
motor3.run(RELEASE);
}
/* Função que gira em torno do centro no sentido horário pelo
tempo definido */
void giro_centro_horario(int tempo)
{
motor2.run(BACKWARD);
motor3.run(FORWARD);
delay(tempo);
motor2.run(RELEASE);
motor3.run(RELEASE);
}
/* Função que gira em torno da roda no sentido anti-horário
pelo tempo definido */
void giro_roda_antihorario(int tempo)
{
motor2.run(FORWARD);
motor3.run(RELEASE);
delay(tempo);
motor2.run(RELEASE);
motor3.run(RELEASE);
}
/* Função que gira em torno da roda no sentido horário pelo
tempo definido */
void giro_roda_horario(int tempo)
{
motor2.run(RELEASE);
motor3.run(FORWARD);
delay(tempo);
motor2.run(RELEASE);
motor3.run(RELEASE);
}

void setup() {
 motor2.run(RELEASE); 
 motor3.run(RELEASE);
}
void loop() {
 motor2.setSpeed(180); 
 motor3.setSpeed(180);
 
 frente(distacia);
 
 delay(500);
 
 //re(1000);
 
 //delay(500);

 
//giro_centro_antihorario(1000);

//delay(500);

//giro_centro_horario(1000);

//delay(500);

//giro_roda_antihorario(1000);

//delay(500);

//giro_roda_horario(1000);

//delay(5000);

distancia = Sensor.read();
}

void frente(int distacia)
{
  if(distancia = 50){
    motor2.run(RELEASE);
    motor3.run(RELEASE)
  } else {
    motor2.run(FORWARD);
    motor3.run(FORWARD);

  }
//motor2.run(FORWARD);
//motor3.run(FORWARD);
//delay(tempo);
//motor2.run(RELEASE);
//motor3.run(RELEASE);
}


void re(int tempo)
{
motor2.run(BACKWARD);
motor3.run(BACKWARD);
delay(tempo);
motor2.run(RELEASE);
motor3.run(RELEASE);
}

void giro_centro_antihorario(int tempo)
{
motor2.run(FORWARD);
motor3.run(BACKWARD);
delay(tempo);

motor2.run(RELEASE);
motor3.run(RELEASE);
}

void giro_centro_horario(int tempo)
{
motor2.run(BACKWARD);
motor3.run(FORWARD);
delay(tempo);
motor2.run(RELEASE);
motor3.run(RELEASE);
}

void giro_roda_antihorario(int tempo)
{
motor2.run(FORWARD);
motor3.run(RELEASE);
delay(tempo);
motor2.run(RELEASE);
motor3.run(RELEASE);
}

void giro_roda_horario(int tempo)
{
motor2.run(RELEASE);
motor3.run(FORWARD);
delay(tempo);
motor2.run(RELEASE);
motor3.run(RELEASE);
}
