std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
std::vector<int> result(10);

// Using std::remove to remove all occurrences of 5
auto end_remove = std::remove(numbers.begin(), numbers.end(), 5);
// Result: numbers = {1, 2, 3, 4, 6, 7, 8, 9, 10, ?} (last element unspecified)

// Using std::remove_if to remove all even numbers
auto end_remove_if = std::remove_if(numbers.begin(), numbers.end(), [](int n) { return n % 2 == 0; });
// Result: numbers = {1, 3, 5, 7, 9, ?, ?, ?, ?, ?} (remaining elements unspecified)

// Reset numbers for the next example
numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// Using std::remove_copy to copy elements except 5 to result
auto end_remove_copy = std::remove_copy(numbers.begin(), numbers.end(), result.begin(), 5);
// Result: result = {1, 2, 3, 4, 6, 7, 8, 9, 10, ?} (last element unspecified)

// Using std::remove_copy_if to copy elements except even numbers to result
auto end_remove_copy_if =
    std::remove_copy_if(numbers.begin(), numbers.end(), result.begin(), [](int n) { return n % 2 == 0; });
// Result: result = {1, 3, 5, 7, 9, ?, ?, ?, ?, ?} (remaining elements unspecified)
