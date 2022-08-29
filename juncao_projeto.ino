#include <VarSpeedServo.h>
#include <EEPROM.h>

#define espacoMemoria 199
#define tempoPausaEntreMovimentos 50  //configura o tempo de pausa entre cada movimento

#define pinServo1  13 
#define pinServo2  12 
#define pinServo3  11 
#define pinServo4  10

#define pinBotao1     3
#define pinBotao2     2

#define pinLedA       5
#define pinLedB       4

#define pinPot1      A5
#define pinPot2      A4
#define pinPot3      A3
#define pinPot4      A0
#define pinPot6      A2

VarSpeedServo servo1;
VarSpeedServo servo2;
VarSpeedServo servo3;
VarSpeedServo servo4;

byte pinBotao1Modo();
bool pinBotao2Retencao();
void pinLedAPisca(bool reset = false);
void setMemoria(byte posicao, byte servo, byte valor);
byte readMemoria(byte posicao, byte servo);

int ultMemoria;

void setup() {
  servo1.attach(pinServo1);
  servo2.attach(pinServo2);
  servo3.attach(pinServo3);
  servo4.attach(pinServo4);

  pinMode(pinLedA, OUTPUT);
  pinMode(pinLedB, OUTPUT);

  pinMode(pinBotao1, INPUT_PULLUP);
  pinMode(pinBotao2, INPUT_PULLUP);

  ultMemoria = EEPROM.read(0);
}

