
const int SENSOR_PIN = A0;              // Analog pin for sound sensor
const int LED_PINS[] = {2, 3, 4, 5, 6, 7, 8, 9}; // Digital pins for 8 LEDs
const int NUM_LEDS = 8;                 // Number of LEDs

void setup() {
  // Initialize LED pins as OUTPUT
  for (int i = 0; i < NUM_LEDS; i++) {
    pinMode(LED_PINS[i], OUTPUT);
  }
    // Initial animation sequence
  runStartupAnimation();
}

void loop() {
  // Read raw value from the sound sensor
  int rawValue = analogRead(SENSOR_PIN);
  
  // Map sensor input (0-500 range) to the number of LEDs (0-8)
  // Feel free to adjust 500 based on your environment's noise level
  int ledLevel = map(rawValue, 0, 500, 0, NUM_LEDS); 
  
  // Ensure the value stays within safe bounds
  ledLevel = constrain(ledLevel, 0, NUM_LEDS);

  // Update LED display
  for (int i = 0; i < NUM_LEDS; i++) {
    if (i < ledLevel) {
      digitalWrite(LED_PINS[i], HIGH);
    } else {
      digitalWrite(LED_PINS[i], LOW);
    }
  }
  
  delay(10); // Small delay for stability
}

// --- Helper Functions ---

void runStartupAnimation() {
  // Animation: All LEDs blink on then off
  for (int i = 0; i < NUM_LEDS; i++) {
    digitalWrite(LED_PINS[i], HIGH);
    delay(80);
  }
  delay(200);
  for (int i = NUM_LEDS - 1; i >= 0; i--) {
    digitalWrite(LED_PINS[i], LOW);
    delay(80);
  }
}