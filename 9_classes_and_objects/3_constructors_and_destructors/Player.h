#pragma once

#include <string>

class Player {
public:
    /*
     * DECLARING CONSTRUCTORS
     */
    Player();

    /*
     * EXPLICIT KEYWORD
     *
     * The explicit keyword should always be used for
     * constructors callable with one single argument.
     * The reason for that can be found here:
     * https://www.ibm.com/docs/en/i/7.4?topic=only-explicit-conversion-constructors-c
     */
    explicit Player(const std::string &name);

    Player(const std::string &name, int health, int xp);

    /*
     * DECLARING THE DESTRUCTOR
     */
    ~Player();
};

