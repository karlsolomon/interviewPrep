std::vector<int> numbers = {1, 2, 2, 3, 4, 4, 4, 5, 6, 6, 7};
std::vector<int> result(11);

// Using std::unique to remove consecutive duplicates in place
auto end_unique = std::unique(numbers.begin(), numbers.end());
// Result: numbers = {1, 2, 3, 4, 5, 6, 7, ?, ?, ?, ?} (remaining elements unspecified)

// Reset numbers for the next example
numbers = {1, 2, 2, 3, 4, 4, 4, 5, 6, 6, 7};

// Using std::unique_copy to copy unique elements to result
auto end_unique_copy = std::unique_copy(numbers.begin(), numbers.end(), result.begin());
// Result: result = {1, 2, 3, 4, 5, 6, 7, ?, ?, ?, ?} (remaining elements unspecified)
