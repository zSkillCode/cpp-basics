#include <iostream>

class Base {
public:
    Base() : value{-1} {
        std::cout << "Base Constructor" << std::endl;
    }

    explicit Base(const int x) : value{x} {
        std::cout << "Base 1 arg Constructor" << std::endl;
    }

    ~Base() {
        std::cout << "Base Destructor" << std::endl;
    }

private:
    const int value;
};

class Derived : Base {
public:
    Derived() {
        std::cout << "Derived Constructor" << std::endl;
    }

    explicit Derived(const int x) {
        std::cout << "Derived 1 arg Constructor" << std::endl;
    }

    ~Derived() {
        std::cout << "Derived Destructor" << std::endl;
    }
};

class Derived2 : Base {
public:
    using Base::Base; // Inherit 1 arg constructor

    Derived2() {
        std::cout << "Derived2 Constructor" << std::endl;
    }

    ~Derived2() {
        std::cout << "Derived2 Destructor" << std::endl;
    }
};

int main() {
    const Derived *derived{new Derived};
    // Base Constructor
    // Derived Constructor

    delete derived;
    // Derived Destructor
    // Base Destructor

    const Derived derived1{100};
    // Base Constructor
    // Derived 1 arg Constructor

    const Derived2 derived2{100};
    // Base 1 arg Constructor
}