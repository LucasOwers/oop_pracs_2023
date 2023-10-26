#include "Trap.h"
#include "Character.h"
#include <tuple>
#include <iostream>

int main() {
    Character character1(2, 3);
    Trap trap(4, 4);

    character1.move(4, 4);
    trap.apply(character1);

    int posX, posY;
    std::tie(posX, posY) = character1.getPos();
    std::cout << "Avatar position after movement: (" << posX << ", " << posY << ")\n";
    std::cout << "Avatar type after obstacle: " << character1.getType() << std::endl;

return 0;
}
