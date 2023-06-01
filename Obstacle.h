#ifndef OBSTACLE_H
#define OBSTACLE_H
#include "GridUnit.h"
#include "Modifier.h"
#include <tuple>
#include <iostream>

class Obstacle : public GridUnit, public Modifier {
private:
    bool active;

public:
    Obstacle(int x, int y) : GridUnit(x, y, 'O'), active(true) {}

    bool isActive() {
        return active;
    }

    void apply(GridUnit& unit) {
        unit.setEntity('O');
        active = false;
    }
};

#endif