/*
 * In this program:
 *  Vector Initialization: A `std::vector` is initialized using an initializer list, which provides a concise way to
 * initialize containers with a list of values. Class Constructor: The `MyClass` constructor takes an
 * `std::initializer_list<int>` as a parameter, allowing objects of `MyClass` to be initialized with a list of integers.
 *  Function Parameter: The `printList` function takes an `std::initializer_list<std::string>` as a parameter,
 * demonstrating how initializer lists can be used to pass a variable number of arguments to a function. This program
 * demonstrates the flexibility and convenience of using initializer lists in various contexts in C++.
 */

#include <initializer_list>
#include <iostream>
#include <vector>

class MyClass {
 public:
    MyClass(std::initializer_list<int> list) {
        for (auto elem : list) {
            data_.push_back(elem);
        }
    }

    void print() const {
        for (auto elem : data_) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }

 private:
    std::vector<int> data_;
};

void printList(std::initializer_list<std::string> list) {
    for (const auto& elem : list) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Initializing a vector using an initializer list
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::cout << "Vector elements: ";
    for (int v : vec) {
        std::cout << v << " ";
    }
    std::cout << std::endl;

    // Using initializer list in a class constructor
    MyClass myObject = {10, 20, 30, 40, 50};
    std::cout << "MyClass elements: ";
    myObject.print();

    // Passing an initializer list to a function
    std::cout << "String list: ";
    printList({"Hello", "World", "from", "initializer", "list"});

    return 0;
}
