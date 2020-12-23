void ModeWork() {
  if (Button1_PushCounter == 0) {
    Default();
  }
  else if (Button1_PushCounter == 1) {
    Pulse();
  }
  else if (Button1_PushCounter == 2) {
    Oxy();
  }
  else if (Button1_PushCounter == 3) {
    Ventilator();
  }
    else if (Button1_PushCounter == 4) {
    Temp1();
  }
    else if (Button1_PushCounter == 5) {
    Temp2();
  }
  //else if(Button1_PushCounter == 5){

  // }
}
