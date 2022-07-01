#include <iostream>

using namespace std;

int main() {
    /*
     * ASSIGNMENT OPERATOR
     */
    int num1{10};
    const int num2{30};
    num1 = 100; // 100
    num1 = num2; // 30

    /*
     * ARITHMETIC OPERATORS
     */
    const int number1{3};
    const int number2{5};

    cout << 3 + 5 << endl; // 8
    cout << 3 - 5 << endl; // -2
    cout << 3 * 5 << endl; // 15
    cout << 3 / 5 << endl; // 0
    cout << 3 % 5 << endl; // 3

    cout << 3 + 5 * 2 << endl; // 13
    cout << (3 + 5) * 2 << endl; // 16

    /*
     * INCREMENT AND DECREMENT OPERATORS
     */
    // Preincrement and predecrement
    int myNumber{1};

    cout << ++myNumber << endl; // 2
    cout << myNumber << endl; // 2

    cout << --myNumber << endl; // 1
    cout << myNumber << endl; // 1

    // Postincrement and postdecrement
    myNumber = 1;

    cout << myNumber++ << endl; // 1
    cout << myNumber << endl; // 1

    cout << myNumber-- << endl; // 2
    cout << myNumber << endl; // 1

    /*
     * STATIC CAST
     */
    const int someNumber1{5};
    const int someNumber2{2};
    const double quotient{static_cast<double>(someNumber1) / someNumber2};

    cout << quotient << endl; // 2.5

    /*
     * EQUALITY OPERATORS
     */
    cout << boolalpha; // display true/false instead of 0/1

    cout << (4 == 3) << endl; // false
    cout << (3 == 3) << endl; // true
    cout << (34 + 5 == 39) << endl; // true
    cout << ("ABC" == "abc") << endl; // false
    cout << ("ABC" == "ABC") << endl; // true

    cout << (4 != 3) << endl; // true
    cout << (3 != 3) << endl; // false
    cout << (34 + 5 != 39) << endl; // false
    cout << ("ABC" != "abc") << endl; // true
    cout << ("ABC" != "ABC") << endl; // false

    /*
     * RELATIONAL OPERATORS
     */
    cout << (5 > 2) << endl; // true
    cout << (1 > 2) << endl; // false
    cout << (4 < 5) << endl; // true
    cout << (4 < 4) << endl; // false
    cout << (4 <= 4) << endl; // true


    /*
     * LOGICAL OPERATORS
     */
    cout << (!true) << endl; // false
    cout << (!false) << endl; // true

    cout << (true && true) << endl; // true
    cout << (true && false) << endl; // false

    cout << (true || true) << endl; // true
    cout << (true || false) << endl; // true
    cout << (false || false) << endl; // false

    /*
     * COMPOUND ASSIGNMENT OPERATORS
     */
    int a{0};

    a += 2; // a = a + 2;
    a -= 2; // a = a - 2;
    a *= 2; // a = a * 2;
    a /= 2; // a = a / 2;
    a %= 2; // a = a % 2;

    a <<= 2; // a = a << 2;
    a >>= 2; // a = a >> 2;
    a &= 2; // a = a & 2;
    a |= 2; // a = a | 2;
    a ^= 2; // a = a ^ 2;

    return 0;
}