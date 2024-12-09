//
// Created by shali on 2024-12-08.
//

#include "ICECar.h"

namespace Logic {
    //<--- Constructor for ICECar - as well invoking base class constructor -->
    ICECar::ICECar(float fuelPerKm, float  tankCapacity, std::string plateNumber, std::string make, float efficiency)
    :Car(plateNumber, make, efficiency) {
        this->setFuelPerKm(fuelPerKm);
        this->setTankCapacity(tankCapacity);
    }
    //<--- Mutators for ICECar class --->
    void ICECar::setTankCapacity(float tankCapacity) {
        if(tankCapacity > 0)
            this->tankCapacity = tankCapacity;
        throw std::invalid_argument("Tank capacity must be greater than zero");
    }
    void ICECar::setFuelPerKm(float fuelPerKm) {
        if(fuelPerKm > 0)
            this->fuelPerKm = fuelPerKm;
        throw std::invalid_argument("Fuel power must be greater than zero");
    }
    //<--- Accessors for ICECar class --->
    float ICECar::getFuelPerKm() const{
        return this->fuelPerKm;
    }
    float ICECar::getTankCapacity() const {
        return this->tankCapacity;
    }
    //<--- Polymorphic functions --->
    float ICECar::range() {
        return (this->tankCapacity*this->getEfficiency())/this->fuelPerKm;
    }
} // Logic
