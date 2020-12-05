// Using 10 LEDs, Starting from pin 03 to pin 12
// Using DO WHILE...

int i = 3;
int t = 100;

void setup() {
  do {
    pinMode(i, OUTPUT);
    i++;
    } while (i<13);
}

void loop() {
  i = 3;
  do {
    digitalWrite(i, HIGH);
    delay(t);
    digitalWrite(i, LOW);
    i++;
  } while(i<13);
  
  i = 11;
  do {
    digitalWrite(i, HIGH);
    delay(t);
    digitalWrite(i, LOW);
    i--;
  } while(i>3);
}
