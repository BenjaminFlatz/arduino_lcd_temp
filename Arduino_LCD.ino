/*
Benjamin Flatz
05.03.2020

Arduino Nano
https://github.com/wrusl/arduino_lcd_temp/tree/master
https://www.digikey.sk/en/maker/projects/how-to-measure-temperature-with-an-ntc-thermistor/4a4b326095f144029df7f2eca589ca54
*/

#include <LiquidCrystal.h>

#define rs 7
//#define rw 8
#define en 9

#define d4 2
#define d5 3
#define d6 4
#define d7 5



//int data[] = {d4, d5, d6, d7};//{14,12,13,15};//

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup(){


  Serial.begin(9600);
 
  //Digital.write(EN, HIGH);
  //Digital.write(RW, HIGH);

  lcd.begin(16, 2);
}

float read_temp(){

  const double BETA = 3974.0;
  const double ROOM_TEMP = 298.15;
  
  //float temp = (analogRead(A0)*0.004882813);
  float res = 10000*(5/(analogRead(A0)*0.004882813)-1);
  float temp = (BETA * ROOM_TEMP) / (BETA + (ROOM_TEMP * log(res/10000)))-273.15;

  Serial.println(temp);
  return temp;


  
}

void loop(){
  
  lcd.print(String(read_temp()));
  lcd.print(" C");
  delay(1000);
  lcd.clear();
  //read_temp();


}
