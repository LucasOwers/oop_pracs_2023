#ifndef CELL_H
#define CELL_H
#include <iostream>
#include <tuple>

class Cell {
protected:
    std::tuple<int, int> position;
    char type;
public:
    virtual ~Cell() {}
    Cell(int x, int y, char typeType) : position(std::make_tuple(x, y)), type(typeType) {}

    std::tuple<int, int> getPos() {
        return position;
    }

    char getType() {
        return type;
    }

    void setPos(int x, int y) {
        position = std::make_tuple(x, y);
    }

    void setType(char type) {
        this->type = type;
    }

};

#endif