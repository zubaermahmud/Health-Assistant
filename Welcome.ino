void Welcome(){
  lcd.setCursor(0,0);
  lcd.print("Health Assistant");
  lcd.setCursor(5,2);
  lcd.print("SCPSC");
  tone(BuzzerPin, 1000, 500);
  delay(100);
    tone(BuzzerPin, 0, 500);
  delay(100);
    tone(BuzzerPin, 1000, 500);
  delay(2000);
  lcd.clear();
}
