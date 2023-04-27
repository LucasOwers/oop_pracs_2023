#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot {

private:
    Vehicle** vehicles;
    int maxCapacity;
    int count;

public:
    ParkingLot(int capacity);
    ~ParkingLot();
    bool isFull() const;
    int getCount() const;
    bool parkVehicle(Vehicle* vehicle);
    bool unparkVehicle(int id);
    int countOverstayingVehicles(int maxParkingDuration) const;
};

#endif
