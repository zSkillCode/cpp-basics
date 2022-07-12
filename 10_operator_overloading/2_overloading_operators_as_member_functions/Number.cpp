#include "Number.h"

Number::Number(int num) : num{num} {}

Number Number::operator+(const Number &rhs) const {
    return this->num + rhs.num;
}

Number Number::operator-(const Number &rhs) const {
    return this->num - rhs.num;
}

Number Number::operator*(const Number &rhs) const {
    return this->num * rhs.num;
}

Number Number::operator/(const Number &rhs) const {
    return this->num / rhs.num;
}

Number Number::operator%(const Number &rhs) const {
    return this->num % rhs.num;
}

bool Number::operator==(const Number &rhs) const {
    return this->num == rhs.num;
}

Number Number::operator-() const {
    return this->num * -1;
}

int Number::getNum() const {
    return this->num;
}
