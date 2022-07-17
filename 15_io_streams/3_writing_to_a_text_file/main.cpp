#include <iostream>
#include <fstream>
#include <string>
#include <vector>

int main() {
    const std::vector<std::string> lines{"Line 1", "Line 2", "Another line", "This is a text", "X"};
    std::ofstream file{"../15_io_streams/3_writing_to_a_text_file/file.txt"};

    if (!file) {
        std::cerr << "Failed to create file" << std::endl;
        return 1;
    }

    for (const auto &line: lines) {
        file << line << std::endl;
    }

    file.close();
    return 0;
}