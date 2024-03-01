const int PIN_NUMBER = 5;
const int LED_PINs[PIN_NUMBER] = { 3, 6, 9, 10, 11 };
const unsigned long BLINK_INTERVALs[PIN_NUMBER] = {10000, 1000, 500, 100, 50};   

int* ledStates =  new int[PIN_NUMBER];
unsigned long* prevMicros = new unsigned long[PIN_NUMBER];

void setup() {
  for (int i = 0; i < PIN_NUMBER; i++) {
    prevMicros[i] = 0;
    ledStates[i] = LOW;
    pinMode(LED_PINs[i], OUTPUT);
  }

}

void loop() {
  unsigned long currentMicros = micros();

  for (int i = 0; i < PIN_NUMBER; i++) {
    if (currentMicros - prevMicros[i] >= BLINK_INTERVALs[i]) {
      prevMicros[i] = currentMicros;

      if (ledStates[i] == LOW) {
          ledStates[i] = HIGH;
      }
      else {
          ledStates[i] = LOW;
      }

      digitalWrite(LED_PINs[i], ledStates[i]);
    }
  }

}
