#include "Avatar.h"
#include "Obstacle.h"
#include <tuple>
#include <iostream>

int main() {
    Avatar avatar(2, 3);
    Obstacle obstacle(4, 4);

    avatar.shift(4, 4);
    obstacle.apply(avatar);

    int coordsX, coordsY;
    std::tie(coordsX, coordsY) = avatar.getCoordinates();
    std::cout << "Avatar position after movement: (" << coordsX << ", " << coordsY << ")\n";
    std::cout << "Avatar type after obstacle: " << avatar.getEntity() << std::endl;

    return 0;
}