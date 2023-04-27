#include <iostream>
#include "Car.h"
using namespace std;

int main() {
    Car car(1000);
    car.drive(10);
    cout << "Car's price is: " << car.get_price() << " dollars\n";
    cout << "Cars emission:" << car.get_emissions() << "\n";

    return 0;
}