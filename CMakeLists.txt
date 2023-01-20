cmake_minimum_required(VERSION 3.24)
project(primes)

set(CMAKE_CXX_STANDARD 23)

add_executable(primes src/main.cpp include/trial_division.h src/trial_division.cpp)
