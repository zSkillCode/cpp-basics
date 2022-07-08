#include <iostream>
#include "UserAccount.h"

/*
 * USING HEADER FILES
 */
int main() {
    UserAccount userAccount;
    userAccount.setBalance(5'000);
    std::cout << userAccount.getBalance() << std::endl; // 5000
}