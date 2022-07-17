#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>

int main() {
    /*
     * INPUT
     */
    int num{};
    double dNum{};
    std::string name{};

    std::string data{"Bob 153 12.3"};
    std::istringstream iss{data};
    iss >> name >> num >> dNum;

    std::cout << num << " " << dNum << " " << name << std::endl; // 153 12.3 Bob

    /*
     * OUTPUT
     */
    std::ostringstream oss;
    oss << std::setw(10) << std::left << name
        << std::setw(10) << num
        << std::setw(10) << dNum;

    std::cout << oss.str() << std::endl;
    // Bob       153       12.3

    /*
     * DATA VALIDATION
     */
    int value{};
    std::string userInput{};

    std::cout << "Please enter an integer" << std::endl;
    std::cin >> userInput;

    std::istringstream validator{userInput};
    if (validator >> value) {
        std::cout << "Thanks!" << std::endl;
    } else {
        std::cout << "This is not an integer.";
    }
    return 0;
}
