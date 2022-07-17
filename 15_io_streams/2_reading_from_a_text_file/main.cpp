#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file{"../15_io_streams/2_reading_from_a_text_file/file.txt"};

    if (!file) {
        std::cerr << "Failed to open file." << std::endl;
        return 1;
    }

    std::string line;
    file >> line;
    std::cout << line << std::endl; // Hello!

    int num;
    double dNum;
    file >> num >> dNum;
    std::cout << num << std::endl; // 100
    std::cout << dNum << std::endl; // 50.3

    while (!file.eof()) {
        file >> line;
        std::cout << line << ", "; // 653, A, Hi, 256,
    }

    file.close();
    return 0;
}