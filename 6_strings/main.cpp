#include <iostream>
#include <cstring>
#include <string>
#include <cstddef>

using namespace std;

int main() {
    /*
     * C-STYLE STRINGS
     */
    char str[20]{"ABC"}; // ABC
    // copy
    strcpy(str, "Hello"); // Hello
    // concat
    strcat(str, " there!"); // Hello there!
    // get length
    cout << strlen(str) << endl; // 12
    // compare
    cout << strcmp(str, "Hello there!") << endl; // 0

    for (size_t i{0}; i < strlen(str); i++) {
        const char c{str[i]};
        if (isupper(c)) {
            cout << static_cast<char>(tolower(c)) << endl;
        }
    }
    // h

    /*
     * C++ STRINGS
     */
    // Initialization
    const string myString1{"Apple"}; // Apple
    const string myString2{"Banana"}; // Banana
    const string myString3{"Kiwi"}; // Kiwi
    const string myString4{"apple"}; // apple

    const string myString5{myString1}; // Apple
    const string myString6{myString1, 0, 3}; // App
    const string myString7(10, 'X'); // XXXXXXXXXX

    // Comparison
    cout << boolalpha;
    cout << (myString1 == myString5) << endl; // true  Apple == Apple
    cout << (myString1 == myString2) << endl; // false  Apple != Banana
    cout << (myString1 == myString4) << endl; // false  Apple != apple
    cout << (myString1 != myString2) << endl; // true  Apple != Banana
    cout << (myString1 < myString2) << endl; // true  Apple < Banana
    cout << (myString2 < myString3) << endl; // true  Banana > Kiwi

    // Assignment
    string s1{"AB"};
    s1.at(0) = 'X';
    s1[1] = 'Y'; // There is no difference between .at() and []

    cout << s1 << endl; // XY

    // Concatenation
    const string str1{"ABC"};
    const string str2{"DEF"};
    const string str3{"GHI"};

    const string str4{str1 + str2 + str3};
    cout << str4 << endl; // ABCDEFGHI

    // Looping
    const string someString{"Hello there!"};
    // For loop
    for (size_t i{0}; i < someString.length(); i++) {
        cout << someString.at(i);
    }
    cout << endl;

    // Range-based for loop
    for (auto c: someString) {
        cout << c;
    }
    cout << endl;

    // Substring
    string anotherString{"I'm a cool string!"};

    cout << anotherString.substr(0, 3) << endl; // I'm
    cout << anotherString.substr(4, 1) << endl; // a
    cout << anotherString.substr(6, 4) << endl; // cool
    cout << anotherString.substr(11, 7) << endl; // string!

    // Erase
    anotherString.erase(3, 2); // a
    anotherString.erase(8, 7); // string

    cout << anotherString << endl; // I'm cool!

    // Find
    const string someNewString{"Hello, what's up?"};
    const size_t position{someNewString.find("what's")}; // 7
    const size_t position2{someNewString.find("ABC")}; // string::npos


    return 0;
}