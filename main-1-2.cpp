#include <iostream>
#include <string>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"
using namespace std;

int main() {
    ParkingLot lot(10);
    string type;
    while (lot.getCount() < 10) {
        cout << "Enter vehicle type (car/bus/motorbike): ";
        cin >> type;
        if (type == "car") {
            lot.parkVehicle(new Car(lot.getCount()+1));
        }
        else if (type == "bus") {
            lot.parkVehicle(new Bus(lot.getCount()+1));
        }
        else if (type == "motorbike") {
            lot.parkVehicle(new Motorbike(lot.getCount()+1));
        }
        else {
            cout << "Invalid vehicle type\n";
        }
    }
    int id;
    cout << "Enter ID of vehicle to unpark: ";
    cin >> id;
    lot.unparkVehicle(id);
    return 0;
}