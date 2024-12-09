//
// Created by shali on 2024-12-08.
//

#ifndef ICECAR_H
#define ICECAR_H

namespace Logic {
    //Establish the required class relationship
    class ICECar {
    private:
        float fuelPerKm;
        float tankCapacity;
    public:
        //Declare the constructor

        float getFuelPerKm() const;
        float getTankCapacity() const;
        void setFuelPerKm(float fuelPerKm);
        void setTankCapacity(float tankCapacity);

        //Declare the required methods
    };
}

#endif //ICECAR_H
