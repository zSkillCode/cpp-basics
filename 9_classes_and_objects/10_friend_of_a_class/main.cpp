#include <iostream>
#include <string>

/*
 * Friending a class or a function allows them to access
 * all private and protected fields of a class.
 */
class VaultManager;

class Vault {
private:
    const std::string secretKey{"4uef2dejg3fvc"};

    bool open(const std::string &key) const {
        return key == this->secretKey;
    }

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
    // vault.open(); NOT POSSIBLE
    std::cout << std::boolalpha << VaultManager::openVault(vault) << std::endl;
    return 0;
}
