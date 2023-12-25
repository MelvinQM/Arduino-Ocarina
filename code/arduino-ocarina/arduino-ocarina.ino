const int BUTTON_PIN = 3;
const int LED_PIN = 2;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  if(digitalRead(BUTTON_PIN) == LOW){
    delay(1000);
    digitalWrite(LED_PIN, HIGH);
    delay(1000);
  } else {
    digitalWrite(LED_PIN, LOW);
  }

  delay(50);
}
