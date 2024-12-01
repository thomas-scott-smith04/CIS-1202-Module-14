#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

using namespace std;

class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    // Constructor
    Car(const string& manufacturer = "", int yearBuilt = 0, int numberOfDoors = 0);

    // Getter and Setter
    int getNumberOfDoors() const;
    void setNumberOfDoors(int numberOfDoors);

    // Display Information
    void displayInfo() const override;
};

#endif
