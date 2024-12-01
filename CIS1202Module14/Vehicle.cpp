#include "Vehicle.h"
#include <iostream>

using namespace std;

// Constructor
Vehicle::Vehicle(const string& manufacturer, int yearBuilt)
    : manufacturer(manufacturer), yearBuilt(yearBuilt) {}

// Getters
string Vehicle::getManufacturer() const {
    return manufacturer;
}

int Vehicle::getYearBuilt() const {
    return yearBuilt;
}

// Setters
void Vehicle::setManufacturer(const string& manufacturer) {
    this->manufacturer = manufacturer;
}

void Vehicle::setYearBuilt(int yearBuilt) {
    this->yearBuilt = yearBuilt;
}

// Display Information
void Vehicle::displayInfo() const {
    cout << "Manufacturer: " << manufacturer << endl;
    cout << "Year Built: " << yearBuilt << endl;
}