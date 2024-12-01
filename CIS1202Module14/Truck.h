#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"
using namespace std;

class Truck : public Vehicle {
private:
    int towingCapacity;

public:
    // Constructor
    Truck(const string& manufacturer = "", int yearBuilt = 0, int towingCapacity = 0);

    // Getter and Setter
    int getTowingCapacity() const;
    void setTowingCapacity(int towingCapacity);

    // Display Information
    void displayInfo() const override;
};

#endif