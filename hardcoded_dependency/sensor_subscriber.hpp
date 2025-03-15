#include <iostream>
#include <string>
#include <memory>

class Subscriber {
public:
    explicit Subscriber(bool& sensor) : sensorRef(sensor) {
        // Assume there is a function to subscribe to the sensor
        sensorRef = true;
    }
private:
    bool& sensorRef;
};

class DeviceState {
private:
    bool isTemperatureSensorEnabled{false};
    int temperature{-999};
    Subscriber* subscriber{nullptr};
public:
    DeviceState() {
        EnableMonitoring();
    }

    ~DeviceState() {
        delete subscriber;
    }

    void EnableMonitoring() {
        if(!subscriber) {
            subscriber = new Subscriber(isTemperatureSensorEnabled);
        }
    }

    int GetTemperature() {
        if(isTemperatureSensorEnabled) {
            // Assume there is a function to get the temperature
            temperature = 25;
        }
        else {
            temperature = -1;
        }
        return temperature;
    }
};
