Arduino LCD-Temperaturmessung

1)	Verbinde das LCD mit ne Arduino Nano

  a)	VSS und VDD werden richtig angeschlossen und VE wird an VDD geschlossen für maximalen Kontraset
  
  b)	LED + und – werden auch an VDD und VSS angeschlossen
  
  c)	Register Select wird am Nano Pin D7 angeschlossen
  
  d)	Enable wird am Pin D9 angeschlossen
  
  e)	Die Datenleitungen 4-7 werden an den Pins D2-D5 angeschlossen
  


![alt text](https://github.com/wrusl/arduino_lcd_temp/blob/master/16x2-LCD-Pinout.png)


2)	Die ADC Messung erfolgt mit diesem Spannungsteiler

  a)	Der Abgriffs Punkt wird mit dem A0 Pin verbunden
  
  b)	Je höher die Temperatur wird umso höher wird die Spannung beim Abgriff
  
  c)	Formeln: 
  
    i)	BETA = 3974.0
    
    ii)	ROOM_TEMP = 298.15
    
    iii)	Rntc = 1000*(5/(analogRead(A0)*0.004882813)-1)
    
    iv)	Temp = (BETA*ROOM_TEMP)/(BETA+(ROOM_TEMP*log(Rntc/10000)))-273.15
    

![alt text](https://github.com/wrusl/arduino_lcd_temp/blob/master/OjfnSxN18h7TjkffS5xJhDcOfJj2CTi1EGoDweNLQ5AvsGWBWdLWxhUtqO5IwLuvrZGv2HNfvHIMET8UY7cltmUzMXpKL7ZVA_4WqjVK.jpg)
