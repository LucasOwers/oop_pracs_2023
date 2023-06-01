#ifndef GRIDUNIT_H
#define GRIDUNIT_H
#include <iostream>
#include <tuple>

class GridUnit {
protected:
    std::tuple<int, int> coordinates;
    char entity;
public:
    GridUnit(int x, int y, char entityType) : coordinates(std::make_tuple(x, y)), entity(entityType) {}

    std::tuple<int, int> getCoordinates() {
        return coordinates;
    }

    char getEntity() {
        return entity;
    }

    void setCoordinates(int x, int y) {
        coordinates = std::make_tuple(x, y);
    }

    void setEntity(char entity) {
        this->entity = entity;
    }

};

#endif