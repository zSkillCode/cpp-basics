#include <iostream>
#include <cmath>
#include <vector>
#include <cstddef>
#include <string>

/*
 * FUNCTION PROTOTYPES
 *
 * -> Makes functions callable from other functions
 * defined above
 */
void sayHi();

void printText(std::string text);

std::string getFullName(std::string firstName, std::string lastName);

double cylinderRadius(double radius, double height);

std::string overloadedFunction(int num);

std::string overloadedFunction(std::string str);

void testChangeReference();

void changeReference(std::string &string);

void reverseVector(std::vector <std::string> &vector);

void testReversVector();

void staticTest();

void printHello();

void testInline();


int main() {
    // Function calls
    sayHi(); // Hi
    printText("Hello!"); // Hello!
    std::cout << getFullName("Jonas", "Smith") << std::endl; // Jonas Smith
    std::cout << cylinderRadius(5, 13) << std::endl; // 1021.02
    testChangeReference();
    testReversVector();

    staticTest();
    staticTest();
    staticTest();

    testInline();

    return 0;
}

/*
 * FUNCTION DEFINITIONS
 */
void sayHi() {
    std::cout << "Hi!" << std::endl;
}

void printText(const std::string text) {
    std::cout << text << std::endl;
}

std::string getFullName(const std::string firstName, const std::string lastName) {
    return firstName + " " + lastName;
}

double cylinderRadius(const double radius, const double height) {
    return (atan(1)*4) * std::pow(radius, 2) * height;
}

/*
 * DEFAULT ARGUMENTS
 */
// Prototypes should normally be on top (or in a header file)
double calcCost(double baseCost, double taxRate = 0.06);

double calcCost(const double baseCost, const double taxRate) {
    return baseCost + (baseCost * taxRate);
}

// calcCost(100) -> 106
// calcCost(100, 0.8) -> 180

/*
 * OVERLOADING FUNCTIONS
 */
std::string overloadedFunction(const int num) {
    return "I like ints, especially " + std::to_string(num);
}

std::string overloadedFunction(const std::string str) {
    return "I like strings too, especially " + str;
}

// overloadedFunction(5) -> I like ints, especially 5
// overloadedFunction("ABC") -> I like strings too, especially ABC

/*
 * PASS BY REFERENCE
 *
 * If you change a reference parameter in a function,
 * the actual variable will also change
 */
void changeReference(std::string &string) {
    string = "B";
}

void testChangeReference() {
    std::string str{"A"};

    std::cout << str << std::endl; // A
    changeReference(str);
    std::cout << str << std::endl; // B
}


void reverseVector(std::vector <std::string> &vector) {
    const std::size_t vectorSize = vector.size();
    std::vector <std::string> newVector;
    for (std::size_t i{0}; i < vectorSize; i++) {
        newVector.push_back(vector.at(vectorSize - i - 1));
    }
    vector = newVector;
}

void testReversVector() {
    std::vector <std::string> vector{"A", "B", "C"};
    std::cout << vector.at(0) << vector.at(1) << vector.at(2) << std::endl;  // ABC
    reverseVector(vector);
    std::cout << vector.at(0) << vector.at(1) << vector.at(2) << std::endl; // CBA
}

/*
 * STATIC VARIABLES
 *
 * Static variables will keep their value
 */
void staticTest() {
    static int staticInt{1};
    staticInt++;
    std::cout << staticInt << std::endl;
}
// staticTest() -> 2
// staticTest() -> 3
// staticTest() -> 4

/*
 * INLINE FUNCTIONS
 *
 * The body of inline functions is pasted to all calling functions
 * when the program is compiled. This is useful for small and often
 * used functions.
 */
inline void printHello() {
    std::cout << "Hello!" << std::endl;
}

void testInline() {
    printHello();
}
/*
 * After compilation:
 *
 * void testInline() {
 *     std::cout << "Hello!" << std::endl;
 * }
 *
}
 */

