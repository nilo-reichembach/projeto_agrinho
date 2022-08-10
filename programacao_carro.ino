
#include <AFMotor.h>
#include <Servo.h>
AF_DCMotor motor2(2); 

AF_DCMotor motor3(3); 


void setup() {
r2.run(RELEASE);
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
 
 frente(1000);
 
 delay(500);
 
 re(1000);
 
 delay(500);

 
giro_centro_antihorario(1000);

delay(500);

giro_centro_horario(1000);

delay(500);

giro_roda_antihorario(1000);

delay(500);

giro_roda_horario(1000);

delay(5000);
}

void frente(int tempo)
{
motor2.run(FORWARD);
motor3.run(FORWARD);
delay(tempo);
motor2.run(RELEASE);
motor3.run(RELEASE);
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
