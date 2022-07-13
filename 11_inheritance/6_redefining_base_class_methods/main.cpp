#include <iostream>
#include <string>
#include <utility>

class Player {
public:
    Player(const int id, std::string name) : id{id}, name{std::move(name)} {}

    void displayInfo() const {
        std::cout << "Player(id=" << id << " name=" << name << ")" << std::endl;
    }

protected:
    const int id;
    const std::string name;
};

class EnemyPlayer : public Player {
public:
    using Player::Player;

    void displayInfo() const {
        std::cout << "Enemy(id=" << id << " name=" << name << ")" << std::endl;
        // Player::displayInfo(); << call overridden method of Player class
    }
};

int main() {
    const Player player{1, "Jerry"};
    player.displayInfo(); // Player(id=1 name=Jerry)

    const EnemyPlayer enemyPlayer{2, "Bob"};
    enemyPlayer.displayInfo(); // Enemy(id=2 name=Bob)
    return 0;
}