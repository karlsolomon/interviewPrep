#include <algorithm>
#include <iostream>
#include <ranges>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Use std::find to find the first occurrence of 5
    auto it = std::find(numbers.begin(), numbers.end(), 5);

    // find the first even number
    it = std::find_if(numbers.begin(), numbers.end(), [](int n) { return n % 2 == 0; });
    // find the first odd number
    it = std::find_if_not(numbers.begin(), numbers.end(), [](int n) { return n % 2 == 0; });
    // find the first occurrence of 5
    auto range_it = std::ranges::find(numbers, 5);
    // find the first even number
    range_it = std::ranges::find_if(numbers, [](int n) { return n % 2 == 0; });
    // find the first odd number
    range_it = std::ranges::find_if_not(numbers, [](int n) { return n % 2 == 0; });
}
