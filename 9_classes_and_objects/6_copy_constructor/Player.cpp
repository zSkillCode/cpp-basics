#include "Player.h"

#include <iostream>
#include <utility>

Player::Player(std::string name, int health, int xp) : name{std::move(name)}, health{health}, xp{xp} {}

// Copy constructor (called when a copy of the object is created)
Player::Player(const Player &source) : Player(source.name, source.health, source.xp) {
    std::cout << "Copy constructor called" << std::endl;
}

Player::~Player() {
    std::cout << "Destructor called" << std::endl;
}
