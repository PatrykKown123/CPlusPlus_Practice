//
// Created by shali on 2024-12-08.
//

#include "ElectricCar.h"

namespace Logic {
    ElectricCar::ElectricCar(float energyPerKm, float batteryCapacity, std::string plateNumber, std::string make, float efficiency):
    Car(plateNumber, make, efficiency){
        this->energyPerKm = energyPerKm;
        this->batteryCapacity = batteryCapacity;
    }
} // Logic
