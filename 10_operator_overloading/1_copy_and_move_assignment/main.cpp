#include "MyString.h"

#include <iostream>

bool isDeepCopy(const char *chr1, const char *chr2);

int main() {
    MyString myString1{"Hi!"};
    const MyString myString2{"Hello"};

    myString1 = myString2; // Copy assignment operator called (DEEP COPY PERFORMED)
    myString1.display(); // Hello:5

    myString1 = "Hey!"; // Move assignment operator called!
    myString1.display(); // Hey!:4
    return 0;
}