#include "Player.h"

int main() {
    const Player player; // No args constructor called
    const Player player1("Jerry"); // 1 arg constructor called
    const Player player2("Jason", 100, 2); // 3 args constructor called

    const Player *const player3 = new Player; // No args constructor called
    delete player3; // Destructor called
}