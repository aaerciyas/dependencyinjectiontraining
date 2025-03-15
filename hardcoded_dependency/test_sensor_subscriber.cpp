#include <gtest/gtest.h>
#include "sensor_subscriber.hpp"

class DeviceStateTest : public ::testing::Test {
protected:
    DeviceState device;
};

TEST_F(DeviceStateTest, TemperatureSensorDisabled) {
    EXPECT_EQ(device.GetTemperature(), -1);
}

TEST_F(DeviceStateTest, TemperatureSensorEnabled) {
    device.EnableMonitoring();
    EXPECT_EQ(device.GetTemperature(), 25);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}