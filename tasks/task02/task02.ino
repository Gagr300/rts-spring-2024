#include <TaskManagerIO.h>

const int PIN_NUMBER = 5;

unsigned long* prevMicros  = new unsigned long[PIN_NUMBER];
unsigned long intervals[PIN_NUMBER] = {10000, 1000, 500, 100, 50};
int LED_PINs[PIN_NUMBER] = {3, 6, 9, 10, 11};

void setup() {
  for (int i = 0; i < PIN_NUMBER; ++i) {
    prevMicros [i] = 0;
    pinMode(LED_PINs[i], OUTPUT);
  }
  
  taskid_t taskId0 = taskManager.scheduleFixedRate(intervals[0], [] {
    if (ledStates[0] == LOW) {
      ledStates[0] = HIGH;
    }
    else {
      ledStates[0] = LOW;
    }

    digitalWrite(LED_PINs[0], ledStates[0]);
  }, TIME_MICROS);

  taskid_t taskId1 = taskManager.scheduleFixedRate(intervals[1], [] {
    if (ledStates[1] == LOW) {
      ledStates[1] = HIGH;
    }
    else {
      ledStates[1] = LOW;
    }

    digitalWrite(LED_PINs[1], ledStates[1]);
  }, TIME_MICROS);

  taskid_t taskId2 = taskManager.scheduleFixedRate(intervals[2], [] {
    if (ledStates[2] == LOW) {
      ledStates[2] = HIGH;
    }
    else {
      ledStates[2] = LOW;
    }

    digitalWrite(LED_PINs[2], ledStates[2]);
  }, TIME_MICROS);

  taskid_t taskId3 = taskManager.scheduleFixedRate(intervals[3], [] {
    if (ledStates[3] == LOW) {
      ledStates[3] = HIGH;
    }
    else {
      ledStates[3] = LOW;
    }

    digitalWrite(LED_PINs[3], ledStates[3]);
  }, TIME_MICROS);

  taskid_t taskId4 = taskManager.scheduleFixedRate(intervals[4], [] {
    if (ledStates[4] == LOW) {
      ledStates[4] = HIGH;
    }
    else {
      ledStates[4] = LOW;
    }

    digitalWrite(LED_PINs[4], ledStates[4]);
  }, TIME_MICROS);
}

void loop() {
  taskManager.runLoop();

}
