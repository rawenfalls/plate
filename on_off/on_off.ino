#define delay1 50000
int i = 1;
// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}
void on_off(int a) {
  if (a == 1) {
    digitalWrite(5, LOW);
    digitalWrite(8, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(7, HIGH);
  } else if (a == 2) {
    digitalWrite(2, LOW);
    digitalWrite(7, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
  } else if (a == 3) {
    digitalWrite(3, LOW);
    digitalWrite(6, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(9, HIGH);
  } else if (a == 4) {
    digitalWrite(4, LOW);
    digitalWrite(9, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(8, HIGH);
  }
}
void loop() {
  static uint32_t timer = micros();
  if (micros() - timer >= 1000) {
    on_off(i);
    i++;
    if (i > 4)i = 1;
    timer = micros();
  }
}
