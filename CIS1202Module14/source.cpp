// Thomas Smith
// CIS 1202 N01
// December 1, 2024

#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {
    // Vehicle
    string manufacturer;
    int yearBuilt;

    cout << "Enter the manufacturer of the vehicle: ";
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;

    Vehicle vehicle(manufacturer, yearBuilt);
    cout << "\nVehicle Information:" << endl;
    vehicle.displayInfo();

    // Car
    int numberOfDoors;
    cout << "\nEnter the manufacturer of the car: ";
    cin.ignore(); // Clear input buffer
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cout << "Enter the number of doors: ";
    cin >> numberOfDoors;

    Car car(manufacturer, yearBuilt, numberOfDoors);
    cout << "\nCar Information:" << endl;
    car.displayInfo();

    // Truck
    int towingCapacity;
    cout << "\nEnter the manufacturer of the truck: ";
    cin.ignore(); // Clear input buffer
    getline(cin, manufacturer);
    cout << "Enter the year built: ";
    cin >> yearBuilt;
    cout << "Enter the towing capacity (in lbs): ";
    cin >> towingCapacity;

    Truck truck(manufacturer, yearBuilt, towingCapacity);
    cout << "\nTruck Information:" << endl;
    truck.displayInfo();

    return 0;
}
