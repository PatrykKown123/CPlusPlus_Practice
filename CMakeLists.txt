cmake_minimum_required(VERSION 3.29)
project(finalExam__PROG24310_kownacki)

set(CMAKE_CXX_STANDARD 20)

add_executable(finalExam__PROG24310_kownacki main.cpp
        Logic/Car.cpp
        Logic/Car.h
        Logic/ICECar.h
        Logic/ICECar.cpp
        Logic/ElectricCar.h
        Logic/ElectricCar.cpp)
