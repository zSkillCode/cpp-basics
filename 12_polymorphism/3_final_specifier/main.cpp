#include <iostream>

class Base final { // It is not possible to create a subclass
    void overrideMePls() const {
        // Empty
    }
};

// class Derived : public Base {}; NOT POSSIBLE because Base is final
class Base2 {
public:
    virtual ~Base2() = default;

    virtual void overrideMe() const {
        std::cout << "BASE2" << std::endl;
    }

    virtual void dontOverrideMe() const final { // This method cannot be overridden
        std::cout << "BASE2FINAL" << std::endl;
    }
};

class Derived : public Base2 {
public:
    void overrideMe() const override {
        std::cout << "DERIVED" << std::endl;
    }

    // Not possible because Base2::dontOverrideMe() is final
    // void dontOverrideMe() const override {}
};

int main() {
    const Base2 base2;
    base2.dontOverrideMe(); // BASE2FINAL
    base2.overrideMe(); // BASE2

    Derived{}.overrideMe(); // DERIVED
}