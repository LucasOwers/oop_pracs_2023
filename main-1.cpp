#include <iostream>
#include "Helper.h"
#include <tuple>
#include <cmath>
#include <cstdlib>

int main() {
  // Generate random positions
  std::tuple<int, int> coords1 = Helper::generateRandomCoordinates(10, 10);
  std::tuple<int, int> coords2 = Helper::generateRandomCoordinates(10, 10);

  // Calculate distances
  double distance1 = Helper::calculateDistance(coords1, coords2);

  // Print the positions and distances
  std::cout << "Position 1: (" << std::get<0>(coords1) << ", " << std::get<1>(coords1) << ")" << std::endl;
  std::cout << "Position 2: (" << std::get<0>(coords2) << ", " << std::get<1>(coords2) << ")" << std::endl;
  std::cout << "Distance between position 1 and position 2: " << distance1 << std::endl;


  return 0;
}

