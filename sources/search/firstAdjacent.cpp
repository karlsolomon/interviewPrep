std::vector<int> numbers = {1, 2, 3, 4, 5, 3, 4, 5, 6, 7};
std::vector<int> pattern = {3, 4, 5};

// Using std::find_end to find the last occurrence of a pattern
auto it_end = std::find_end(numbers.begin(), numbers.end(), pattern.begin(), pattern.end());
// Result: it_end points to the first element of the last occurrence of {3, 4, 5}

// Using std::find_first_of to find the first occurrence of any element from another range
std::vector<int> search_elements = {4, 5, 6};
auto it_first_of = std::find_first_of(numbers.begin(), numbers.end(), search_elements.begin(), search_elements.end());
// Result: it_first_of points to the first occurrence of any element from {4, 5, 6}, which is 4

// Using std::adjacent_find to find the first occurrence of two consecutive equal elements
std::vector<int> numbers_with_adjacent = {1, 2, 3, 3, 4, 5};
auto it_adjacent = std::adjacent_find(numbers_with_adjacent.begin(), numbers_with_adjacent.end());
// Result: it_adjacent points to the first element of the first pair of adjacent equal elements, which is 3
