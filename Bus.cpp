#include "Bus.h"
using namespace std;


Bus::Bus(int id) : Vehicle(id) {
}

int Bus::getParkingDuration() const {
  time_t currentTime = time(nullptr);
  int duration = static_cast<int>(currentTime - getEntryTime());
  return static_cast<int>(duration * 0.75);
}