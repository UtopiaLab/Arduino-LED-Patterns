// Using 10 LEDs, Starting from pin 03 to pin 12
// Using WHILE...

int i = 3;
int t = 100;

void setup() {
  while(i<13) {
    pinMode(i, OUTPUT);
    i++;
  }
}

void loop() {
  i = 3;
  while(i<13) {
    digitalWrite(i, HIGH);
    delay(t);
    digitalWrite(i, LOW);
    i++;
  }
  
  i = 11;
  while(i>3) {
    digitalWrite(i, HIGH);
    delay(t);
    digitalWrite(i, LOW);
    i--;
  }
}
