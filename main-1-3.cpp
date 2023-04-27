#include <iostream>
#include <string>
#include <ctime>
#include "Vehicle.h"
#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
  const int capacity = 10;
  ParkingLot parkingLot(capacity);

  std::string type;
  while (true) {
    std::cout << "Enter vehicle type (car, bus, motorbike) or exit: ";
    std::cin >> type;

    if (type == "exit") {
      break;
    }
    int id = 1;

    Vehicle* vehicle = nullptr;
    if (type == "car") {
    for (int i = 0; i < 5; ++i) {
    vehicle = new Car(id);
     ++id;
    }
    } else if (type == "bus") {
    for (int i = 0; i < 3; ++i) {
     vehicle = new Bus(id);
    ++id;
    }
    } else if (type == "motorbike") {
      for (int i = 0; i < 2; ++i) {
    vehicle = new Motorbike(id);
    ++id;
      }
    } else {
      std::cout << "Invalid vehicle type." << std::endl;
      continue;
    }

    if (!parkingLot.parkVehicle(vehicle)) {
      std::cout << "The lot is full." << std::endl;
      delete vehicle;
    }
  }

  int unparkId;
  std::cout << "Enter vehicle ID to unpark: ";
  std::cin >> unparkId;
  if (parkingLot.unparkVehicle(unparkId)) {
    std::cout << "Vehicle with ID " << unparkId << " has been unparked." << std::endl;
  } else {
    std::cout << "Vehicle not in the lot." << std::endl;
  }

  int overstayingVehicles = parkingLot.countOverstayingVehicles(15);
  std::cout << "Number of vehicles that overstayed in the parking lot: " << overstayingVehicles << std::endl;

  return 0;
}
