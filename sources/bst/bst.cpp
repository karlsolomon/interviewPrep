std::vector<int> numbers = {1, 2, 4, 4, 4, 5, 6, 8, 9};

// Using std::lower_bound to find the first position where 4 can be inserted
auto lb = std::lower_bound(numbers.begin(), numbers.end(), 4);
// Result: lb points to the first 4 in the range

// Using std::upper_bound to find the first position after the last occurrence of 4
auto ub = std::upper_bound(numbers.begin(), numbers.end(), 4);
// Result: ub points to the first element greater than 4 (5 in this case)

// Using std::equal_range to find the range of elements equal to 4
auto [eq_first, eq_last] = std::equal_range(numbers.begin(), numbers.end(), 4);
// Result: eq_first points to the first 4, eq_last points to the first element greater than 4

// Using std::binary_search to check if 4 is present in the range
bool found = std::binary_search(numbers.begin(), numbers.end(), 4);
// Result: found = true

// Using std::binary_search to check if 7 is present in the range
bool not_found = std::binary_search(numbers.begin(), numbers.end(), 7);
// Result: not_found = false
