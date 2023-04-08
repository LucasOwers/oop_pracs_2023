#include <iostream>
#include "vehicle.h"
#include "car.h"
#include "bus.h"
#include "motorbike.h"

int main() {
// Add a variable to keep track of the number of vehicles
int numVehicles = 0;
int max = 10;
// Create an array of pointers to Vehicle objects
Vehicle* parkingLot[max];

// Prompt the user for the number and each type of vehicle they want to park
// and create and fill an array of pointers to Vehicle objects
int numCars, numBuses, numMotorbikes;
cout << "Enter the number of cars: ";
cin >> numCars;
for (int i = 0; i < numCars; i++) {
    parkingLot[numVehicles] = new Car(numVehicles + 1);
    numVehicles++;
}

cout << "Enter the number of buses: ";
cin >> numBuses;
for (int i = 0; i < numBuses; i++) {
    parkingLot[numVehicles] = new Bus(numVehicles + 1);
    numVehicles++;
}

cout << "Enter the number of motorbikes: ";
cin >> numMotorbikes;
for (int i = 0; i < numMotorbikes; i++) {
    parkingLot[numVehicles] = new Motorbike(numVehicles + 1);
    numVehicles++;
}

// Iterate over the array and call the getParkingDuration() function
// to print the parking duration for each vehicle
for (int i = 0; i < numVehicles; i++) {
    int duration = parkingLot[i]->getParkingDuration();
    cout << "Vehicle " << i+1 << " has been parked for " << duration << " seconds." << endl;
}

// Free the memory allocated for the Vehicle objects
for (int i = 0; i < numVehicles; i++) {
    delete parkingLot[i];
}

return 0;
}