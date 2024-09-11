
//Pins für den MotorDriver 
const uint8_t LinkerMotorVorwaerts = 6;     //In2
const uint8_t LinkerMotorRueckwaerts = 7;   //In1
const uint8_t RechterMotorVowaerts = 10;    //In4
const uint8_t RechterMotorRueckwaerts = 9;  //In3

void setup() {
  //Init MotorDriver
  pinMode(LinkerMotorVorwaerts, OUTPUT);
  pinMode(LinkerMotorRueckwaerts, OUTPUT);
  pinMode(RechterMotorVowaerts, OUTPUT);
  pinMode(RechterMotorRueckwaerts, OUTPUT);

  //Motoren zum Start AUS
  digitalWrite(LinkerMotorVorwaerts, LOW);
  digitalWrite(LinkerMotorRueckwaerts, LOW);
  digitalWrite(RechterMotorVowaerts, LOW);
  digitalWrite(RechterMotorRueckwaerts, LOW);
}

//TODO: Ändere das XXX in HIGH oder LOW. HIGH = Motor an; LOW = Motor aus
// Überlege jetzt welche Motoren müssen eingeschaltet sein um gerade aus zu fahren
void GeradeFahren() {
  digitalWrite(LinkerMotorVorwaerts, XXX);
  digitalWrite(LinkerMotorRueckwaerts, XXX);
  digitalWrite(RechterMotorVowaerts, XXX);
  digitalWrite(RechterMotorRueckwaerts, XXX);
}

//TODO: Überlege jetzt welche Motoren müssen eingeschaltet sein um nach links zu fahren
void LinksFahren() {
 


}

//TODO: Überlege jetzt welche Motoren müssen eingeschaltet sein um nach rechts zu fahren
void RechtsFahren() {
  


}

//TODO: Überlege jetzt welche Motoren müssen eingeschaltet sein um nicht zu fahren
void StoppFahren() {

  

}

void loop() {
  //TODO: Fahre dein eigenes Muster ab. 
  //Teste, versuche verschiedene Sachen und lasse das Fahrzeug auf dem Boden herum fahren
  GeradeFahren(); 
  delay(1000);
  StoppFahren();
  delay(1000);


}
