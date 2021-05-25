//4_ultrasonic

#define TRIG 5
#define ECHO 4

int ultra_timer;

long duration, distance;

void ultra_setup(){
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

  ultra_timer =  timer.setInterval(1000, ultra_loop);
  timer.disable(ultra_timer);
}

void  ultra_loop(){
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);

  duration = pulseIn(ECHO, HIGH);
  Serial.println(duration);
  distance = duration*17/1000;
  Serial.print("Distance : ");
  Serial.print(distance);
  Serial.println("cm");

  //delay(1000);
}
