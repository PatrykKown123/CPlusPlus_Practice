//
// Created by shali on 2024-12-08.
//

#include "ElectricCar.h"

namespace Logic {
    // <--- Constructor for ElectricCar - as well invoking base class constructor -->
    ElectricCar::ElectricCar(float energyPerKm, float batteryCapacity, std::string plateNumber, std::string make, float efficiency):
    Car(plateNumber, make, efficiency){
        this->setEnergyPerKm(energyPerKm);
        this->setBatteryCapacity(batteryCapacity);
    }
    // <-- Mutator methods implementations for ElectricCar class -->
    void ElectricCar::setEnergyPerKm(float energyPerKm) {
        if(energyPerKm>0)
            this->energyPerKm = energyPerKm;
        throw std::invalid_argument("Energy per KM cannot be less than zero");
    }
    void ElectricCar::setBatteryCapacity(float batteryCapacity) {
        if(batteryCapacity>0)
            this->batteryCapacity = batteryCapacity;
        throw std::invalid_argument("Battery capacity cannot be less than zero");
    }
    // <-- Accessor methods implementations for ElectricCar class -->
    float ElectricCar::getEnergyPerKm() const{
        return this->energyPerKm;
    }
    float ElectricCar::getBatteryCapacity() const {
        return this->batteryCapacity;
    }
} // Logic
