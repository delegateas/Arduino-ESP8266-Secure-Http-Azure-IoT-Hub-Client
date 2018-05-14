#include "SR04Sensor.h"
#define echoPin D7 // Echo Pin
#define trigPin D6 // Trigger Pin

void SR04Sensor::initialise(){
  if (initialised) { return; } 
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  initialised = true;
}

void SR04Sensor::measure(){
  int retryCount = 0;
  initialise();
  
  do {  
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    long duration = pulseIn(echoPin, HIGH);
    //Calculate the distance (in cm) based on the speed of sound.
    long distance = duration/58.2;
    Serial.println(distance);
    temperature = 0;
    humidity = 0;
    if (distance<150)
    {
    
      temperature = distance; 
    
    }
    delay(25);
  } while ((isnan(temperature) || isnan(humidity)) && ++retryCount < 20);
}

