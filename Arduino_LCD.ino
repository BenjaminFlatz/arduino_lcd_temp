/*
Benjamin Flatz

Arduino Pro Micro
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

int read_temp(){
  
  
  int temp = analogRead(A0);
  Serial.println(temp);
  return temp;


  
}

void loop(){
  
  lcd.print("hello, world!");
  read_temp();


}
