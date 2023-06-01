#ifndef AVATAR_H
#define AVATAR_H
#include "GridUnit.h"
#include <tuple>
#include <iostream>

class Avatar : public GridUnit {
public:
    Avatar(int x, int y) : GridUnit(x, y, 'A') {}

    void shift(int dx, int dy) {
        int coordsX, coordsY;
        std::tie(coordsX, coordsY) = coordinates;
        coordsX += dx;
        coordsY += dy;
        coordinates = std::make_tuple(coordsX, coordsY);
    }
};

#endif