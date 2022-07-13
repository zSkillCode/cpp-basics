#pragma once

class Number {
    friend bool operator==(const Number &lhs, const Number &rhs);

    friend Number operator+(const Number &lhf, const Number &rhs);

    friend Number operator-(const Number &lhf, const Number &rhs);

public:
    Number(int num);

    int getNum() const;

private:
    int num;
};
