void Temp1() {
  mlx.begin();
    lcd.setCursor(0, 0);
    lcd.print("Ambient ");
    lcd.print(mlx.readAmbientTempF());
    lcd.print(" F");
    lcd.write (0xDF);

    lcd.setCursor(0, 1);
    lcd.print("Target  ");
    lcd.print(mlx.readObjectTempF());
    lcd.print(" F");
    lcd.write (0xDF);

    delay(1000);
}

void Temp2(){
  
 
    lcd.setCursor(0, 0);
    lcd.print("Ambient ");
    lcd.print(mlx.readAmbientTempC());
    lcd.print(" C");
    lcd.write (0xDF);

    lcd.setCursor(0, 1);
    lcd.print("Target  ");
    lcd.print(mlx.readObjectTempC());
    lcd.print(" C");
    lcd.write (0xDF);
    delay(1000);
 
  }
