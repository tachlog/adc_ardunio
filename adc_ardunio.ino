// Define the input and output pins
int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED

// Variable to store the value coming from the sensor
int sensorValue = 0;  

// Setup function, runs once when the program starts
void setup() {
  // Declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
}

// Loop function, runs repeatedly as long as the program is running
void loop() {
  // Read the value from the sensor:
  sensorValue = analogRead(sensorPin);

  // Turn the LED on:
  digitalWrite(ledPin, HIGH);

  // Stop the program for the duration specified by sensorValue:
  delay(sensorValue);

  // Turn the LED off:
  digitalWrite(ledPin, LOW);

  // Stop the program for the duration specified by sensorValue:
  delay(sensorValue);
}
