#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int capacity) {
    maxCapacity = capacity;
    count = 0;
    vehicles = new Vehicle*[maxCapacity];
    for (int i = 0; i < maxCapacity; i++) {
        vehicles[i] = nullptr;
    }
}

ParkingLot::~ParkingLot() {
    for (int i = 0; i < count; i++) {
        delete vehicles[i];
    }
    delete[] vehicles;
}

bool ParkingLot::isFull() const {
    return count == maxCapacity;
}

int ParkingLot::getCount() const {
    return count;
}

bool ParkingLot::parkVehicle(Vehicle* vehicle) {
    if (isFull()) {
        std::cout << "The lot is full" << std::endl;
        return false;
    }
    vehicles[count++] = vehicle;
    return true;
}

bool ParkingLot::unparkVehicle(int id) {
    for (int i = 0; i < count; i++) {
        if (vehicles[i]->getID() == id) {
            delete vehicles[i];
            vehicles[i] = vehicles[--count];
            vehicles[count] = nullptr;
            return true;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
    return false;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration) const {
    int countOverstaying = 0;
    time_t currentTime = time(nullptr);
    for (int i = 0; i < count; i++) {
        int duration = static_cast<int>(currentTime - vehicles[i]->getEntryTime());
        if (duration > maxParkingDuration) {
            countOverstaying++;
        }
    }
    return countOverstaying;
}
