#include "Player.h"

#include <utility>

Player::Player(std::string name, int health, int xp) : name{std::move(name)}, health{health}, xp{xp} {}

// This is called "Constructor Delegation" (calling another constructor)
Player::Player(const std::string &name) : Player{name, 0, 0} {}

Player::Player() : Player{"None"} {}


const std::string &Player::getName() const {
    return this->name;
}

int Player::getHealth() const {
    return this->health;
}

int Player::getXp() const {
    return this->xp;
}