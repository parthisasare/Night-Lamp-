// Define pins
const int LDRPin = A0 ; // LDR connected to analog pin A0
const int LEDPin = 13; // LED connected to digital pin 13

// Define the threshold value for LDR
int threshold = 500; // Adjust this value based on your LDR readings

void setup() {
  // Initialize the LED pin as output
  pinMode(LEDPin, OUTPUT);

  // Initialize serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read the LDR value
  int LDRValue = analogRead(LDRPin);

  // Print the LDR value to the serial monitor for debugging
  Serial.println(LDRValue);

  // Check if the LDR value is above the threshold
  if (LDRValue > threshold) {
    // Turn on the LED
    digitalWrite(LEDPin, HIGH);
  } else {
    // Turn off the LED
    digitalWrite(LEDPin, LOW);
  }

  // Add a small delay for stability
  delay(100);
}
