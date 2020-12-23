void Oxy(){
  lcd.setCursor(0, 0);
  lcd.print("  OXYGEN LEVEL  ");
 
  lcd.setCursor(0, 1);
  lcd.print("O2: ");
  lcd.print(oxy);
  lcd.print("%           ");
  }
