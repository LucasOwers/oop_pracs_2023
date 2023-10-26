#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
#include <tuple>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "Cell.h"
#include "Utils.h"
#include "Trap.h"
#include "Character.h"

class Game{
private:
    std::vector<Cell*> grid;

public:

void initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight) {
    for (int i = 0; i < numCharacters; ++i) {
        Character = new character(i.i,C);
        }
    for (int i = 0; i < numTraps; ++i) {
        Trap = new trap(i+4,i+2,T);
    }
    int gridWidth{
        return width;
    }

    int gridHeight{
        return height;
    }

    std::vector<Cell*>& getGrid(){
    return grid;
}

   void setGrid{
    grid = std::make_tuple(gridWidth,gridHeight);
   }
}

void gameLoop(int maxIterations, double trapActivationDistance){
    for (int i = 0; i<maxIterations; i++){
        int posX+1;
        std::tie(posX, posY) = character1.getPos();
        move.character(posX,posY);
        if posX>gridWidth{
            "You have won."
        }
    }
}
}