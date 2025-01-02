#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

int main() {
    // Basic lambda with no capture
    auto greet = []() { std::cout << "Hello, World!" << std::endl; };
    greet();

    // Lambda with capture by value
    int a = 10;
    auto captureByValue = [a]() { std::cout << "Captured by value: " << a << std::endl; };
    captureByValue();

    // Lambda with capture by reference
    int b = 20;
    auto captureByReference = [&b]() {
        b += 10;
        std::cout << "Captured by reference: " << b << std::endl;
    };
    captureByReference();
    std::cout << "Modified b: " << b << std::endl;

    // Lambda with explicit return type
    auto add = [](int x, int y) -> int { return x + y; };
    std::cout << "Sum: " << add(3, 4) << std::endl;

    // Generic lambda
    auto multiply = [](auto x, auto y) { return x * y; };
    std::cout << "Product: " << multiply(3, 4.5) << std::endl;

    // Lambda with STL algorithms
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::for_each(numbers.begin(), numbers.end(), [](int n) { std::cout << n << " "; });
    std::cout << std::endl;

    // C++23: Deducing 'this' in lambdas
    struct Counter {
        int count = 0;
        auto increment() {
            return [this]() {
                ++count;
                std::cout << "Count: " << count << std::endl;
            };
        }
    };

    Counter counter;
    auto inc = counter.increment();
    inc();
    inc();

    return 0;
}
