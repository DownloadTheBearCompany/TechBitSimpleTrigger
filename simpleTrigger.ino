#include <Servo.h>

Servo servo;       


void setup() {

  Serial.begin(115200);
  servo.attach(3);
}

void loop() {

  Serial.println(servol.read());
  servo.write(115);
  delay(5000);
  servo.write(60);
  while (true) {}
}
