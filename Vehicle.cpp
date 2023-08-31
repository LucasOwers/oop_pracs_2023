
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle(int id){
  int ID = id;
  timeOfEntry = time(nullptr);
}

int Vehicle::getID() const {
  return id;
}

time_t Vehicle::getEntryTime() const {
    return timeOfEntry;
}
