int pinsCount=5;                        // declaring the integer variable pinsCount
int pins[] = {9,10,11,12,13};          // declaring the array pins[]

void setup() {
  // put your setup code here, to run once:
 for (int i=0; i<pinsCount; i=i+1){    // counting the variable i from 0 to 4
    pinMode(pins[i], OUTPUT);            // initialising the pin at index i of the array of pins as OUTPUT
  }
}

void loop() {
  // put your main code here, to run repeatedly:
 for (int i=0; i<pinsCount; i=i+1){    // chasing right
    digitalWrite(pins[i], HIGH);         // switching the LED at index i on
    delay(100);                          // stopping the program for 100 milliseconds
    digitalWrite(pins[i], LOW);          // switching the LED at index i off
  }
  for (int i=pinsCount-1; i>0; i=i-1){   // chasing left (except the outer leds)
    digitalWrite(pins[i], HIGH);         // switching the LED at index i on
    delay(100);                          // stopping the program for 100 milliseconds
    digitalWrite(pins[i], LOW);          // switching the LED at index i off
  }
}
