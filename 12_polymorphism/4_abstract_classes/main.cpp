#include <iostream>

class Shape {
public:
    virtual ~Shape() = default;

    /*
     * PURE VIRTUAL FUNCTIONS
     *
     * A pure virtual function (= 0;) makes the
     * class abstract (it cannot be instantiated).
     * All pure virtual functions must be implemented by
     * all subclasses that are not abstract.
     */
    virtual void draw() const = 0;

    virtual void rotate(int deg) const = 0;
};

class Square : public Shape {
public:
    void draw() const override {
        std::cout << "Square drawn." << std::endl;
    }

    void rotate(const int deg) const override {
        std::cout << "Square rotated by " << deg << " degrees." << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Circle drawn." << std::endl;
    }

    void rotate(const int deg) const override {
        std::cout << "Circle rotated by " << deg << " degrees." << std::endl;
    }
};

int main() {
    // const Shape shape; NOT POSSIBLE -> Shape is abstract
    const Square square;
    square.draw(); // Square drawn.
    square.rotate(180); // Square rotated by 180 degrees.

    const Circle circle;
    circle.draw(); // Circle drawn.
    circle.rotate(280); // Circle rotated by 280 degrees.
    return 0;
}