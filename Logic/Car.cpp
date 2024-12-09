//
// Created by shali on 2024-12-08.
//

#include "Car.h"

namespace Logic {
    // <--- Constructor for Car class -->
    Car::Car(std::string plateNumber, std::string make, float efficiency) {
        this->plateNumber = plateNumber;
        this->make = make;
        this->efficiency = efficiency;
    }
    // <-- Implemented setter methods of Car class -->
    std::string Car::getPlateNumber() const {
        return this->plateNumber;
    }
    std::string Car::getMake() const {
        return this->make;
    }
    float Car::getEfficiency() const {
        return this->efficiency;
    }
} // Logic
