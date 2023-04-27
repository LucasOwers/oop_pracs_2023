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
        cout << "Enter a car, bus or motorbike: ";
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
            cout << "dumbass listen better\n";
        }
    }
    int id;
    cout << "Enter the ID of the vehicle you wish to unpark: ";
    cin >> id;
    lot.unparkVehicle(id);
    return 0;
}