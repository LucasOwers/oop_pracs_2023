#ifndef TESLA_H
#define TESLA_H

#include "Car.h"

class Tesla:public Car{
public:
Tesla();
    Tesla(char model, int price);

    void set_model(char model);
    char get_model();

    void set_batteryPercentage(float batteryPercentage);
    float get_batteryPercentage() const;


    void chargeBattery (int mins);
    void drive (int kms);

private:
    char model_;
    float batteryPercentage_;
};

#endif // TESLA_H
