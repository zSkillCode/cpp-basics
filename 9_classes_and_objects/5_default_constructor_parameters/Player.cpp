#include "Player.h"

#include <utility>

Player::Player(std::string name, const int health, const int xp) : name{std::move(name)}, health{health}, xp{xp} {}
