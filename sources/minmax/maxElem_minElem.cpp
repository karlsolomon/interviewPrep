std::vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

// Using std::max_element to find the maximum element in a range
auto maxElement = std::max_element(numbers.begin(), numbers.end());
// Result: *maxElement = 9

// Using std::min_element to find the minimum element in a range
auto minElement = std::min_element(numbers.begin(), numbers.end());
// Result: *minElement = 1

// Using std::ranges::max_element to find the maximum element in a range
auto maxElementRanges = std::ranges::max_element(numbers);
// Result: *maxElementRanges = 9

// Using std::ranges::min_element to find the minimum element in a range
auto minElementRanges = std::ranges::min_element(numbers);
// Result: *minElementRanges = 1
