
#include "ParkingLot.h"
#include <iostream>
using namespace std;

ParkingLot::ParkingLot(int maxCapacity) : maxCapacity(maxCapacity), count(0) {
    vehicles = new Vehicle*[maxCapacity];
}

ParkingLot::~ParkingLot() {
    for (int i = 0; i < count; i++) {
        delete vehicles[i];
    }
    delete[] vehicles;
}

void ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (count == maxCapacity) {
        cout << "The lot is full" << endl;
        return;
    }
    vehicles[count++] = vehicle;
}

void ParkingLot::unparkVehicle(int vehicleID) {
    bool found = false;
    for (int i = 0; i < count; i++) {
        if (vehicles[i]->getID() == vehicleID) {
            delete vehicles[i];
            for (int j = i; j < count - 1; j++) {
                vehicles[j] = vehicles[j + 1];
            }
            count--;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Vehicle not in the lot" << endl;
    }
}

int ParkingLot::getCount() const {
    return count;
}