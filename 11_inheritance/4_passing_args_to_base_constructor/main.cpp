#include <iostream>
#include <string>
#include <utility>

class Item {
public:
    explicit Item(std::string name) : name{std::move(name)} {}

    void displayName() const {
        std::cout << name << std::endl;
    }

private:
    const std::string name;
};

class Gun : public Item {
public:
    Gun(const std::string &name, const int damage) : Item{name}, damage{damage} {}

    void shoot() const {
        std::cout << "Hit target >> -" << damage << "hp." << std::endl;
    }

private:
    const int damage;
};

int main() {
    const Gun gun1{"Shotgun", 100};
    const Gun gun2{"Sniper", 120};

    gun1.displayName(); // Shotgun
    gun2.shoot(); // Hit target >> -120hp.
    return 0;
}