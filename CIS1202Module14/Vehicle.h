#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle {
protected:
    string manufacturer;
    int yearBuilt;

public:
    // Constructor
    Vehicle(const string& manufacturer = "", int yearBuilt = 0);

    // Getters
    string getManufacturer() const;
    int getYearBuilt() const;

    // Setters
    void setManufacturer(const string& manufacturer);
    void setYearBuilt(int yearBuilt);

    // Display Information
    virtual void displayInfo() const;
};

#endif