const int pirEntry = 2;
const int pirExit = 3;
const int ledEntry = 5;
const int ledExit = 4;
const int buzzer = 6;

void setup() {
  pinMode(pirEntry, INPUT);
  pinMode(pirExit, INPUT);
  pinMode(ledEntry, OUTPUT);
  pinMode(ledExit, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int entryState = digitalRead(pirEntry);
  int exitState = digitalRead(pirExit);

  if (entryState == HIGH) {
    digitalWrite(ledEntry, HIGH);
    digitalWrite(buzzer, HIGH);
    Serial.println("Entry Detected");
    delay(1000);
    digitalWrite(ledEntry, LOW);
    digitalWrite(buzzer, LOW);
  }

  if (exitState == HIGH) {
    digitalWrite(ledExit, HIGH);
    digitalWrite(buzzer, HIGH);
    Serial.println("Exit Detected");
    delay(1000);
    digitalWrite(ledExit, LOW);
    digitalWrite(buzzer, LOW);
  }
}
