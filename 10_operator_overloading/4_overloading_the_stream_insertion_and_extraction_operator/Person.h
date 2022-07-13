#pragma once

#include <iostream>
#include <string>

class Person {
    friend std::ostream &operator<<(std::ostream &out, const Person &rhs);

    friend std::istream &operator>>(std::istream &in, Person &rhs);

public:
    Person(std::string name, int age);

private:
    std::string name;
    const int age;
};
