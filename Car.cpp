#include "car.h"
using namespace std;


Car::Car(int id) : Vehicle(id) {
}

int Car::getParkingDuration() const {
  time_t currentTime = time(nullptr);
  int duration = static_cast<int>(currentTime - getEntryTime());
  //static cast changes the time into an integer (aka number of seconds)
  return static_cast<int>(duration * 0.9);
}