#include <iostream>

class IPrintable {
    friend std::ostream &operator<<(std::ostream &os, const IPrintable &obj);

public:
    virtual ~IPrintable() = default;

private:
    virtual void print(std::ostream &os) const = 0;
};

std::ostream &operator<<(std::ostream &os, const IPrintable &obj) {
    obj.print(os);
    return os;
}

class SomeClass : public IPrintable {
private:
    void print(std::ostream &os) const override {
        os << "SomeClass" << std::endl;
    }
};

int main() {
    const SomeClass someClass;
    std::cout << someClass; // SomeClass
    return 0;
}