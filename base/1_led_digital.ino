//1_led_digital
#define RED 13
#define WHITE 12

int led_digital_timer;

void led_digital_setup(){
  pinMode(RED, OUTPUT);
  pinMode(WHITE, OUTPUT);
  //digitalWrite(WHITE, 1);

  led_digital_timer = timer.setInterval(500, led_digital_loop);
  timer.disable(led_digital_timer);
}

void led_digital_loop(){
  /*
  digitalWrite(RED, HIGH);
   digitalWrite(WHITE, LOW);

   delay(500);

   digitalWrite(RED, LOW);
   digitalWrite(WHITE, HIGH);
   delay(500);
   */
 digitalWrite(RED, digitalRead(RED)^1);
 digitalWrite(WHITE, digitalRead(WHITE)^1);
  //위의 6줄짜리와 동일한 기능.
//  delay(500);

}
