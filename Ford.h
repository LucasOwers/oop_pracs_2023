#ifndef FORD_H
#define FORD_H

#include "Car.h"

class Ford:public Car{
public:
Ford();
    Ford(int badgeNumber, int price);

    void set_badge_number(int badgeNumber);
    int get_badge_number();

    void set_fuel_litres(float litresOfFuel);
    float get_litresOfFuel();


    void refuel (int litres);
    void drive (int kms);

private:
    int badgeNumber_;
    float litresOfFuel_;
};

#endif // FORD_H
