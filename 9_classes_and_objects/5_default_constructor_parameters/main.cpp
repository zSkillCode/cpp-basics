#include "Player.h"

int main() {
    const Player player1{}; // "none", 0, 0
    const Player player2{"Frank"}; // "Frank", 0, 0
    const Player player3{"Jerry", 50}; // "Jerry", 50, 0
    const Player player4{"Bob", 100, 3}; // "Bob", 100, 3
}