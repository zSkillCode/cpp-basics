#include "Move.h"

#include <iostream>

Move::Move(int data) {
    this->data = new int;
    *this->data = data;
    std::cout << "Constructor for: " << data << std::endl;
}

Move::Move(const Move &source) : Move(*source.data) {
    std::cout << "Copy constructor - deep copy for: " << *this->data << std::endl;
}

Move::Move(Move &&source) noexcept: data{source.data} {
    source.data = nullptr;
    std::cout << "Move constructor - moving resource: " << *this->data << std::endl;
}

Move::~Move() {
    if (this->data != nullptr) {
        std::cout << "Destructor freeing data for: " << *this->data << std::endl;
    } else {
        std::cout << "Destructor freeing data for nullptr" << std::endl;
    }
    delete this->data;
}

void Move::setDataValue(const int data) {
    *this->data = data;
}

int Move::getDataValue() const {
    return *this->data;
}

