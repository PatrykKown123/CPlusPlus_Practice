#include <iostream>
#include "Logic/ElectricCar.h"
#include "Logic/ICECar.h"
#include "Logic/Car.h"
int main() {
    Logic::Car* carDB[10];
    int carCount = 0;
    while (true) {
        std::cout << "Welcome to car implementation!" << std::endl;

        std::cout << "Are you adding either an ICE or Electric?" << std::endl;
        std::string carType;
        std::cin >> carType;
        std::cin.ignore(25, '\n');
        // if(carType != "ICE" || carType != "Electric") {
        //     std::cout << "Invalid input, please enter an ICE or Electric" << std::endl;
        // }
        if(carType == "ICE") {
            std::cout << "You are creating a: "
            << carType
            << " car." << std::endl
            << std::endl;

            std::cout << "Please enter your license plate number: ";
            std::string plateNumber;
            std::cin >> plateNumber;
            std::cin.ignore(25, '\n');
            std::cout << "Please enter your car make: ";
            std::string carMake;
            std::cin >> carMake;
            std::cin.ignore(25, '\n');
            std::cout << "Please enter your effiency (1 or 0): " << std::endl;
            float efficiency;
            std::cin >> efficiency;
            std::cin.ignore(25, '\n');
            if(efficiency != 0 || efficiency != 1) {
                std::cout << "Invalid input, please enter 1 or 0" << std::endl;
            }
            float energy;
            float capacity;
            try {
                std::cout << "Please enter your energy consumption per KM: " << std::endl;
                std::cin >> energy;
                std::cin.ignore(25, '\n');
            } catch(std::exception& e) {
                std::cout << e.what()<< std::endl;
            }
            try {
                std::cout << "Please enter your battery capacity in kWh " << std::endl;
                std::cin >> capacity;
                std::cin.ignore(25, '\n');
            } catch(std::exception& e) {
                std::cout << e.what()<< std::endl;
            }
            if(carCount < 10) {
                carDB[carCount++] = new Logic::ICECar(energy, capacity, plateNumber, carMake, efficiency);
            }
        } else if(carType == "Electric") {
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
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Please enter your effiency (1 or 0): " << std::endl;
            float efficiency;
            std::cin >> efficiency;
            if(efficiency != 0 || efficiency != 1) {
                std::cout << "Invalid input, please enter 1 or 0" << std::endl;
            }
            float energy;
            float capacity;
            try {
                std::cout << "Please enter your fuel consumption per KM: " << std::endl;
                std::cin >> energy;
            } catch(std::exception& e) {
                std::cout << e.what()<< std::endl;
            }
            try {
                std::cout << "Please enter your tank capacity in liters " << std::endl;
                std::cin >> capacity;
            } catch(std::exception& e) {
                std::cout << e.what()<< std::endl;
            }
            if(carCount < 10) {
                carDB[carCount++] = new Logic::ElectricCar(energy, capacity, plateNumber, carMake, efficiency);
            }
        }

    }
    return 0;
}
