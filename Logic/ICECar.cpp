//
// Created by shali on 2024-12-08.
//

#include "ICECar.h"

namespace Logic {
    ICECar::ICECar(float fuelPerKm, float  tankCapacity, std::string plateNumber, std::string make, float efficiency)
    :Car(plateNumber, make, efficiency) {
        this->fuelPerKm = fuelPerKm;
        this->tankCapacity = tankCapacity;
    }
} // Logic
