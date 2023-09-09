int seq[5][4] = {{HIGH, HIGH, LOW, LOW}, {LOW, HIGH, HIGH, LOW}, {LOW, LOW, HIGH, HIGH}, {HIGH, LOW, LOW, HIGH}, {LOW, LOW, LOW, LOW}};

#define delay1 1

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

// the loop function runs over and over again forever
void loop() {
  digitalWrite(2, HIGH);
  digitalWrite(7, HIGH);
  delay (delay1);
  digitalWrite(2, LOW);
  digitalWrite(7, LOW);
  
  
  digitalWrite(3, HIGH);
  digitalWrite(6, HIGH);
  delay (delay1);
  digitalWrite(3, LOW);
  digitalWrite(6, LOW);
  
  
  digitalWrite(4, HIGH);
  digitalWrite(9, HIGH);
  delay (delay1);
  digitalWrite(4, LOW);
  digitalWrite(9, LOW);
  
  
  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);
  delay (delay1);
  digitalWrite(5, LOW);
  digitalWrite(8, LOW); 
  
}