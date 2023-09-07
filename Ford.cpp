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


float Ford::get_litresOfFuel(){
    return litresOfFuel_;
}

void Ford::set_litresOfFuel(float litresOfFuel) {
    litresOfFuel = 60.0;
    litresOfFuel_ = litresOfFuel;
}



void Ford::drive(int kms){
    int totalEmissions = 234 * kms;
    while (kms > 0 && litresOfFuel_ > 0){
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
    emissions_ += totalEmissions; // Update emissions based on total kms
}

void Ford::refuel(int litres){;
    if (litresOfFuel_<60){
        litresOfFuel_ = litresOfFuel_+litres;
        if (litresOfFuel_>60){
            litresOfFuel_ = 60;
        }
    }
}
