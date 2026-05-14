int ledpin = 2;

void setup() {
  // led as output
  pinMode(ledpin, OUTPUT);

  // Serial must be capitalized
  Serial.begin(115200);
}

void loop() {
  Serial.println("The light bulb is ON"); // Combined for better readability
  digitalWrite(ledpin, HIGH);
  delay(500);

  Serial.println("The light bulb is OFF");
  digitalWrite(ledpin, LOW);
  delay(500);
}