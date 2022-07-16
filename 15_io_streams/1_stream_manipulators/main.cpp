#include <iostream>
#include <iomanip>

int main() {
    /*
     * BOOLEAN
     */
    std::cout << (10 == 10) << std::endl; // 1
    std::cout << (10 == 20) << std::endl; // 0

    std::cout << std::boolalpha;

    std::cout << (10 == 10) << std::endl; // true
    std::cout << (10 == 20) << std::endl; // false

    std::cout << std::noboolalpha;

    std::cout << (10 == 10) << std::endl; // 1
    std::cout << (10 == 20) << std::endl; // 0

    /*
     * INTEGER
     */
    const int num{255};

    std::cout << std::dec << num << std::endl; // 255 (default)
    std::cout << std::hex << num << std::endl; // ff
    std::cout << std::oct << num << std::endl; // 377

    std::cout << std::showbase; // std::noshowbase

    std::cout << std::dec << num << std::endl; // 255
    std::cout << std::hex << num << std::endl; // 0xff
    std::cout << std::oct << num << std::endl; // 0377

    std::cout << std::uppercase; // std::nouppercase

    std::cout << std::hex << num << std::endl; // 0XFF


    std::cout << std::showpos; // std::noshowpos

    std::cout << std::dec << num << std::endl; // +255

    /*
     * FLOATING POINT
     */
    const double dNum{12345678.910};

    // Default precision = 6
    std::cout << std::setprecision(4) << dNum << std::endl; // +1.235E+07
    std::cout << std::setprecision(8) << dNum << std::endl; // +12345679
    std::cout << std::setprecision(20) << dNum << std::endl; // +12345678.910000000149

    std::cout << std::fixed;

    std::cout << std::setprecision(4) << dNum << std::endl; // +12345678.9100
    std::cout << std::setprecision(8) << dNum << std::endl; // +12345678.91000000

    /*
     * ALIGN AND FILL
     */
    std::cout << "A" << std::setw(10) << "B" << "C" << std::endl; // A         BC

    std::cout << std::setfill('-');

    std::cout << "A" << std::setw(10) << "B" << "C" << std::endl; // A---------BC
    std::cout << "A" << std::setw(10) << std::left << "B" << "C" << std::endl; // AB---------C
    return 0;
}