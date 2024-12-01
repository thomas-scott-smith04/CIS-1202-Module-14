#include "Truck.h"
#include <iostream>

using namespace std;

// Constructor
Truck::Truck(const string& manufacturer, int yearBuilt, int towingCapacity)
    : Vehicle(manufacturer, yearBuilt), towingCapacity(towingCapacity) {}

// Getter
int Truck::getTowingCapacity() const {
    return towingCapacity;
}

// Setter
void Truck::setTowingCapacity(int towingCapacity) {
    this->towingCapacity = towingCapacity;
}

// Display Information
void Truck::displayInfo() const {
    Vehicle::displayInfo();
    cout << "Towing Capacity: " << towingCapacity << " lbs" << endl;
}
