//
// Created by shali on 2024-12-08.
//

#ifndef CAR_H
#define CAR_H
#include <string>

namespace Logic {
    class Car {
    private:
        std::string plateNumber;
        std::string make;
        float efficiency;
    public:
        //Declare the constructor
        Car(std::string plateNumber, std::string make, float efficiency);
        std::string getPlateNumber() const;
        std::string getMake() const;
        float getEfficiency() const;

        //Declare other methods as needed
        virtual float range() = 0;
        virtual float travelCost(float distanceToTravel) = 0;
        virtual ~Car() = default;
    };
}


#endif //CAR_H
