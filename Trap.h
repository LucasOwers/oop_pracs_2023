#ifndef TRAP_H
#define TRAP_H
#include "Cell.h"
#include "Effect.h"
#include <tuple>
#include <iostream>

class Trap : public Cell, public Effect {
private:
    bool active;

public:
    Trap(int x, int y) : Cell(x, y, 'T'), active(true) {}

    bool isActive() {
        return active;
    }

    void apply(Cell& cell) {
        cell.setType('T');
        active = false;
    }
};

#endif