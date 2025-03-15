cmake_minimum_required(VERSION 3.10)
project(HelloTest)

# Locate GTest package
find_package(GTest REQUIRED)

# Set C++ standard to C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add executable for your main program
add_executable(test_sensor_subscriber test_sensor_subscriber.cpp)

# Link Google Test framework to the test executable
target_link_libraries(main GTest::GTest GTest::Main)