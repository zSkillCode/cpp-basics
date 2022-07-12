#include <iostream>
#include <string>

/*
 * Friending a class or a function allows them to access
 * all private and protected fields of a class.
 */
class VaultManager;

class Vault {
public:
    bool open(const std::string &key) const {
        return key == this->secretKey;
    }

private:
    const std::string secretKey{"4uef2dejg3fvc"};

    friend VaultManager;
};

class VaultManager {
public:
    static bool openVault(const Vault &vault) {
        return vault.open(vault.secretKey); // Note that secretKey is private
    }
};

int main() {
    const Vault vault;
    std::cout << (VaultManager::openVault(vault) ? "Opening vault..." : "Wrong key.") << std::endl;
    // Opening vault... (true)
    return 0;
}
