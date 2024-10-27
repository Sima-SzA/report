#define key1 digitalRead(A0)
const int ledPins[] = {1, 2, 3, 4, 5, 6};

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < 6; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  pinMode(A0, INPUT);
  randomSeed(analogRead(0));
}

void loop() {
  for (int i = 0; i < 6; i++) {
    digitalWrite(ledPins[i], LOW);
  }
  if (key1 == 0) {
    int randomNumber = random(0, 6);
    digitalWrite(ledPins[randomNumber], HIGH);
    Serial.print("Random Number: ");
    Serial.println(randomNumber+1);
    delay(1000);
  }
}