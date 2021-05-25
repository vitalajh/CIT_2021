//2_led_analog

#define YELLOW 11

int i = 0;
int gap = 10;
int led_analog_timer;

void led_analog_setup(){
  pinMode(YELLOW, OUTPUT);

  led_analog_timer = timer.setInterval(200, led_analog_loop);
  timer.disable(led_analog_timer);
}

void led_analog_loop(){

//    Serial.print("i : "); //""는 저기 문자를 출력하겠다는 뜻
//    Serial.println(i);  //i는 줄바꿈
    analogWrite(YELLOW, i);
    i += gap;

    if(i >= 255){
      i = 255;
      gap *= -1; //gap = gap*(-1), * = -1
    }
    if(i <= 0){
      i = 0;
      gap *= -1;
    }
 //   delay(50);
  /*
  for(int i=0; i<-255; i+=10){
    analogWrite(YELLOW, i);
    delay(50);
  }

  for(int i=255; i>=0; i-=10){
    analogWrite(YELLOW, i);
    delay(50);
    */
  }
