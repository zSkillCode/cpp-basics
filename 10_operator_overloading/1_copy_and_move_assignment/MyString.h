#pragma once

class MyString {
public:
    MyString();

    MyString(const char *s);

    MyString(const MyString &source);

    ~MyString();

    // We need to overload the assignment operator in order to perform a deep copy
    // instead of a shallow copy. This is only necessary if the class contains raw pointers.
    MyString &operator=(const MyString &rhs); // Copy assignment (NOT CONSTRUCTION!!)
    // It gets called when we assign MyString to an R-value, example:
    // MyString myString{"ABC"}; // this is not an assignment, assignment operator not called
    // myString = otherString; // otherString is an L-value so the copy assignment operator will be called
    // myString = "DEF"; // "DEF" is an R-value so the move assignment operator will be called
    MyString &operator=(MyString &&rhs) noexcept; // Move assignment


    void display() const;

    int getLength() const;

    const char *getStr() const;

private:
    char *str = nullptr;
};
