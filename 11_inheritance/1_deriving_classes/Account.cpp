#include "Account.h"

#include <iostream>

void Account::changeName(const std::string &newName) const {
    std::cout << "Name changed to: " << newName << std::endl;
}

void Account::accessAdminPanel() const {
    std::cout << "You are not an admin." << std::endl;
}
