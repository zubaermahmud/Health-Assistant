void Pulse() {

  lcd.setCursor(0, 0);
  lcd.print("BPM: ");
  lcd.print(pulse);
  lcd.print("       ");

  lcd.setCursor(0, 1);
  lcd.print("    A > Next    ");

}
