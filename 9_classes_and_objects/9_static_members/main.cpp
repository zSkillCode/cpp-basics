#include "Player.h"

#include <iostream>

int main() {
    const Player player1;
    const Player player2;
    const Player *player3{new Player};

    std::cout << "Active players: " << Player::getPlayerCount() << std::endl;
    delete player3;
    std::cout << "Active players: " << Player::getPlayerCount() << std::endl;
}