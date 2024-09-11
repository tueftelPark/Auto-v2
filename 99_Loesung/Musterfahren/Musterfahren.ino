
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


void GeradeFahren() {
  digitalWrite(LinkerMotorVorwaerts, HIGH);
  digitalWrite(LinkerMotorRueckwaerts, LOW);
  digitalWrite(RechterMotorVowaerts, HIGH);
  digitalWrite(RechterMotorRueckwaerts, LOW);
}


void LinksFahren() {
  digitalWrite(LinkerMotorVorwaerts, LOW);
  digitalWrite(LinkerMotorRueckwaerts, HIGH);
  digitalWrite(RechterMotorVowaerts, HIGH);
  digitalWrite(RechterMotorRueckwaerts, LOW);
}


void RechtsFahren() {
  digitalWrite(LinkerMotorVorwaerts, HIGH);
  digitalWrite(LinkerMotorRueckwaerts, LOW);
  digitalWrite(RechterMotorVowaerts, LOW);
  digitalWrite(RechterMotorRueckwaerts, HIGH);
}


void StoppFahren() {
  digitalWrite(LinkerMotorVorwaerts, LOW);
  digitalWrite(LinkerMotorRueckwaerts, LOW);
  digitalWrite(RechterMotorVowaerts, LOW);
  digitalWrite(RechterMotorRueckwaerts, LOW);
}

void loop() {
  GeradeFahren();
  delay(1000);
  StoppFahren();
  delay(1000);
  RechtsFahren();
  delay(200);
  GeradeFahren();
  delay(750);
  LinksFahren();
  delay(500);
  GeradeFahren();
  delay(1500);
  StoppFahren();
  delay(1000);

}
