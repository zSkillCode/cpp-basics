#include <iostream>
#include <vector>
#include <cstddef>
#include <string>

void doubleData(int *intPointer);

void displayVector(const std::vector <std::string> *vec);

const int *max(const int *intPointer1, const int *intPointer2);

int *createArray(std::size_t size, int initValue = 0);

int main() {
    /*
     * DECLARING POINTERS
     */
    const int *const nullPointer{nullptr}; // Points nowhere

    const int num{0};
    const int *const numAddress{&num}; // Address of num
    std::cout << numAddress << std::endl; // 0x...
    std::cout << nullPointer << std::endl; // 0

    /*
     * DEREFERENCING POINTERS
     */
    const int myNum{245};
    const int *const myNumPtr{&myNum};
    const int myNumValue{*myNumPtr};
    std::cout << myNumValue << std::endl; // 245


    /*
     * DYNAMIC MEMORY ALLOCATION
     */
    const int *const intPointer{new int}; // Allocate an integer on the heap

    std::cout << *intPointer << std::endl; // Garbage data
    delete intPointer; // Frees the allocated storage

    /*
     * RELATIONSHIP BETWEEN POINTERS AND ARRAYS
     */
    // IMPORTANT: The value of an array is the address of its first element.
    const int scores[]{50, 100, 150};

    std::cout << scores << std::endl; // 0x... (address of the first element)
    std::cout << *scores << std::endl; // 50 (dereferenced pointer)

    const int *const scorePointer{scores};

    std::cout << scorePointer << std::endl; // 0x... (address of the first element)
    std::cout << *scorePointer << std::endl; // 50 (dereferenced pointer)

    std::cout << scorePointer[0] << std::endl; // 50
    std::cout << scorePointer[1] << std::endl; // 100
    std::cout << scorePointer[2] << std::endl; // 150


    std::cout << (scorePointer + 1) << std::endl; // 0xce6b9ff730
    std::cout << (scorePointer + 2) << std::endl; // 0xce6b9ff734

    std::cout << *(scorePointer + 1) << std::endl; // 100
    std::cout << *(scorePointer + 2) << std::endl; // 150

    const std::string myString{"ABC"};
    std::cout << (&myString + 1) << std::endl;

    /*
     * POINTER ARITHMETIC
     */
    // ++ (and --)
    int array[]{100, 200, 300};
    const int *arrayPointer{array};

    std::cout << arrayPointer << std::endl; // 0xa1107ff7e4
    std::cout << *arrayPointer << std::endl; // 100

    arrayPointer++;
    std::cout << arrayPointer << std::endl; // 0xa1107ff7e8
    std::cout << *arrayPointer << std::endl; // 200

    arrayPointer++;
    std::cout << arrayPointer << std::endl; // 0xa1107ff7ec
    std::cout << *arrayPointer << std::endl; // 300

    arrayPointer--;
    std::cout << arrayPointer << std::endl; // 0xa1107ff7e8
    std::cout << *arrayPointer << std::endl; // 200

    // Comparing pointers
    const std::string s1{"ABC"};
    const std::string s2{"ABC"};

    const std::string *p1{&s1};
    const std::string *p2{&s2};
    const std::string *p3{&s1};

    std::cout << std::boolalpha;
    std::cout << (p1 == p2) << std::endl; // false
    std::cout << (p1 == p3) << std::endl;

    // Subtracting two pointers
    const std::string apple{"APPLE"};

    const char *const charPointer1{&apple[0]};
    const char *const charPointer2{&apple[3]};

    std::cout << (charPointer2 - charPointer1) << std::endl; // 3 (distance between A and L)

    /*
     * CONST AND POINTERS
     */
    std::string myStr{"Hello!"};
    std::string myOtherStr{"Hi"};

    // 1: The pointer and the dereferenced pointer can be changed
    std::string *ptr1{&myStr};
    ptr1 = &myOtherStr;
    *ptr1 = "ABC";

    // 2: Only the pointer can be changed
    const std::string *ptr2{&myStr};
    ptr2 = &myOtherStr;

    // 3: Only the dereferenced pointer can be changed
    std::string *const ptr3{&myStr};
    *ptr3 = "ABC";

    // 4: Nothing can be changed
    const std::string *const ptr4{&myStr};

    /*
     * PASSING POINTERS TO FUNCTIONS
     */
    // THE FUNCTIONS ARE UNDER THE MAIN FUNCTION
    int someNumber{5};
    doubleData(&someNumber);
    std::cout << someNumber << std::endl; // 10

    const std::vector <std::string> stringVector{"John", "Michael", "Stephen"};
    displayVector(&stringVector); // John Michael Stephen

    /*
     * RETURNING POINTERS FROM FUNCTIONS
     */
    // THE FUNCTIONS ARE UNDER THE MAIN FUNCTION
    const int number1{4};
    const int number2{10};

    std::cout << *max(&number1, &number2) << std::endl; // 10

    const std::size_t size = 5;
    const int *const myArray = createArray(size, 3);
    for (std::size_t i{0}; i < size; i++) {
        std::cout << myArray[i] << " ";
    }
    // 3 3 3 3 3
    std::cout << std::endl;
    delete[] myArray;

    /*
     * REFERENCES
     */
    std::vector <std::string> names{"Thomas", "Jonas", "Frank"};
    // WITHOUT USING REFERENCES
    for (auto name: names) {
        name = "A";
    }

    for (const auto name: names) {
        std::cout << name << " ";
    }
    // Thomas Jonas Frank
    std::cout << std::endl;
    // USING REFERENCES
    for (auto &name: names) {
        name = "A";
    }

    for (const auto &name: names) {
        std::cout << name << " ";
    }
    // A A A
    std::cout << std::endl;


    int myInt{6};
    const int &myIntRef{myInt};

    myInt = 100;
    std::cout << myInt << std::endl; // 100
    std::cout << myIntRef << std::endl; // 100

    return 0;
}


/*
* PASSING POINTERS TO FUNCTIONS
*/
void doubleData(int *const intPointer) {
    *intPointer *= 2;
}

void displayVector(const std::vector <std::string> *const vec) {
    for (const auto &str: *vec) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
}

/*
* RETURNING POINTERS FROM FUNCTIONS
*/
const int *max(const int *const intPointer1, const int *const intPointer2) {
    return (*intPointer1 > *intPointer2) ? intPointer1 : intPointer2;
}

int *createArray(const std::size_t size, const int initValue) {
    int *const newStorage{new int[size]};
    for (std::size_t i{0}; i < size; i++) {
        newStorage[i] = initValue;
    }
    return newStorage;
}