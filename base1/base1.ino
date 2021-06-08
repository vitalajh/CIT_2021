#include <SimpleTimer.h>

SimpleTimer timer;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  sound_setup();
  button_setup();
  serial_setup();
}

void loop() {
  // put your main code here, to run repeatedly:
  //sound_loop();
  timer.run();
  //button_loop();
  serial_loop();
  
}
