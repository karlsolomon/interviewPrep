#include <algorithm>
#include <iostream>
#include <ranges>
#include <vector>

std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 5, 6, 7};

// find the last occurrence of 5
auto lastFive = std::ranges::find_last(numbers, 5);
// find the last even number
auto lastEven = std::ranges::find_last_if(numbers, [](int n) { return n % 2 == 0; });
// find the last odd number
auto lastOdd = std::ranges::find_last_if_not(numbers, [](int n) { return n % 2 == 0; });

// Define a subrange to find
std::vector<int> subrange = {5, 6, 7};

// find the last occurrence of the subrange
auto lastSubrange = std::find_end(numbers.begin(), numbers.end(), subrange.begin(), subrange.end());

// find the last occurrence of the subrange
auto lastSubrangeRange = std::ranges::find_end(numbers, subrange);
