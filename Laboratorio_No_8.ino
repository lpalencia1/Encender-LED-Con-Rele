int RELE = 2;
int PinLDR = 5;

void setup() {
  Serial.begin(9600);
  pinMode(RELE, OUTPUT);
}

void loop() {
  int ValorLDR = analogRead(PinLDR);
  SensorLuz(RELE, ValorLDR);
}

void SensorLuz(int Rele, int LDR) {
  Serial.print("LDR = ");
  Serial.println(LDR);
  if (LDR > 500) {
    digitalWrite(Rele, HIGH);
    Serial.println("RELE Encendido");
  } else {
    digitalWrite(Rele, LOW);
  }
  delay(1000);
}