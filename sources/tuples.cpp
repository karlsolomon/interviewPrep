#include <iostream>
#include <string>
#include <tuple>

int main() {
    // Create a tuple with different types
    std::tuple<int, std::string, double> person = std::make_tuple(25, "Alice", 68.5);

    // Access elements of the tuple using std::get
    int age = std::get<0>(person);
    std::string name = std::get<1>(person);
    double weight = std::get<2>(person);

    // Modify elements of the tuple
    std::get<0>(person) = 30;
    std::get<2>(person) = 70.0;
    // Use std::tie to unpack tuple into variables
    int newAge;
    std::string newName;
    double newWeight;
    std::tie(newAge, newName, newWeight) = person;

    std::cout << "Unpacked Name: " << newName << ", Unpacked Age: " << newAge << ", Unpacked Weight: " << newWeight
              << std::endl;

    // Use std::ignore to unpack only specific elements
    std::tie(std::ignore, newName, std::ignore) = person;
    std::cout << "Unpacked Name with ignore: " << newName << std::endl;

    return 0;
}
