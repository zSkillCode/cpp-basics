#include <iostream>
#include <string>

class Player;

class Account;

class Enemy;


void createObject();

void accessMembers();

void testAccessModifiers();

int main() {
    createObject();
    accessMembers();
    testAccessModifiers();
    return 0;
}

/*
 * DECLARING A SIMPLE CLASS
 */
class Player {
    // Attributes
    const std::string name{"John"};
    const int health{14};
    const int xp{3};
};

/*
 * CREATING AN OBJECT
 */
void createObject() {
    const Player player1; // New instance of Player (automatic memory allocation)
    const Player *const enemy{new Player}; // New instance of Player (dynamic memory allocation)
    delete enemy; // Free allocated memory
}

/*
 * ACCESSING CLASS MEMBERS
 */
class Account {
public:
    std::string name;
    double balance;

    void printData() const {
        std::cout << this->name << " has a balance of $" << this->balance << "." << std::endl;
    }

    void deposit(const double amount) {
        this->balance += amount;
    }
};

void accessMembers() {
    Account account1;
    account1.name = "Jeff";
    account1.balance = 436;
    account1.printData(); // Jeff has a balance of $436.

    Account *const account2{new Account};
    (*account2).name = "Peter"; // Bad way
    account2->name = "Jerry"; // Good way
    account2->balance = 2'300;
    account2->printData(); // Jerry has a balance of $2300.
    account2->deposit(700);
    account2->printData(); // Jerry has a balance of $3000.
    delete account2;
}

/*
 * ACCESS MODIFIERS
 *
 * public: accessible everywhere
 * private: accessible only by members or friends of the class
 * protected: accessible only by members, friends and child classes of the class
 */
class Enemy {
public:
    void printInfo() const {
        std::cout << "The enemy with the id " << this->id<< " has " << this->health << "hp." << std::endl;
    }

private:
    int id{0};
    int health{45};
    const std::string privateString{"This is private"};

    void printPrivateInfo() const {
        std::cout << this->privateString << std::endl;
    }
};

void testAccessModifiers() {
    const Enemy enemy;
    enemy.printInfo();
    // enemy.printPrivateInfo(); NOT WORKING
}