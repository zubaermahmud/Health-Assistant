void ReadMode() {
  Button1_State = digitalRead(ButtonPin1);
  if (Button1_State != Button1_LastState) {
    if (Button1_State == HIGH) {
      tone(BuzzerPin, 1000, 200);
      Button1_PushCounter++;
    } else {
      digitalWrite(BuzzerPin, LOW);
    }
    delay(50);
    if (Button1_PushCounter == 6) {
      Button1_PushCounter = 0;
    }
  }
  Button1_LastState = Button1_State;





  Button2_State = digitalRead(ButtonPin2);
  if (Button2_State != Button2_LastState) {
    if (Button2_State == HIGH) {
      tone(BuzzerPin, 1000, 200);
      Button2_PushCounter++;
    } else {
      digitalWrite(BuzzerPin, LOW);
    }
    delay(50);
  }
  Button2_LastState = Button2_State;




  Button3_State = digitalRead(ButtonPin3);
  if (Button3_State != Button3_LastState) {
    if (Button3_State == HIGH) {
      tone(BuzzerPin, 1000, 200);
      Button3_PushCounter++;
    } else {
      digitalWrite(BuzzerPin, LOW);
    }
    delay(50);
  }
  Button3_LastState = Button3_State;
}
