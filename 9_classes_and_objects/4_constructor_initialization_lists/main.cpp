#include "Player.h"
#include <iostream>

void printPlayer(const Player &player);

int main() {
    const Player player;
    printPlayer(player); // name=None health=0 xp=0

    const Player player2{"John"};
    printPlayer(player2); // name=John health=0 xp=0

    const Player player3{"Jason", 100, 7};
    printPlayer(player3); // name=Jason health=100 xp=7

    return 0;
}

void printPlayer(const Player &player) {
    std::cout << "name=" << player.getName() << " health=" << player.getHealth() << " xp=" << player.getXp()
              << std::endl;
}