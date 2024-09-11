// Pin für den Trig
int SENDEN = A1;

// Pin für das Echo
int ECHO = A2;

// Pin für den Buzzer
int Buzzer = 5; 

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
  //delay(100);

  // nur Entfernungen < 100 anzeigen
  if (Entfernung < 4) 
  {
    // Messdaten anzeigen
    Serial.print("Entfernung in cm: ");
    Serial.println(Entfernung);
    tone(Buzzer,1500);

  }
  else if (Entfernung < 4) {
  // Messdaten anzeigen
    Serial.print("Entfernung in cm: ");
    Serial.println(Entfernung);
    tone(Buzzer,1000);
    delay(100);
    noTone(Buzzer);
  }

  else if (Entfernung < 7) {
  // Messdaten anzeigen
    Serial.print("Entfernung in cm: ");
    Serial.println(Entfernung);
  // Ton abspielen
    tone(Buzzer,600);
    delay(200);
    noTone(Buzzer);
  }

  else if (Entfernung < 15) {
  // Messdaten anzeigen
    Serial.print("Entfernung in cm: ");
    Serial.println(Entfernung);
    tone(Buzzer,300);
    delay(300);
    noTone(Buzzer);
  }
  else if (Entfernung > 10) {
  // Messdaten anzeigen
    Serial.print("Entfernung in cm: ");
    Serial.println(Entfernung);
    delay(100);
    noTone(Buzzer);
  }
}
