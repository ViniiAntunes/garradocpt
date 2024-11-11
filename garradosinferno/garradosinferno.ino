

#include "VarSpeedServo.h"

VarSpeedServo servo1;
VarSpeedServo servo2;
VarSpeedServo servo3;
VarSpeedServo servo4;

static int s3 = 100;
static int s4 = 125;
static int s2 = 100;
static int s1 = 70;

void setup() {
  Serial.begin(9600);  // Só precisa uma vez
  servo1.attach(1);
  servo2.attach(2);
  servo3.attach(3);
  servo4.attach(4);

  servo1.write(110); // garra
  servo2.write(135); // rotação
  servo3.write(90);  // trás e frente
  servo4.write(60);  // abaixar e levantar
}

void loop() {
  delay(2000);

  servo1.write(110);
  servo2.write(135); // rotação
  servo3.write(90);  // trás e frente
  servo4.write(60);  // abaixar e levantar

  delay(2000);

  for (s3 = 90; s3 <= 145; s3++) {
    servo3.write(s3);
    delay(10);
  }

  delay(2000);

  for (s1 = 115; s1 >= 85; s1--) {
    servo1.write(s1);
    delay(10);
  }

  delay(2000);

  for (s3 = 145; s3 >= 90; s3--) {
    servo3.write(s3);
    delay(10);
  }

  delay(2000);

  for (s4 = 60; s4 <= 95; s4++) {
    servo4.write(s4);
    delay(10);
  }

  delay(2000);

  for (s2 = 135; s2 >= 40; s2--) {
    servo2.write(s2);
    delay(10);
  }

  delay(2000);

  for (s1 = 85; s1 <= 110; s1++) {
    servo1.write(s1);
    delay(10);
  }

  delay(2000);

  for (s2 = 40; s2 <= 135; s2++) {
    servo2.write(s2);
    delay(10);
  }

  for (s4 = 95; s4 >= 60; s4--) {  // Corrigido aqui
    servo4.write(s4);
    delay(10);
  }
}
