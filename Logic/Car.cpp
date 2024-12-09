//
// Created by shali on 2024-12-08.
//

#include "Car.h"

namespace Logic {
    Car::Car(std::string plateNumber, std::string make, float efficiency) {
        this->plateNumber = plateNumber;
        this->make = make;
        this->efficiency = efficiency;
    }
} // Logic
