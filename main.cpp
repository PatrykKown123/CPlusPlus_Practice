#include <iostream>
#include "Logic/ElectricCar.h"
#include "Logic/ICECar.h"
#include "Logic/Car.h"
int main() {
    Logic::Car* carDB[10];
    while (true) {
        std::cout << "Welcome to car implementation!" << std::endl;
        std::cout << "Are you adding either an ICE or Electric Car?" << std::endl;
        std::string carType;
        std::cin >> carType;
        if(carType != "ICE" || carType != "Electric Car") {
            std::cout << "Invalid input, please enter an ICE or Electric Car" << std::endl;
        } else if(carType == "ICE") {
            std::cout << "You are creating a: "
            << carType
            << " car." << std::endl
            << std::endl;

            std::cout << "Please enter your license plate number: ";
            std::string plateNumber;
            std::cin >> plateNumber;
            std::cout << "Please enter your car make: ";
            std::string carMake;
            std::cin >> carMake;
            std::cout << "Please enter your effiency (1 or 0): " << std::endl;
            float efficiency;
            std::cin >> efficiency;
            if(efficiency != 0 || efficiency != 1) {
                std::cout << "Invalid input, please enter 1 or 0" << std::endl;
            }
            float energy;
            float capacity;
            try {
                std::cout << "Please enter your energy consumption per KM: " << std::endl;
                std::cin >> energy;
            } catch(std::exception& e) {
                std::cout << e.what()<< std::endl;
            }
            try {
                std::cout << "Please enter your battery capacity in kWh " << std::endl;
                std::cin >> capacity;
            } catch(std::exception& e) {
                std::cout << e.what()<< std::endl;
            }


        }
        std::cout << "Welcome to car implementation!" << std::endl;
        std::cout << "Welcome to car implementation!" << std::endl;

    }
    return 0;
}
