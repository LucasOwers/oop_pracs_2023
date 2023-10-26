#ifndef CHARACTER_H
#define CHARACTER_H
#include "Cell.h"
#include <tuple>
#include <iostream>

class Character : public Cell {
public:
    Character(int x, int y) : Cell(x, y, 'C') {}

    void move(int dx, int dy) {
        int posX, posY;
        std::tie(posX, posY) = position;
        posX += dx;
        posY += dy;
        position = std::make_tuple(posX, posY);
    }
};

#endif