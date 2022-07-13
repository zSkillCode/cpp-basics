#include "Person.h"

#include <utility>

Person::Person(std::string name, int age) : name{std::move(name)}, age{age} {}

std::ostream &operator<<(std::ostream &out, const Person &rhs) {
    return out << rhs.name << " is " << rhs.age << " years old.";
}

std::istream &operator>>(std::istream &in, Person &rhs) {
    in >> rhs.name;
    return in;
}
