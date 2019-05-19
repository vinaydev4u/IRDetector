// IR Obstacle Collision Detection Module
// Henry's Bench

int LED = 13; // Use the onboard Uno LED
int Buzzer = 12; // Use the onboard Uno LED
int isObstaclePin = 7;  // This is our input pin
int isObstacle = HIGH;  // HIGH MEANS NO OBSTACLE

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(isObstaclePin, INPUT);
  Serial.begin(9600);

}

void loop() {

  long duration, distance;
  digitalWrite(isObstaclePin, LOW);
  delayMicroseconds(2);
  digitalWrite(isObstaclePin, HIGH);
  delayMicroseconds(10);
  digitalWrite(isObstaclePin, LOW);

  if (distance <= 50) {
    Serial.println("distance <= 50");
  }
  else {
    Serial.println("distance > 50");
  }



  isObstacle = digitalRead(isObstaclePin);
  if (isObstacle == LOW)
  {
    Serial.println("OBSTACLE!!, OBSTACLE!!");
    digitalWrite(LED, HIGH);
    digitalWrite(Buzzer, HIGH);


  }
  else
  {
    Serial.println("clear");
    digitalWrite(LED, LOW);
    digitalWrite(Buzzer, LOW);
  }
  delay(200);
}
