//
// Created by shali on 2024-12-08.
//

#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H


namespace Logic {
    //Establish the required class relationship
    class ElectricCar {
    private:
        float energyPerKm;
        float batteryCapacity;
    public:
        //Declare the constructor

        float getEnergyPerKm() const;
        float getBatteryCapacity() const;
        void setEnergyPerKm(float energyPerKm);
        void setBatteryCapacity(float batteryCapacity);

        //Declare the required methods
    };
}


#endif //ELECTRICCAR_H
