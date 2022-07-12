#pragma once

class Number {
public:
    Number(int num);

    Number operator+(const Number &rhs) const;

    Number operator-(const Number &rhs) const; // Number - Number

    Number operator*(const Number &rhs) const;

    Number operator/(const Number &rhs) const;

    Number operator%(const Number &rhs) const;

    bool operator==(const Number &rhs) const;

    Number operator-() const; // -Number (e.g -4, -2)

    int getNum() const;

private:
    int num;
};
