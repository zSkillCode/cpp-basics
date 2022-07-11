#include "Player.h"

int Player::playerCount{0};

Player::Player() {
    playerCount++;
}

Player::~Player() {
    playerCount--;
}

int Player::getPlayerCount() {
    return playerCount;
}
