std::vector<int> numbers = {1, 2, 3, 4, 5};
// Use std::all_of to check if all elements are positive
bool allPositive = std::all_of(numbers.begin(), numbers.end(), [](int n) { return n > 0; });
// Use std::any_of to check if any element is greater than 4
bool anyGreaterThanFour = std::any_of(numbers.begin(), numbers.end(), [](int n) { return n > 4; });
// Use std::none_of to check if no elements are negative
bool noneNegative = std::none_of(numbers.begin(), numbers.end(), [](int n) { return n < 0; });
