//
// Created by shali on 2024-12-08.
//

#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H
#include "Car.h"


namespace Logic {
    //Establish the required class relationship
    class ElectricCar: public Car {
    private:
        float energyPerKm;
        float batteryCapacity;
    public:
        //Declare the constructor
        ElectricCar(float energyPerKm, float batteryCapacity, std::string plateNumber, std::string make, float efficiency);
        float getEnergyPerKm() const;
        float getBatteryCapacity() const;
        void setEnergyPerKm(float energyPerKm);
        void setBatteryCapacity(float batteryCapacity);

        //Declare the required methods
    };
}


#endif //ELECTRICCAR_H
