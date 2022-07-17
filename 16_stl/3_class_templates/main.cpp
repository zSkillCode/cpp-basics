#include <iostream>
#include <string>
#include <utility>

template<typename T1, typename T2>
class Pair {
public:
    Pair(const T1 left, const T2 right) : left{left}, right{right} {}

    T1 getLeft() const {
        return left;
    }

    T2 getRight() const {
        return right;
    }
private:
    const T1 left;
    const T2 right;
};

int main() {
    const Pair<int, std::string> pair{5, "Hello!"};
    std::cout << pair.getLeft() << " " << pair.getRight() << std::endl; // 5 Hello!
    return 0;
}