#include <iostream>
#include "Logic/ElectricCar.h"
#include "Logic/ICECar.h"
#include "Logic/Car.h"
int main() {
    // this creates 10 nullpointers to of type car
    Logic::Car* carDB[10];
    // this counter will ensure a out of bounds doesn't occur
    int carCount = 0;

    // while true loop begins user application
    while (true) {
        // user greeted with either adding a new car or printing the records
        std::cout << "Welcome to car implementation!" << std::endl;
        std::cout << "Do you want to add a new car (1) or print records based on distance travel (2) ? (1 or 2)" << std::endl;
        int choice;
        std::cin >> choice;
        std::cin.ignore(25, '\n');

        // when choice equals one - use is prompted to add an ICE or Electric car
        if (choice == 1) {
            std::cout << "Are you adding either an ICE or Electric?" << std::endl;
            std::string carType;
            std::cin >> carType;
            std::cin.ignore(25, '\n');

            // data input for construction of an ICE car subclass
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
                std::cout << "Please enter your effiency (1 or 0): ";
                float efficiency;
                std::cin >> efficiency;
                std::cin.ignore(25, '\n');
                float energy;
                float capacity;
                std::cout << "Please enter your energy consumption per KM: ";
                std::cin >> energy;
                std::cin.ignore(25, '\n');
                std::cout << "Please enter your battery capacity in kWh: ";
                std::cin >> capacity;
                std::cin.ignore(25, '\n');

                // checking whether counter hasn't reached the max limit of cars
                if(carCount < 10) {
                    // catch the exceptions the overloaded virtual methods throw
                    try {
                        carDB[carCount++] = new Logic::ICECar(energy, capacity, plateNumber, carMake, efficiency);
                    } catch(std::exception& e) {
                        std::cout << e.what() << std::endl;
                    }
                } else {
                    // lets user know maximum amount of cars created
                    std::cout << "Max amount of cars reached!";
                }
                // user selection is an electric car
            } else if(carType == "Electric") {

                // data input for construction of an ICE car subclass
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
                std::cout << "Please enter your effiency (1 or 0): ";
                float efficiency;
                std::cin >> efficiency;
                std::cin.ignore(25, '\n');
                float energy;
                float capacity;
                std::cout << "Please enter your fuel consumption per KM: ";
                std::cin >> energy;
                std::cin.ignore(25, '\n');
                std::cout << "Please enter your tank capacity in liters ";
                std::cin >> capacity;
                std::cin.ignore(25, '\n');

                // checking whether counter hasn't reached the max limit of cars
                if(carCount < 10) {
                    try {
                        // catch the exceptions the overloaded virtual methods throw
                        carDB[carCount++] = new Logic::ElectricCar(energy, capacity, plateNumber, carMake, efficiency);
                    } catch(std::exception& e) {
                        std::cout << e.what() << std::endl;
                    }
                } else {
                    // lets user know maximum amount of cars created
                    std::cout << "Max amount of cars reached!";
                }
            }
            // user decides to print the document
        } else if (choice == 2){
            // distance travelled (100km)...
            std::cout << "Enter distance travelled: " << std::endl;
            float distance;
            std::cin >> distance;
            std::cin.ignore(25, '\n');
            std::cout <<"Plate Number     Make       Efficiency     Range     Travel Cost(100km)"<< std::endl;
            for(int i = 0; i < carCount; i++) {
                // as long as carDB at i isn't a nullptr, print the corresponding data
                if(carDB[i] != nullptr) {
                    std::cout
                    << carDB[i]->getPlateNumber()
                    <<"           "
                    << carDB[i]->getMake()
                    <<"      "
                    << carDB[i]->getEfficiency()
                    <<"             "
                    << carDB[i]->range()
                    <<"     "
                    << carDB[i]->travelCost(distance)
                    << std::endl;
                }
            }
        }
    }
    return 0;
}
