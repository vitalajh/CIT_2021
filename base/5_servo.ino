//5_servo_motor
#include <Servo.h>
#define servo_pin 9

int j=0;
int s_gap = 30;
int servo_timer;
Servo servo;

void servo_setup(){
  servo.attach(servo_pin);

  servo_timer = timer.setInterval(500, servo_loop);
  timer.disable(servo_timer);
}

void servo_loop(){
  servo.write(j);
  j += s_gap;
  if(j > 180) j = 0;
  // delay (500);
}
