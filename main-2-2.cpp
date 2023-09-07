#include <iostream>
#include "Car.h"
#include "Ford.h"


using namespace std;

int main() {

    Ford ford(999, 2200);
    ford.drive(800);
    ford.set_fuel_litres(50);
    ford.refuel(5);
    cout << "Car's price is: " << ford.get_price() << " dollars\n";
    cout << "Car's badge number is: " << ford.get_badge_number() << "\n";
    cout << "Cars emission:" << ford.get_emissions() << "\n";
    cout << "Cars fuel after refueling: " << ford.get_litresOfFuel() << "\n";

    return 0;
}