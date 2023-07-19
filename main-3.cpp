#include "GameSession.h"
#include <iostream>

int main() {
    int numAvatars = 2;
    int numObstacles = 5;
    int gridWidth = 10;
    int gridHeight = 10;
    int maxCycles = 20;
    double obstacleActivationDistance = 2.0;

    GameSession gameSession;
    gameSession.initGameSession(numAvatars, numObstacles, gridWidth, gridHeight);
    gameSession.gameCycle(maxCycles, obstacleActivationDistance);

    return 0;
}