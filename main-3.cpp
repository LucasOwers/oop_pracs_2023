#include "Game.h"
#include <iostream>

int main() {
    int numCharacters = 2;
    int numTraps = 5;
    int gridWidth = 10;
    int gridHeight = 10;
    int maxIterations = 20;
    double trapActivationDistance = 2.0;

    Game game1;
    game1.initGame(numCharacters, numTraps, gridWidth, gridHeight);
    game1.gameLoop(maxIterations, trapActivationDistance);

    return 0;
}