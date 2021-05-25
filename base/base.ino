//base

#include <SimpleTimer.h>

SimpleTimer timer;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  
  led_digital_setup();
  led_analog_setup();
  sound_setup();
  ultra_setup();
  servo_setup();
  buzzer_setup();
  serial_setup();
  //ultra_servo_setup();
}

void loop() {
  // put your main code here, to run repeatedly:
  timer.run();
   //sound_loop();
  // led_digital_loop();
  // led_analog_loop();
  // ultra_loop();
  // servo_loop();
  //ultra_servo_loop();
  //buzzer_loop();
  serial_loop(); //각 부품의 타이머 기능 이용하는 루프. 다른 부품의 루프들을 비활성화 시키고 쓰기.
}
