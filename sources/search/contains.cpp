std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// Check if the range contains the value 5
bool containsFive = std::ranges::contains(numbers, 5);
// Check if the range contains the value 11
bool containsEleven = std::ranges::contains(numbers, 11);
// Define a subrange to check
std::vector<int> subrange = {4, 5, 6};
// Check if the range contains the subrange
bool containsSubrange = std::ranges::contains_subrange(numbers, subrange);
// Define another subrange to check
std::vector<int> nonExistentSubrange = {7, 8, 11};
// Check if the range contains the non-existent subrange
bool containsNonExistentSubrange = std::ranges::contains_subrange(numbers, nonExistentSubrange);
