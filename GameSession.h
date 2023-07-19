#ifndef GAMESESSION_H
#define GAMESESSION_H

#include <iostream>
#include <vector>
#include <tuple>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "GridUnit.h"
#include "Avatar.h"
#include "Obstacle.h"
#include "Helper.h"

class GameSession {
private:
    std::vector<GridUnit*> grid;

public:
    std::vector<GridUnit*>& getGrid() {
        return grid;
    }

    void initGameSession(int numAvatars, int numObstacles, int gridWidth, int gridHeight) {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

        for (int i = 0; i < numAvatars; ++i) {
            int x = xDist(engine);
            int y = yDist(engine);
            Avatar* avatar = new Avatar(x, y);
            grid.push_back(avatar);
        }

        for (int i = 0; i < numObstacles; ++i) {
            int x = xDist(engine);
            int y = yDist(engine);
            Obstacle* obstacle = new Obstacle(x, y);
            grid.push_back(obstacle);
        }
    }

    void gameCycle(int maxCycles, double obstacleActivationDistance) {
        for (int cycle = 1; cycle <= maxCycles; ++cycle) {
            std::cout << "Cycle " << cycle << std::endl;

            for (GridUnit* unit : grid) {
                if (dynamic_cast<Avatar*>(unit)) {
                    unit->shift(1, 0);  // Move avatar to the right

                    for (GridUnit* otherUnit : grid) {
                        if (dynamic_cast<Obstacle*>(otherUnit)) {
                            int x1, y1;
                            std::tie(x1, y1) = unit->getCoordinates();
                            int x2, y2;
                            std::tie(x2, y2) = otherUnit->getCoordinates();
                            double distance = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
                            if (distance <= obstacleActivationDistance) {
                                Obstacle* obstacle = dynamic_cast<Obstacle*>(otherUnit);
                                obstacle->apply(*unit);
                            }
                        }
                    }

                    int x, y;
                    std::tie(x, y) = unit->getCoordinates();
                    if (x >= gridWidth) {
                        std::cout << "Avatar has won the game!" << std::endl;
                        return;
                    }
                }
            }
        }

        std::cout << "Maximum number of cycles reached. Game over." << std::endl;
    }
};
#endif