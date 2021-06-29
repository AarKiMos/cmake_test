cmake_minimum_required(VERSION 3.10)

# Set project name
project(Test)

# Include directory
include_directories(./include)

#add executable
add_executable(Test src/test_main.cpp src/test.cpp)

