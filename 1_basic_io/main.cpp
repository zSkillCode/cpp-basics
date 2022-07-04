// Single line comment

/*
 * Multi
 * line
 * comment
 */

#include <iostream>

// This should normally NOT be used
using namespace std;

int main() {
    /*
     * PRINTING
     */
    std::cout << "Hi" << endl; // without "using namespace std;"

    cout << "What's ";
    cout << "up?" << endl;

    cout << "How " << "are " << "you?" << endl;

    /*
     * USER INPUTS
     */
    int favNum;
    cout << "Enter your favorite number" << endl;
    cin >> favNum;
    cout << "Your favorite number is " << favNum << endl;
    return 0;
}
