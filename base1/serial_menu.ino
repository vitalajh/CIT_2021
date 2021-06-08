//serial_menu

int input_menu = 0;

void serial_setup(){
  show_menu();
}

void serial_loop(){
  if(Serial.available()>0){
    input_menu = Serial.read();
    if(input_menu != char(10)){
      Serial.print("사용자 선택 : ");
      Serial.println((char)input_menu); //없으면 아스키 코드로 나옴 ㅋ
      //시리얼 모니터에서 값 받을 때...
    }
 
  switch(input_menu){
    case '1' :
      timer.enable(sound_timer);
      timer.disable(bt_timer);
      led_off();
      break;
    case '2' :
      timer.disable(sound_timer);
      timer.enable(bt_timer);
      led_off();
      break;
  
    case '10' :
      break;
      
    case '8' :
      timer.disable(sound_timer);
      timer.disable(bt_timer);
      led_off();
      break;
    default :
      Serial.println("1, 8번을 누르세요");
      break;
    }
  }
  }

void show_menu(){
  Serial.println("1. Sound bar");
  Serial.println("2. LED bt control");
  Serial.println("8. All stop");
}
