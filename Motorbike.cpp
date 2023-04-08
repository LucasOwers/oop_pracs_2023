#include "motorbike.h"
using namespace std;


Motorbike::Motorbike(int id) : Vehicle(id) {
}

int Motorbike::getParkingDuration() const {
  time_t currentTime = time(nullptr);
  int duration = static_cast<int>(currentTime - getEntryTime());
  return static_cast<int>(duration * 0.85);
}