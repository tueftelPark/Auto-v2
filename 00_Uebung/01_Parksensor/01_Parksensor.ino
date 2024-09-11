
/* Befehle:
pinMode(PIN, OUTPUT oder INPUT); <- definiert den PIN(wo ist das Objekt angeschlossen), PIN mit der Zahl auf dem SensorKit ersetzen (ohne D), INPUT(Sensor/Signaleingang) OUTPUT(Aktor/Signalausgang) 
digitalWrite (PIN, HIGH oder LOW); <- schaltet etwas EIN (HIGH) oder AUS (LOW) - PIN mit der Zahl auf dem SensorKit ersetzen (ohne D), dann HIGH oder LOW
delay(ZEIT); <- macht eine Pause mit der ZEIT in Millisekunden
tone(Buzzer,XXXX); <- Spielt mit dem Buzzer einen Ton ab. XXXX mit einer Zahl ersetzen
noTone(Buzzer); //Buzzer spielt keinen Ton mehr ab
*/

// Pin für den Trig
int SENDEN = A1;

// Pin für das Echo
int ECHO = A2;

// Pin für den Buzzer
//TODO: PIN für den Buzzer eingeben - wo hast du den Buzzer eingesteckt?
int Buzzer = XX; 

// Variable für die Speicherung der Entfernung
long Entfernung = 0;



void setup() 
{
  pinMode(SENDEN, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(Buzzer, OUTPUT);
  // Seriellen Monitor starten
  Serial.begin(9600);
}

void loop() 
{
  // Sender kurz ausschalten um Störungen des Signal zu vermeiden
  digitalWrite(SENDEN, LOW);
  delay(5);

  // Signal für 10 Micrsekunden senden, danach wieder ausschalten
  digitalWrite(SENDEN, HIGH);
  delayMicroseconds(10);
  digitalWrite(SENDEN, LOW);

  // pulseIn -> Zeit messen, bis das Signal zurückkommt
  long Zeit = pulseIn(ECHO, HIGH);

  // Entfernung in cm berechnen
  // Zeit/2 -> nur eine Strecke
  Entfernung = (Zeit / 2) * 0.03432;


  // TODO: Ändere die Entfernung (XXX) um deinen Parksensor anzupasen
  if (Entfernung < XXX) 
  {
    // Messdaten anzeigen
    Serial.print("Entfernung in cm: ");
    Serial.println(Entfernung);
    // TODO: Ändere die Zahl hinter Buzzer,XXXX und schaue was passiert (Starte mal mit 100)
    tone(Buzzer,XXXX);

  }
    // TODO: Ändere die Entfernung (XXX) um deinen Parksensor anzupasen
  else if (Entfernung > XXXX) {
  // Messdaten anzeigen
    Serial.print("Entfernung in cm: ");
    Serial.println(Entfernung);
    // TODO: Ändere die Zahl hinter Buzzer,XXXX und schaue was passiert
    tone(Buzzer,XXXX); 
    delay(XXXX); //Buzzer macht eine Pause haltet aber den Ton von oben
    noTone(Buzzer); //Buzzer spielt keinen Ton mehr ab
  }
//TODO: Füge hier weitere else if hinzu, um weitere Distanzen zu signalisieren mit einem anderen Ton
//kopiere dazu das komplette else if von oben. Achtung mit Klammern! {}




}
