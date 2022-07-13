#include <iostream>
#include <string>

class Base {
public:
    explicit Base(const int x) {
        *this->somePointer = x;
        std::cout << "Base constructor called." << std::endl;
    }

    ~Base() {
        std::cout << "Base destructor called" << std::endl;
        delete this->somePointer;
    }

    Base(const Base &other) : somePointer(new int{*other.somePointer}) {
        std::cout << "Base copy constructor called." << std::endl;
    }

    Base(Base &&source) noexcept: somePointer{source.somePointer} {
        source.somePointer = nullptr;
        std::cout << "Base move constructor called" << std::endl;
    }


    Base &operator=(const Base &rhs) {
        if (this != &rhs) {
            this->somePointer = rhs.somePointer;
        }
        std::cout << "Base assignment operator called" << std::endl;
        return *this;
    }

    Base &operator=(Base &&rhs) noexcept {
        if (this == &rhs) {
            return *this;
        }
        this->somePointer = rhs.somePointer;
        rhs.somePointer = nullptr;
        std::cout << "Base move assignment operator called" << std::endl;
        return *this;
    }

private:
    int *somePointer = new int;
};

/*
 * IMPORTANT:
 * You only need to override all these constructors and operators
 * if you want to change something. If we would not have the
 * cout statement here, we would not have to override them.
 */
class Derived : public Base {
public:
    explicit Derived(const int x) : Base(x) {
        std::cout << "Derived constructor called." << std::endl;
    }

    ~Derived() {
        std::cout << "Derived destructor called" << std::endl;
    }

    Derived(const Derived &other) : Base(other) {
        std::cout << "Derived copy constructor called." << std::endl;
    }

    Derived(Derived &&source) noexcept: Base(std::move(source)) {
        std::cout << "Derived move constructor called" << std::endl;
    }

    Derived &operator=(const Derived &rhs) {
        Base::operator=(rhs);
        std::cout << "Derived assignment operator called" << std::endl;
        return *this;
    }

    Derived &operator=(Derived &&rhs) noexcept {
        Base::operator=(std::move(rhs));
        std::cout << "Derived move assignment operator called" << std::endl;
        return *this;
    }
};

int main() {
    const std::string divider{"---------------------------"};

    Derived derived1{40};
    const Derived derived2{1};
    derived1 = derived2;

    std::cout << divider << std::endl;

    Derived derived3{5};
    derived1 = Derived{3};

    std::cout << divider << std::endl;
}
