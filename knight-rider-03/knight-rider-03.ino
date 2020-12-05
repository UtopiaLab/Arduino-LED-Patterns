// Using 10 LEDs, Starting from pin 03 to pin 12
// Using FOR...

int t = 100;

void setup() {
  for(int i = 3; i<13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for(int i = 3; i<13; i++) {
    digitalWrite(i, HIGH);
    delay(t);
    digitalWrite(i, LOW);
  }

  for(int i = 11; i>3; i--) {
    digitalWrite(i, HIGH);
    delay(t);
    digitalWrite(i, LOW);
  }
}
