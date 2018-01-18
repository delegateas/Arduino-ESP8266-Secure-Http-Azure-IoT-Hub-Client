#ifndef Dht12Sensor_h
#define Dht12Sensor_h

#include "Sensor.h"
#include "WEMOS_DHT12.h"
#include "Device.h"


class Dht12Sensor : public Sensor {  
  public:
    Dht12Sensor(Device& device) {
      device.sensorMode = DhtShieldMode;
    };
    void measure();

  private:
    void initialise();    
    DHT12 dht;
};

#endif
