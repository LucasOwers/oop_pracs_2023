#include "Car.h"
#include "Tesla.h"

Tesla::Tesla() : Car(), model_() {}
Tesla::Tesla(char model, int price) : Car(price), model_(model) {}

char Tesla::get_model(){
    return model_;
}

void Tesla::set_model(char model) {
    model_ = model;
}

float Tesla::get_batteryPercentage() const {
    return batteryPercentage_;
}

void Tesla::set_batteryPercentage(float batteryPercentage) {
    if (batteryPercentage < 0){
        batteryPercentage = 0;
    }
    if (batteryPercentage > 100){
        batteryPercentage = 100;
    }
    batteryPercentage_ = batteryPercentage;
}

void Tesla::chargeBattery(int mins){
    while (batteryPercentage_ < 100){
        batteryPercentage_ = (batteryPercentage_ + 0.5)*mins;
    }
}




void Tesla::drive(int kms){
    while (batteryPercentage_ > 0){
       emissions_ += 74 * kms;
    }
}
