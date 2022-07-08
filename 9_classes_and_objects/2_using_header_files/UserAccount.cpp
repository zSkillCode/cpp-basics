#include "UserAccount.h"

void UserAccount::setBalance(const double amount) {
    this->balance = amount; // this-> is not necessary, but I prefer to use it
}

double UserAccount::getBalance() const {
    return this->balance;
}
