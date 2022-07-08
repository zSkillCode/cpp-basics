#pragma once

class UserAccount {
private:
    double balance{0};
public:
    void setBalance(double amount);

    double getBalance() const;
};