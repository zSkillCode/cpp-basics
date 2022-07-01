#include <iostream>
#include <vector>

using namespace std;

int main() {
    /*
     * IF STATEMENT
     */
    const int age{17};

    if (age >= 18) {
        cout << "You are old enough to vote!" << endl;
    } else if (age >= 16) {
        cout << "You are almost old enough to vote!" << endl;
    } else {
        cout << "You are not old enough to drive or vote!" << endl;
    }
    // You are almost old enough to vote!

    /*
     * SWITCH STATEMENT
     */
    const int day{5};

    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid day" << endl;
    }
    // Friday

    /*
     * CONDITIONAL OPERATOR
     */
    const bool raining{true};

    cout << "It is currently " << (raining ? "" : "not ") << "raining." << endl;

    /*
     * FOR LOOP
     */
    for (int i{0}; i < 10; i++) {
        cout << i;
    }
    // 0123456789
    cout << endl;

    const vector<char> characters{'a', 'e', 'i', 'o', 'u'};
    for (int i{0}; i < characters.size(); i++) {
        cout << characters[i];
    }
    // aeiou
    cout << endl;

    /*
     * RANGE BASED FOR LOOP
     */
    for (auto c: characters) {
        cout << c;
    }
    // aeiou
    cout << endl;

    for (auto num: {3, 5, 7, 1}) {
        cout << num;
    }
    // 3571
    cout << endl;

    /*
     * WHILE LOOP
     */
    int i{1};

    while (i < 10) {
        if (i % 2 == 0) {
            cout << i;
        }
        i++;
    }
    // 2468
    cout << endl;

    /*
     * DO WHILE LOOP
     */
    int j{1};

    do {
        if (j % 2 == 0) {
            cout << j;
        }
        j++;
    } while (j < 10);
    // 2468
    cout << endl;

    /*
     * CONTINUE AND BREAK
     */
    // continue
    for (int i{0}; i < 10; i++) {
        if (i % 2 != 0) {
            continue;
        }
        cout << i;
    }
    // 02468
    cout << endl;

    //break
    for (int i{0}; i < 10; i++) {
        if (i == 4) {
            break;
        }
        cout << i;
    }
    // 0123
    cout << endl;
}