#include "Number.h"

Number::Number(int num) : num{num} {}

Number Number::operator+(const Number &otherNum) const {
    return this->num + otherNum.num;
}

Number Number::operator-(const Number &otherNum) const {
    return this->num - otherNum.num;
}

Number Number::operator*(const Number &otherNum) const {
    return this->num * otherNum.num;
}

Number Number::operator/(const Number &otherNum) const {
    return this->num / otherNum.num;
}

Number Number::operator%(const Number &otherNum) const {
    return this->num % otherNum.num;
}

bool Number::operator==(const Number &otherNum) const {
    return this->num == otherNum.num;
}

Number Number::operator-() const {
    return this->num * -1;
}

int Number::getNum() const {
    return this->num;
}
