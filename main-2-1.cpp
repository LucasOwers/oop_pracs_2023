#include <iostream>
#include "Tesla.h"
#include <string>

using namespace std;

int main() {

    Tesla tesla('N', 400);
    tesla.drive(3);
    tesla.set_batteryPercentage(72);
    tesla.chargeBattery(5);
    cout << "Car's price is: " << tesla.get_price() << " dollars\n";
    cout << "Cars emission:" << tesla.get_emissions() << "\n";
    cout << "Cars battery after charging: " << tesla.get_batteryPercentage() << "%\n";

    return 0;
}