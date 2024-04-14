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

 if (currentMicros - prevMicros[i] >= BLINK_INTERVALs[0]) {
    prevMicros[0] = currentMicros;

    if (ledStates[0] == LOW) {
        ledStates[0] = HIGH;
    }
    else {
        ledStates[0] = LOW;
    }

    digitalWrite(LED_PINs[0], ledStates[0]);
  }
  
  if (currentMicros - prevMicros[1] >= BLINK_INTERVALs[1]) {
    prevMicros[1] = currentMicros;

    if (ledStates[1] == LOW) {
        ledStates[1] = HIGH;
    }
    else {
        ledStates[1] = LOW;
    }

    digitalWrite(LED_PINs[1], ledStates[1]);
  }
  
  if (currentMicros - prevMicros[2] >= BLINK_INTERVALs[2]) {
    prevMicros[2] = currentMicros;

    if (ledStates[2] == LOW) {
        ledStates[2] = HIGH;
    }
    else {
        ledStates[2] = LOW;
    }

    digitalWrite(LED_PINs[2], ledStates[2]);
  }
  
  if (currentMicros - prevMicros[3] >= BLINK_INTERVALs[3]) {
    prevMicros[3] = currentMicros;

    if (ledStates[3] == LOW) {
        ledStates[3] = HIGH;
    }
    else {
        ledStates[3] = LOW;
    }

    digitalWrite(LED_PINs[3], ledStates[3]);
  }
  
  if (currentMicros - prevMicros[4] >= BLINK_INTERVALs[4]) {
    prevMicros[4] = currentMicros;

    if (ledStates[4] == LOW) {
        ledStates[4] = HIGH;
    }
    else {
        ledStates[4] = LOW;
    }

    digitalWrite(LED_PINs[4], ledStates[4]);
  }
}
