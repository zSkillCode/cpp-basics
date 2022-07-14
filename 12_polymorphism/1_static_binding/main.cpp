#include <iostream>

class Base {
public:
    void display() const {
        std::cout << "BASE" << std::endl;
    }
};

class Derived : public Base{
public:
    void display() const {
        std::cout << "DERIVED" << std::endl;
    }
};

int main() {
    Base{}.display(); // BASE
    Derived{}.display(); // DERIVED

    const Base *base{new Derived};
    base->display(); // BASE

    delete base;
}