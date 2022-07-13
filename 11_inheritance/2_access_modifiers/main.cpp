#include <iostream>

class Base {
public:
    const int a{0};

    void display() const {
        std::cout << a << "," << b << "," << c << std::endl; // Access to public, private, protected (all)
    }

protected:
    const int b{0};
private:
    const int c{0};
};

class Derived : public Base {
public:
    void display() const {
        std::cout << a << "," << b << std::endl; // Access to public and protected
    }
};

int main() {
    const Derived object;
    std::cout << object.a << std::endl; // Access to public
}