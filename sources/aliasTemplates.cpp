#include <iostream>
#include <map>
#include <string>
#include <vector>

// Alias template for a vector of a specific type
template <typename T>
using Vector = std::vector<T>;

// Alias template for a map with string keys and a specific value type
template <typename V>
using StringMap = std::map<std::string, V>;

int main() {
    // Using the alias template for a vector of integers
    Vector<int> intVector = {1, 2, 3, 4, 5};
    std::cout << "Vector of integers: ";
    for (const auto& elem : intVector) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Using the alias template for a map with string keys and integer values
    StringMap<int> ageMap = {{"Alice", 30}, {"Bob", 25}, {"Charlie", 35}};
    std::cout << "Map of ages: ";
    for (const auto& pair : ageMap) {
        std::cout << pair.first << ": " << pair.second << " ";
    }
    std::cout << std::endl;

    return 0;
}
