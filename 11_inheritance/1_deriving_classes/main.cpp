#include "Account.h"
#include "AdminAccount.h"

#include <iostream>

int main() {
    const Account account;
    const AdminAccount adminAccount;

    account.changeName("Bob"); // Name changed to: Bob
    account.accessAdminPanel(); // You are not an admin.

    std::cout << "------------------" << std::endl;

    adminAccount.changeName("Bob"); // Name changed to: Bob
    adminAccount.accessAdminPanel(); // You have access to the Admin Panel.
}