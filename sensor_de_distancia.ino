/* Programa: Sensor de distância HC */
/* Inclui a biblioteca do sensor */
#include <Ultrasonic.h>
/* Define os pinos para o sensor */
int pino_Trig = 2;
int pino_Echo = 3;
/* Especifi ca o nome e os pinos para o sensor */
Ultrasonic Sensor(pino_Trig, pino_Echo);
/* Variável que armazenará as medidas. */
int distancia;
void setup() {
 /* Inicializa a comunicação serial */
 Serial.begin(9600);
}
void loop() {
 /* Realiza a medição e armazena na variável “distancia”
*/
 distancia = Sensor.read();
 /* Imprime no Monitor Serial os valores das medidas a
cada 0,5 segundos */
 Serial.print(“Distância: “);
 Serial.print(distancia);
 Serial.println(“cm”);
 delay(500);
}