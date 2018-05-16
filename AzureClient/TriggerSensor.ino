#include "TriggerSensor.h"
#define inputPin D3 // Echo Pin


void TriggerSensor::initialise(){
  if (initialised) { return; } 
  pinMode(inputPin, INPUT);      // set pin as input
  initialised = true;
}

void TriggerSensor::measure(){
  int retryCount = 0;
  initialise();
  
 
    int val = digitalRead(inputPin);     // read the input pin
    
    temperature = 0;
    humidity = 0;
    if (val==1)
    {   
      
      temperature = 70;     
    }
    Serial.println(temperature);
}

