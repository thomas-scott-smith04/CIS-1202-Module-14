#include "Car.h"
#include <iostream>

using namespace std;

// Constructor
Car::Car(const string& manufacturer, int yearBuilt, int numberOfDoors)
    : Vehicle(manufacturer, yearBuilt), numberOfDoors(numberOfDoors) {}

// Getter
int Car::getNumberOfDoors() const {
    return numberOfDoors;
}

// Setter
void Car::setNumberOfDoors(int numberOfDoors) {
    this->numberOfDoors = numberOfDoors;
}

// Display Information
void Car::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Number of Doors: " << numberOfDoors << endl;
}
