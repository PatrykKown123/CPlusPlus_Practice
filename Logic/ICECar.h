//
// Created by shali on 2024-12-08.
//

#ifndef ICECAR_H
#define ICECAR_H
#include "Car.h"

namespace Logic {
    //Establish the required class relationship
    class ICECar: public Car{
    private:
        float fuelPerKm;
        float tankCapacity;
    public:
        //Declare the constructor
        ICECar(float fuelPerKm, float  tankCapacity, std::string plateNumber, std::string make, float efficiency);
        float getFuelPerKm() const;
        float getTankCapacity() const;
        void setFuelPerKm(float fuelPerKm);
        void setTankCapacity(float tankCapacity);

        //Declare the required methods
        float range() override;
        float travelCost(float distanceToTravel) override;
        ~ICECar() override = default;
    };
}

#endif //ICECAR_H
