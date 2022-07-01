#include <iostream>
#include <vector>

using namespace std;

int main() {
    /*
     * ARRAYS
     */
    // Declaring and initializing arrays
    const int array1[5]{24, 43}; // 24, 43, 0, 0, 0
    const int array2[50]{20}; // 20, 0, 0, 0, 0...
    const int array3[]{1, 2, 3, 4, 5}; // 1, 2, 3, 4, 5

    int myArray[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << myArray[0] << endl; // 1
    cout << myArray[4] << endl; // 5
    cout << myArray[9] << endl; // 10

    myArray[0] = 50'000;
    cout << myArray[0] << endl; // 50000

    /*
     * MULTIDIMENSIONAL ARRAYS
     */
    const int matrix[3][4]{
            {1, 2, 3, 4},
            {2, 3, 4, 5},
            {3, 4, 5, 6}
    };

    cout << matrix[1][3] << endl; // 5

    /*
     * VECTORS
     */
    cout << "=======================" << endl;

    const vector<char> vector1{'a', 'e', 'i', 'o', 'u'}; // a, e, i, o, u
    const vector<int> vector2(10, 1); // 1, 1, 1, 1, 1, 1, 1, 1, 1, 1

    cout << vector2.at(3) << endl; // 1
    cout << vector1.at(4) << endl; // u

    vector<char> myVector{'H', 'e', 'l', 'l'}; // Hell
    cout << myVector.size() << endl; // 4
    myVector.push_back('o'); // Hello
    cout << myVector.size() << endl; // 5

    /*
     * MULTIDIMENSIONAL VECTORS
     */
    const vector<vector<int>> matrixVector{
            {1, 2, 3, 4},
            {2, 3, 4, 5},
            {3, 4, 5, 6}
    };

    cout << matrixVector.at(2).at(1) << endl; // 4

    return 0;
}