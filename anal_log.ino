void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int leitura =analogRead (A0);
  int valor = map (leitura, 0, 1023, 1000, 9900);
  tone (5, valor);
  delay (20);
  noTone (5);
  delay (20);
  Serial.println(valor);
  

}
