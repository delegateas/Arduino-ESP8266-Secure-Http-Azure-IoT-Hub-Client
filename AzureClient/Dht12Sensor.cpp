#include "Dht12Sensor.h"
   
void Dht12Sensor::initialise(){
  if (initialised) { return; } 
 
  initialised = true;
}

void Dht12Sensor::measure(){
  int retryCount = 0;
  initialise();
  
  do {  
    if (dht.get()==0)
    {
    
      temperature = dht.cTemp; 
      humidity = dht.humidity;
    }
    delay(100);
  } while ((isnan(temperature) || isnan(humidity)) && ++retryCount < 20);
}

