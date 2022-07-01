#include <cfloat>
#include <climits>
#include <iostream>

int main() {
    /*
     * DECLARING AND INITIALIZING VARIABLES
     */
    int age1 = 21; // C-like initialization
    int age2(21); // Constructor initialization
    int age3{21}; // C++11 list initialization syntax (RECOMMENDED)

    // example
    int roomWidth{7};
    int roomHeight{2};
    int roomArea{roomWidth * roomHeight};
    std::cout << "The area of the room is " << roomArea << " square feet." << std::endl;

    /*
     * BUILT-IN PRIMITIVE TYPES
     */

    // CHAR
    char chr1{'A'}; // At least 8 bits
    char16_t chr2{'A'}; // At least 16 bits
    char32_t chr3{'A'}; // At least 32 bits
    wchar_t chr4{'A'}; // Can represent the largest available character set

    // INT
    short int1{1}; // At least 16 bits
    int int2{1}; // At least 16 bits
    long int3{1}; // At least 32 bit
    long long int4{1}; // At least 64 bit

    unsigned short int5{1}; // At least 16 bits (only positive)
    unsigned int6{1}; // At least 16 bits (only positive)
    unsigned long int7{1}; // At least 32 bit (only positive)
    unsigned long long int8{1}; // At least 64 bit (only positive)

    // FLOATING-POINT NUMBERS
    float fp1{1.1}; // 7 decimal digits
    double fp2{1.1}; // No less than float / 15 decimal digits
    long double fp3{1.1}; // No less than float / 19 decimal digits

    // BOOLEAN
    bool b1{true}; // Usually 8 bits

    /*
     * SIZEOF OPERATOR
     */
    std::cout << "========================================" << std::endl;

    std::cout << "char: " << sizeof(char) << " bytes." << std::endl;
    std::cout << "int: " << sizeof(int) << " bytes." << std::endl;
    std::cout << "unsigned int: " << sizeof(unsigned) << " bytes." << std::endl;
    std::cout << "short: " << sizeof(short) << " bytes." << std::endl;
    std::cout << "long: " << sizeof(long) << " bytes." << std::endl;
    std::cout << "long long: " << sizeof(long long) << " bytes." << std::endl;

    std::cout << "float: " << sizeof(float) << " bytes." << std::endl;
    std::cout << "double: " << sizeof(double) << " bytes." << std::endl;
    std::cout << "long double: " << sizeof(long double) << " bytes." << std::endl;

    /*
     * CLIMITS AND CFLOAT
     */
    std::cout << "========================================" << std::endl;

    std::cout << "Minimum char value: " << CHAR_MIN << std::endl;
    std::cout << "Minimum int value: " << INT_MIN << std::endl;
    std::cout << "Minimum short value: " << SHRT_MIN << std::endl;
    std::cout << "Minimum long value: " << LONG_MIN << std::endl;
    std::cout << "Minimum long long value: " << LONG_LONG_MIN << std::endl;

    std::cout << "========================================" << std::endl;

    std::cout << "Maximum char value: " << CHAR_MAX << std::endl;
    std::cout << "Maximum int value: " << INT_MAX << std::endl;
    std::cout << "Maximum short value: " << SHRT_MAX << std::endl;
    std::cout << "Maximum long value: " << LONG_MAX << std::endl;
    std::cout << "Maximum long long value: " << LONG_LONG_MAX << std::endl;

    /*
     * CONSTANTS
     */
    const int constantVariable = 30;
    // constantVariable = 2; NOT POSSIBLE

    return 0;
}