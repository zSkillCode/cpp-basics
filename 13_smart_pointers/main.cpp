#include <iostream>
#include <memory>
#include <string>
#include <vector>

class SomeClass {
public:
    explicit SomeClass(const int data) : data{data} {}

    void display(const std::string &text) const {
        std::cout << text << std::endl;
    }

    int getData() const {
        return this->data;
    }

private:
    const int data;
};

class B;

class A {
public:
    A() {
        std::cout << "A Constructor" << std::endl;
    }

    ~A() {
        std::cout << "A Destructor" << std::endl;
    }

    void setB(const std::shared_ptr<B> &b) {
        this->bPtr = b;
    }

private:
    std::shared_ptr<B> bPtr;
};

class B {
public:
    B() {
        std::cout << "B Constructor" << std::endl;
    }

    ~B() {
        std::cout << "B Destructor" << std::endl;
    }

    void setA(const std::shared_ptr<A> &a) {
        this->aPtr = a;
    }

private:
    std::weak_ptr<A> aPtr;
};

void myDeleter(const SomeClass *rawPointer);

int main() {
    /*
    * UNIQUE POINTER
    *
    * -> Points to an object of type T on the heap
    * -> It is unique - there can only be 1 unique pointer pointing to the object on the heap
    * -> Owns what it points to
    * -> Cannot be assigned or copied
    * -> Can be moved
    * -> When it is destroyed, what it points to is automatically destroyed
    */
    const auto ptr{std::make_unique<SomeClass>(3)};
    ptr->display("ABC"); // ABC
    const SomeClass someClass{*ptr};
    someClass.display("DEF"); // DEF

    std::vector<std::unique_ptr<SomeClass>> vector;
    vector.push_back(std::make_unique<SomeClass>(10));
    vector.push_back(std::make_unique<SomeClass>(20));
    vector.push_back(std::make_unique<SomeClass>(30));

    for (const auto &pointer: vector) {
        std::cout << pointer->getData() << " "; // 10 20 30
    }
    std::cout << std::endl;

    /*
     * SHARED POINTER
     *
     * -> Points to an object of type T on the heap
     * -> It is not unique - there can be many shared pointers pointing to the same object on the heap
     * -> Establishes shared ownership relationship
     * -> Can be assigned and copied
     * -> Can be moved
     * -> Doesn't support managing arrays by default
     * -> When the use count is zero, the managed object on the heap is destroyed
     */
    auto sharedPtr1{std::make_shared<SomeClass>(50)};
    std::cout << sharedPtr1.use_count() << std::endl; // 1

    std::shared_ptr<SomeClass> sharedPtr2{sharedPtr1};
    std::cout << sharedPtr1.use_count() << std::endl; // 2

    sharedPtr1.reset();
    std::cout << sharedPtr1.use_count() << std::endl; // 0

    sharedPtr1->display("Hi"); // Hi

    /*
     * WEAK POINTER
     *
     * -> Points to an object of type T on the heap
     * -> Does not participate in owning relationship
     * -> Always created from a shared pointer
     * -> Does NOT increment or decrement reference use count
     * -> Used to prevent strong reference cycles which could prevent objects from being deleted
     */
    const auto a{std::make_shared<A>()};
    const auto b{std::make_shared<B>()};
    a->setB(b);
    b->setA(a);
    // Replacing B's weak pointer with a shared pointer would cause a memory leak

    /*
     * CUSTOM DELETERS
     *
     * Called when the smart pointer is destroyed
     */
    // Custom deleter function
    const std::shared_ptr<SomeClass> sharedPtr{new SomeClass{10}, myDeleter};
    // Custom deleter lambda
    const std::shared_ptr<SomeClass> lSharedPtr{new SomeClass{10}, [](const SomeClass *someClassPtr) {
        std::cout << "Custom deleter (lambda) called for " << someClassPtr->getData() << std::endl;
    }};
}

void myDeleter(const SomeClass *rawPointer) {
    std::cout << "Custom deleter called" << std::endl;
    delete rawPointer;
}