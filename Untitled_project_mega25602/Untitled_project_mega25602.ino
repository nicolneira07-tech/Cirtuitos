int rojo = 10;
int amarillo = 9;
int verde = 8;

void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop() {
  digitalWrite(verde, HIGH);
  delay(6000);
  digitalWrite(verde, LOW);

  digitalWrite(amarillo, HIGH);
  delay(3000);
  digitalWrite(amarillo, LOW);

  digitalWrite(rojo, HIGH);
  delay(6000);
  digitalWrite(rojo, LOW);
}
