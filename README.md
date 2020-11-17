<h1>Arduino LCD-Temperaturmessung</h1>

1.  **Verbinde das LCD mit ne Arduino Nano**
  - VSS und VDD werden richtig angeschlossen und VE wird an VDD geschlossen für maximalen Kontrast
  - LED + und – werden auch an VDD und VSS angeschlossen
  - Register Select wird am Nano Pin D7 angeschlossen
  - Enable wird am Pin D9 angeschlossen
  - Die Datenleitungen 4-7 werden an den Pins D2-D5 angeschlossen
  


2.	**Die ADC Messung erfolgt mit diesem Spannungsteiler**
  - Der Abgriffspunkt wird mit dem A0 Pin verbunden
  - Je höher die Temperatur wird umso höher wird die Spannung beim Abgriff
  - Formeln: 
    1.  BETA = 3974.0 
    2.  ROOM_TEMP = 298.15
    3.  Rntc = 1000*(5/(analogRead(A0)*0.004882813)-1)
    4.  Temp = (BETA*ROOM_TEMP)/(BETA+(ROOM_TEMP*log(Rntc/10000)))-273.15
  - R=1000kOhm

