#pragma once

class Move {
public:
    // Constructor
    explicit Move(int data);

    // Copy constructor
    Move(const Move &source);

    // Move constructor
    Move(Move &&source) noexcept;

    // Destructor
    ~Move();

    void setDataValue(int data);

    int getDataValue() const;

private:
    int *data;
};
