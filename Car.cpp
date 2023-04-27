#include "Car.h"

Car::Car() : price_(), emissions_(0) {}
Car::Car(int price) : price_(price), emissions_() {}


int Car::get_price() const {
    return price_;
}

void Car::set_price(int price) {
    this->price_ = price;
}

int Car::get_emissions() const {
    return emissions_;
}

void Car::set_emissions(int emissions) {
    this->emissions_ = emissions;
}


void Car::drive(int kms){
    emissions_ += 20 * kms;
}




