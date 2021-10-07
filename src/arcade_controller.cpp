#include <Joystick.h>

Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID,JOYSTICK_TYPE_GAMEPAD,
  14, 0, /** 14 = QUANTIDADE DE BOTÕES */
  false, false, false,
  false, false, false,
  false, false,
  false, false, false);

/** CONFIGURE AQUI OS PINOS DO SEU ARDUINO */
#define BUTTON_0 2
#define BUTTON_1 3
#define BUTTON_2 4
#define BUTTON_3 5
#define BUTTON_4 6
#define BUTTON_5 7
#define BUTTON_6 8
#define BUTTON_7 9
#define BUTTON_8 10
#define BUTTON_9 16
#define BUTTON_10 14
#define BUTTON_11 15
#define BUTTON_12 18
#define BUTTON_13 19

#define tempoDebounce 0 /** 0 = ZERO DELAY */

bool estadoAnt[10];
unsigned long debounce[10];

void setup() {
  pinMode(BUTTON_0, INPUT_PULLUP);
  pinMode(BUTTON_1, INPUT_PULLUP);
  pinMode(BUTTON_2, INPUT_PULLUP);
  pinMode(BUTTON_3, INPUT_PULLUP);
  pinMode(BUTTON_4, INPUT_PULLUP);
  pinMode(BUTTON_5, INPUT_PULLUP);
  pinMode(BUTTON_6, INPUT_PULLUP);
  pinMode(BUTTON_7, INPUT_PULLUP);
  pinMode(BUTTON_8, INPUT_PULLUP);
  pinMode(BUTTON_9, INPUT_PULLUP);
  pinMode(BUTTON_10, INPUT_PULLUP);
  pinMode(BUTTON_11, INPUT_PULLUP);
  pinMode(BUTTON_12, INPUT_PULLUP);
  pinMode(BUTTON_13, INPUT_PULLUP);
  
  Joystick.begin(true);
  Serial.begin(9600);
}

void loop() {  
  bool estado;
  if ((millis() - debounce[0]) > tempoDebounce) {
      estado = digitalRead(BUTTON_0);
      if (estado != estadoAnt[0]) {
         Joystick.setButton(0, !estado);
         //Serial.print(estado);
         //Serial.println("u");
         debounce[0] = millis();
      }
      estadoAnt[0] = estado;
  }
  if ((millis() - debounce[1]) > tempoDebounce) {
      estado = digitalRead(BUTTON_1);
      if (estado != estadoAnt[1]) {
         Joystick.setButton(1, !estado);
         debounce[1] = millis();
      }
      estadoAnt[1] = estado;
  }
  if ((millis() - debounce[2]) > tempoDebounce) {
      estado = digitalRead(BUTTON_2);
      if (estado != estadoAnt[2]) {
         Joystick.setButton(2, !estado);
         debounce[2] = millis();
      }
      estadoAnt[2] = estado;
  }
  if ((millis() - debounce[3]) > tempoDebounce) {
      estado = digitalRead(BUTTON_3);
      if (estado != estadoAnt[3]) {
         Joystick.setButton(3, !estado);
         debounce[3] = millis();
      }
      estadoAnt[3] = estado;
  }
  if ((millis() - debounce[4]) > tempoDebounce) {
      estado = digitalRead(BUTTON_4);
      if (estado != estadoAnt[4]) {
         Joystick.setButton(4, !estado);
         debounce[4] = millis();
      }
      estadoAnt[4] = estado;
  }
  if ((millis() - debounce[5]) > tempoDebounce) {
      estado = digitalRead(BUTTON_5);
      if (estado != estadoAnt[5]) {
         Joystick.setButton(5, !estado);
         debounce[5] = millis();
      }
      estadoAnt[5] = estado;
  }
  if ((millis() - debounce[6]) > tempoDebounce) {
      estado = digitalRead(BUTTON_6);
      if (estado != estadoAnt[6]) {
         Joystick.setButton(6, !estado);
         debounce[6] = millis();
      }
      estadoAnt[6] = estado;
  }
  if ((millis() - debounce[7]) > tempoDebounce) {
      estado = digitalRead(BUTTON_7);
      if (estado != estadoAnt[7]) {
         Joystick.setButton(7, !estado);
         debounce[7] = millis();
      }
      estadoAnt[7] = estado;
  }
  if ((millis() - debounce[8]) > tempoDebounce) {
      estado = digitalRead(BUTTON_8);
      if (estado != estadoAnt[8]) {
         Joystick.setButton(8, !estado);
         debounce[8] = millis();
      }
      estadoAnt[8] = estado;
  }
  if ((millis() - debounce[9]) > tempoDebounce) {
      estado = digitalRead(BUTTON_9);
      if (estado != estadoAnt[9]) {
         Joystick.setButton(9, !estado);
         debounce[9] = millis();
      }
      estadoAnt[9] = estado;
  }
  if ((millis() - debounce[10]) > tempoDebounce) {
      estado = digitalRead(BUTTON_10);
      if (estado != estadoAnt[10]) {
         Joystick.setButton(10, !estado);
         debounce[10] = millis();
      }
      estadoAnt[10] = estado;
  }
  if ((millis() - debounce[11]) > tempoDebounce) {
      estado = digitalRead(BUTTON_11);
      if (estado != estadoAnt[11]) {
         Joystick.setButton(11, !estado);
         debounce[11] = millis();
      }
      estadoAnt[11] = estado;
  }
  if ((millis() - debounce[12]) > tempoDebounce) {
      estado = digitalRead(BUTTON_12);
      if (estado != estadoAnt[12]) {
         Joystick.setButton(12, !estado);
         debounce[12] = millis();
      }
      estadoAnt[12] = estado;
  }
  if ((millis() - debounce[13]) > tempoDebounce) {
      estado = digitalRead(BUTTON_13);
      if (estado != estadoAnt[13]) {
         Joystick.setButton(13, !estado);
         debounce[13] = millis();
      }
      estadoAnt[13] = estado;
  }
}
