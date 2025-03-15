#include <iostream>
#include <string>
#include <memory>

class Subscriber {
public:
    Subscriber(bool& sensor) {
        // Assume there is a function to subscribe to the sensor
        sensor = false;
    }
};

class DeviceState {
private:
    bool isTemperatureSensorEnabled{false};
    int temperature;
    std::unique_ptr<Subscriber> subscriber;
public:
    void EnableMonitoring() {
        subscriber = std::make_unique<Subscriber>(isTemperatureSensorEnabled);
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

int main() {
    DeviceState device;
    device.EnableMonitoring();
    std::cout << "Temperature: " << device.GetTemperature() << std::endl;
    return 0;
}