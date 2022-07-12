#include "MyString.h"

#include <cstring>
#include <iostream>

MyString::MyString() : str{new char[1]} {
    *str = '\0';
}

MyString::MyString(const char *s) {
    if (s == nullptr) {
        this->str = new char[1];
        *this->str = '\0';
    } else {
        this->str = new char[std::strlen(s) + 1];
        std::strcpy(str, s);
    }
}

MyString::MyString(const MyString &source) {
    this->str = new char[std::strlen(source.str) + 1];
    std::strcpy(this->str, source.str);
}

MyString::~MyString() {
    delete[] this->str;
}

MyString &MyString::operator=(const MyString &myString) {
    if (this == &myString) {
        return *this;
    }

    delete[] this->str;
    this->str = new char[std::strlen(myString.str) + 1];
    std::strcpy(this->str, myString.str);
    std::cout << "Copy assignment operator called!" << std::endl;
    return *this;
}

MyString &MyString::operator=(MyString &&myString) noexcept {
    if (this == &myString) {
        return *this;
    }

    delete[] this->str;
    this->str = myString.str;
    myString.str = nullptr;
    std::cout << "Move assignment operator called!" << std::endl;
    return *this;
}

void MyString::display() const {
    std::cout << this->str << ":" << this->getLength() << std::endl;
}

int MyString::getLength() const {
    return std::strlen(this->str);
}

const char *MyString::getStr() const {
    return this->str;
}
