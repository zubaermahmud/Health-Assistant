#include <Wire.h>
#include <Adafruit_MLX90614.h>
#include <LiquidCrystal.h>

int Button1_PushCounter = 0;
#include "MAX30100_PulseOximeter.h"
#define REPORTING_PERIOD_MS     1000
PulseOximeter pox;
uint32_t tsLastReport = 0;

void onBeatDetected()
{
    //Serial.println("Beat!");
    if(Button1_PushCounter == 1 || Button1_PushCounter == 2){
    tone(6, 1000, 200);}
}

Adafruit_MLX90614 mlx = Adafruit_MLX90614();
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int BuzzerPin = 6;
int ButtonPin1 = A2;

int Button1_State = 0;
int Button1_LastState = 0;
int ButtonPin2 = A3;
int Button2_PushCounter = 0;
int Button2_State = 0;
int Button2_LastState = 0;
int ButtonPin3 = A4;
int Button3_PushCounter = 0;
int Button3_State = 0;
int Button3_LastState = 0;
int PotPin1 = A0;
int PotPin2 = A1;
double pulse = 0;
double oxy = 0;
int En = 10;
int in1 = 9;
int in2 = 8;

byte customChar[] = {
  B00000,
  B00000,
  B01010,
  B11111,
  B11111,
  B01110,
  B00100,
  B00000
};

void setup() {
    digitalWrite(in1, HIGH);
  digitalWrite(in2,LOW);
  lcd.begin(16, 2);
  lcd.createChar(1, customChar);

  Serial.begin(9600);
  pinMode(BuzzerPin, OUTPUT);
  pinMode(En, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(ButtonPin1, INPUT);
  pinMode(ButtonPin2, INPUT);
  pinMode(ButtonPin3, INPUT);
  pinMode(PotPin1, INPUT);
  pinMode(PotPin2, INPUT);

  Welcome();
   
   if (!pox.begin()) {
        //Serial.println("FAILED");
        for(;;);
    } else {
        //Serial.println("SUCCESS");
    }

    pox.setOnBeatDetectedCallback(onBeatDetected);
  
}

void loop() {
       pox.update();

    if (millis() - tsLastReport > REPORTING_PERIOD_MS) {
        //Serial.print("Heart rate:");
        //Serial.print(pox.getHeartRate());
        pulse = pox.getHeartRate();
        //Serial.print("bpm / SpO2:");
        //Serial.print(pox.getSpO2());
        oxy = pox.getSpO2();
        //Serial.println("%");

        tsLastReport = millis();
    }
  ReadMode();
  ModeWork();
  

}
