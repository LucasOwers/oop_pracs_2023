#include <iostream>
#include "Utils.h"
#include <tuple>
#include <cmath>
#include <cstdlib>
#include "Cell.h"

int main() {

    Cell unit(3, 4, 'A');

  // Generate random positions
  std::tuple<int, int> pos1 = Utils::generateRandomPos(10, 10);
  std::tuple<int, int> pos2 = Utils::generateRandomPos(10, 10);


  double distance1 = Utils::calculateDistance(pos1, pos2);


  std::cout << "Position 1: (" << std::get<0>(pos1) << ", " << std::get<1>(pos1) << ")" << std::endl;
  std::cout << "Position 2: (" << std::get<0>(pos2) << ", " << std::get<1>(pos2) << ")" << std::endl;
  std::cout << "Distance between position 1 and position 2: " << distance1 << std::endl;



  return 0;
}

