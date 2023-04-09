// parking_lot.h

#ifndef PARKING_LOT_H
#define PARKING_LOT_H

#include "Vehicle.h"

class ParkingLot {

private:
    int maxCapacity;
    int count;
    Vehicle** vehicles;

public:
    ParkingLot(int maxCapacity);
    void parkVehicle(Vehicle* vehicle);
    void unparkVehicle(int vehicleID);
    int getCount() const;

    ~ParkingLot();


};

#endif