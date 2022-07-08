#include "Player.h"

#include <iostream>
#include <string>

Player::Player() {
    std::cout << "No args constructor called" << std::endl;
}

Player::Player(const std::string &name) {
    std::cout << "1 arg constructor called" << std::endl;
}

Player::Player(const std::string &name, const int health, const int xp) {
    std::cout << "3 args constructor called" << std::endl;
}

Player::~Player() {
    std::cout << "Destructor called" << std::endl;
}
