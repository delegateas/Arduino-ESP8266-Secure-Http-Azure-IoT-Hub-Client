#ifndef TriggerSensor_h
#define TriggerSensor_h

#include "Sensor.h"
#include "Device.h"

// High/low trigger sensor
class TriggerSensor : public Sensor {  
  public:
    TriggerSensor(Device& device) {
      
    };
    void measure();

  private:
    void initialise();    
};

#endif
