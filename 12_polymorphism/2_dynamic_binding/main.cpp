#include <iostream>

class Base {
public:
    virtual ~Base() = default;

    virtual void display() const {
        std::cout << "BASE" << std::endl;
    }
};

class Derived : public Base {
public:
    void display() const override {
        std::cout << "DERIVED" << std::endl;
    }
};

int main() {
    Base{}.display(); // BASE
    Derived{}.display(); // DERIVED

    const Base *base{new Derived}; // DERIVED
    base->display();
    delete base;
    return 0;
}