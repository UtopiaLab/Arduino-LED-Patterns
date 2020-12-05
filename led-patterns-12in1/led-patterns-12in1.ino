// Using 10 LEDs, Starting from pin 03 to pin 12
// Using FOR...

int i = 3; // initial pin number
int t = 100; // delay time
int rounds = 5; // rounds for each pattern

void setup() {
  for(int i = 3; i<13; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for(int i = 5; i>0; i--) {
    krSingle();
  }
  for(int i = 5; i>0; i--) {
    two2Left();
  }
  for(int i = 5; i>0; i--) {
    two2Right();
  }
  for(int i = 5; i>0; i--) {
    krDouble();
  }
  for(int i = 5; i>0; i--) {
    krDouble3();
  }
  for(int i = 5; i>0; i--) {
    krSingleSnap();
  }
  for(int i = 5; i>0; i--) {
    krSingleNegative();
  }
  for(int i = 5; i>0; i--) {
    wipeLeft();
  }
  for(int i = 5; i>0; i--) {
    wipeRight();
  }
  for(int i = 5; i>0; i--) {
    wipeBoth();
  }
  for(int i = 5; i>0; i--) {
    VIP();
  }
  for(int i = 5; i>0; i--) {
    blinker();
  }
}

void krSingle() {
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

void two2Left() {
  for(int i = 3; i<8; i++) {
    digitalWrite(i, HIGH);
    digitalWrite(5+i, HIGH);
    delay(t);
    digitalWrite(i, LOW);
    digitalWrite(5+i, LOW);
  }
}

void two2Right() {
  for(int i = 12; i>7; i--) {
    digitalWrite(i, HIGH);
    digitalWrite(i-5, HIGH);
    delay(t);
    digitalWrite(i, LOW);
    digitalWrite(i-5, LOW);
  }
}

void krDouble() {
  for(int i = 3; i<8; i++) {
    digitalWrite(i, HIGH);
    digitalWrite(15-i, HIGH);
    delay(t);
    digitalWrite(i, LOW);
    digitalWrite(15-i, LOW);
  }
   for(int i = 6; i>3; i--) {
    digitalWrite(i, HIGH);
    digitalWrite(15-i, HIGH);
    delay(t);
    digitalWrite(i, LOW);
    digitalWrite(15-i, LOW);
  }
}

void krDouble3() {
  for(int i = 2; i<11; i++) {
    digitalWrite(i, HIGH);
    digitalWrite(i+1, HIGH);
    digitalWrite(i+2, HIGH);
    delay(t);
    digitalWrite(i, LOW);
    digitalWrite(i+1, LOW);
    digitalWrite(i+2, LOW);
  }
   for(int i = 11; i>3; i--) {
    digitalWrite(i, HIGH);
    digitalWrite(i+1, HIGH);
    digitalWrite(i+2, HIGH);
    delay(t);
    digitalWrite(i, LOW);
    digitalWrite(i+1, LOW);
    digitalWrite(i+2, LOW);
  }
}

void krSingleSnap() {
  for(int i = 3; i<13; i++) {
    digitalWrite(i, HIGH);
    delay(t/3);
    digitalWrite(i, LOW);
    delay(t/3);
    digitalWrite(i, HIGH);
    delay(t/3);
    digitalWrite(i, LOW);
  }
   for(int i = 11; i>3; i--) {
    digitalWrite(i, HIGH);
    delay(t/3);
    digitalWrite(i, LOW);
    delay(t/3);
    digitalWrite(i, HIGH);
    delay(t/3);
    digitalWrite(i, LOW);
  }
}

void krSingleNegative() {
  for(int i = 3; i<13; i++) {
    digitalWrite(i, LOW);
    delay(t);
    digitalWrite(i, HIGH);
  }
   for(int i = 11; i>3; i--) {
    digitalWrite(i, LOW);
    delay(t);
    digitalWrite(i, HIGH);
  }
}

void wipeBoth() {
  for(int i = 3; i<13; i++) {
    digitalWrite(i, HIGH);
    delay(t/2);
  }
   for(int i = 3; i<13; i++) {
    digitalWrite(i, LOW);
    delay(t/2);
  }
  for(int i = 12; i>2; i--) {
    digitalWrite(i, HIGH);
    delay(t/2);
  }
   for(int i = 12; i>2; i--) {
    digitalWrite(i, LOW);
    delay(t/2);
  }
}

void wipeLeft() {
  for(int i = 3; i<13; i++) {
    digitalWrite(i, HIGH);
    delay(t/2);
  }
   for(int i = 3; i<13; i++) {
    digitalWrite(i, LOW);
    delay(t/2);
  }
}

void wipeRight() {
    for(int i = 12; i>2; i--) {
    digitalWrite(i, HIGH);
    delay(t/2);
  }
   for(int i = 12; i>2; i--) {
    digitalWrite(i, LOW);
    delay(t/2);
  }
}

void VIP() {
  for(int i = 3; i<8; i++) {
    digitalWrite(i, HIGH); 
  }
  delay(t);
  for(int i = 3; i<8; i++) {
    digitalWrite(i, LOW);
  }
  delay(t);
  for(int i = 3; i<8; i++) {
    digitalWrite(i, HIGH); 
  }
  delay(t);
  for(int i = 3; i<8; i++) {
    digitalWrite(i, LOW);
  }
  delay(t);
  for(int i = 3; i<8; i++) {
    digitalWrite(i, HIGH); 
  }
  delay(t);
  for(int i = 3; i<8; i++) {
    digitalWrite(i, LOW);
  }
  delay(t);

  for(int i = 8; i<13; i++) {
    digitalWrite(i, HIGH); 
  }
  delay(t);
  for(int i = 8; i<13; i++) {
    digitalWrite(i, LOW); 
  }
  delay(t);
  for(int i = 8; i<13; i++) {
    digitalWrite(i, HIGH); 
  }
  delay(t);
  for(int i = 8; i<13; i++) {
    digitalWrite(i, LOW); 
  }
  delay(t);
  for(int i = 8; i<13; i++) {
    digitalWrite(i, HIGH); 
  }
  delay(t);
  for(int i = 8; i<13; i++) {
    digitalWrite(i, LOW); 
  }
  delay(t);
}

void blinker() {
  for(int i = 3; i<13; i++) {
      digitalWrite(i, HIGH);
  }
  delay(t*2);
  for(int i = 3; i<13; i++) {
      digitalWrite(i, LOW);
  }
  delay(t*2);
}
