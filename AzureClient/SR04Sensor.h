#ifndef SR04Sensor_h
#define SR04Sensor_h

#include "Sensor.h"
#include "Device.h"

// Ultra sonic sensor
class SR04Sensor : public Sensor {  
  public:
    SR04Sensor(Device& device) {
      
    };
    void measure();

  private:
    void initialise();    
};

#endif
