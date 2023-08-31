#ifndef VEHICLE_H
#define VEHICLE_H

#include <ctime>
using namespace std;

class Vehicle {
private:
  time_t timeOfEntry;
  int id;                                                                                                                                                                   

public:
  Vehicle(int id);
  int getID() const;
  virtual int getParkingDuration() const = 0;

  virtual ~Vehicle() {}

  time_t getEntryTime() const;
};


#endif // VEHICLE_H
