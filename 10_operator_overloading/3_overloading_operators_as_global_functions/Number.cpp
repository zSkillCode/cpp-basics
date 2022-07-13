#include "Number.h"

Number::Number(const int num) : num{num} {}

bool operator==(const Number &lhs, const Number &rhs) {
    return lhs.num == rhs.num;
}

Number operator+(const Number &lhf, const Number &rhs) {
    return lhf.num + rhs.num;
}

Number operator-(const Number &lhf, const Number &rhs) {
    return lhf.num - rhs.num;
}

int Number::getNum() const {
    return this->num;
}