//1_sound_bar

#define sound A0

int sound_timer;

void sound_setup(){
  for(int i=0; i<=13; i++){
    pinMode(i, OUTPUT);
  }
  sound_timer = timer.setInterval(100, sound_loop);
  timer.disable(sound_timer);
}


void sound_loop(){
  for(int i=0; i<=13; i++){
   digitalWrite(i, LOW);
  }
  Serial.println(analogRead(sound));
  int sound_chk = map(analogRead(sound), 10, 850, 7, 13);
  for(int i=8; i<=sound_chk; i++){
    digitalWrite(i, HIGH);
  }
  //delay(100);
}

void led_off(){
  for(int i=8; i<=13; i++){
    digitalWrite(i, LOW);
  }
}
