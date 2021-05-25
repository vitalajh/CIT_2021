//3_sound

#define sound A0

int sound_timer;

void sound_setup(){
  for(i = 7; i<=13; i++){
    pinMode(i, OUTPUT);
  }
  sound_timer = timer.setInterval(100, sound_loop);
  timer.disable(sound_timer);
}

void sound_loop(){
  for(i=7; i<=13; i++){
    digitalWrite(i, LOW);
  }
  //Serial.println(analogRead(A0));
  int sound_chk = map(analogRead(A0), 0, 900, 7, 14);
  for (i = 7; i<=sound_chk; i++){
      digitalWrite(i, HIGH);
  }
  //delay(200);
}
