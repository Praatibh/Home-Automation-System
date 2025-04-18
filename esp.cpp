int motionPin = 2; // Pin connected to motion sensor
int lightPin = 3; // Pin connected to relay
controlling light
void setup() {
pinMode(motionPin, INPUT);
pinMode(lightPin, OUTPUT);
}
void loop() {
if (digitalRead(motionPin) == HIGH) {
digitalWrite(lightPin, HIGH); // Turn light ON
} else {
digitalWrite(lightPin, LOW); // Turn light OFF
5
}
}
