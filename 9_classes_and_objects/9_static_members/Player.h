#pragma once

#include <string>

class Player {
public:
    Player();

    ~Player();

    static int getPlayerCount();

private:
    static int playerCount;
};
