#ifndef GRIDUNIT_H
#define GRIDUNIT_H
#include <iostream>
#include <tuple>

class GridUnit {
protected:
    std::tuple<int, int> coordinates;
    char entity;
public:
    GameUnit(int x, int y, char entityType) : coordinates(std::make_tuple(x, y)), entity(entityType) {}

    std::tuple<int, int> getCoordinates() {
        return coordinates;
    }

    char getEntity() {
        return enitity;
    }
    
    void setCoordinates(int x, int y){
        x = newX;
        y = newY;
        
    }
    void setEntity(char Entity){
        entity = newEntity;
    }
    
};

#endif