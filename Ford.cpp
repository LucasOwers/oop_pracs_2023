#include "Ford.h"
#include "Car.h"

Ford::Ford() : Car(), badgeNumber_() {}
Ford::Ford(int badgeNumber, int price) : Car(price), badgeNumber_(badgeNumber) {}

int Ford::get_badge_number(){
    return badgeNumber_;
}

void Ford::set_badge_number(int badgeNumber) {
    badgeNumber_ = badgeNumber;
}

void Ford::set_fuel_litres(float litresOfFuel) {
    if (litresOfFuel < 0){
        litresOfFuel = 0;
    }
    if (litresOfFuel > 60){
        litresOfFuel = 60;
    }
    litresOfFuel_ = litresOfFuel;
}



void Ford::drive(int kms){
    while (kms > 0 && litresOfFuel_ > 0){
        emissions_ += 234 * kms;
        for (int i = 0; i < kms; i++){
            if (i % 5 == 0){
                litresOfFuel_--;
                if (litresOfFuel_ < 0){
                    litresOfFuel_ = 0;
                     break;
                }
            }
        }
    }
}

void Ford::refuel(int litres){;
    if (litresOfFuel_<60){
        litresOfFuel_ = litresOfFuel_+litres;
        if (litresOfFuel_>60){
            litresOfFuel_ = 60;
        }
    }
}

float Ford::get_fuel_litres(){
    return litresOfFuel_;
}