#pragma once

#include <string>

class Account {
public:
    void changeName(const std::string &newName) const;

    void accessAdminPanel() const;
};
