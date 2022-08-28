// Define Pin Numbers
const int triggerPin = 9;
const int echoPin = 10;
const int ledPin = 11;
float pulse_width, distance;






void setup() {
  // put your setup code here, to run once:
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  digitalWrite(triggerPin, LOW); // Sets the triggerPin Low or essentilly resets it. 
  delayMicroseconds(2); // Waits two seconds before going into the loop. 

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(triggerPin, HIGH); // TriggerPin High for 10 ms 
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);  // TriggerPin low to read the echo signal 
  pulse_width = pulseIn(echoPin, HIGH);
  distance = (pulse_width*0.0343)/2;
  distance = constrain(distance, 0, 400);
  
  float t = ((float) millis())/1000.0; // Current time 
  Serial.print("Time(s), ");
  Serial.print(t);
  Serial.print(" Distance = ");
  Serial.print(distance);
  Serial.print(" cm.\n");
  if (distance <= 10 or distance == 400) {
    digitalWrite(ledPin, HIGH);
        
  }
  else {
    digitalWrite(ledPin, LOW);
  }
  delay(500);
 
}
