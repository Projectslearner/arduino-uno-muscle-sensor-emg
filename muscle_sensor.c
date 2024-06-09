/*
    Project name : Muscle sensor
    Modified Date: 08-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-muscle-sensor-emg
*/

#define EMG_PIN A0 // Analog pin where the EMG sensor is connected

void setup() 
{
  Serial.begin(9600); // Initialize serial communication
  pinMode(EMG_PIN, INPUT); // Set EMG pin as input
}

void loop() {
  // Read EMG sensor value
  int emgValue = analogRead(EMG_PIN);

  // Print EMG sensor value to serial monitor
  Serial.print("EMG Sensor Value: ");
  Serial.println(emgValue);

  delay(100); // Delay for stability
}

