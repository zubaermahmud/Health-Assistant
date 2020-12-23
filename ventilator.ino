void Ventilator(){
  lcd.setCursor(0, 0);
  lcd.print("VENTILATOR MODE>");
  
  analogWrite(En, 250);
  delay(3000);
  
  analogWrite(En, 0);
  delay(1000);

  }
