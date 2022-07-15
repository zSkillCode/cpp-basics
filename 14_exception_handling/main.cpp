#include <iostream>
#include <exception>

/*
 * THROWING AN EXCEPTION
 */
void throwException() {
    throw std::exception("YOUR ERROR MESSAGE");
}

int main() {
    /*
     * CATCHING AN EXCEPTION
     */
    try {
        throwException();
    } catch (const std::exception &exception) {
        std::cout << "Exception caught: " << exception.what() << std::endl;
    } catch (...) {
        // Catch all
        std::cout << "Unknown Exception" << std::endl;
    }

    return 0;
}