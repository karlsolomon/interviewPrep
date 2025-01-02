std::vector<int> numbers = {5, 2, 9, 1, 5, 6};
std::vector<int> result(3);

// Using std::sort to sort the entire range
std::sort(numbers.begin(), numbers.end());
// Result: numbers = {1, 2, 5, 5, 6, 9}

// Reset numbers for the next example
numbers = {5, 2, 9, 1, 5, 6};

// Using std::stable_sort to sort the entire range while preserving order of equal elements
std::stable_sort(numbers.begin(), numbers.end());
// Result: numbers = {1, 2, 5, 5, 6, 9} (order of equal elements preserved)

// Reset numbers for the next example
numbers = {5, 2, 9, 1, 5, 6};

// Using std::partial_sort to sort the first 3 elements
std::partial_sort(numbers.begin(), numbers.begin() + 3, numbers.end());
// Result: numbers = {1, 2, 5, ?, ?, ?} (first 3 elements sorted)

// Reset numbers for the next example
numbers = {5, 2, 9, 1, 5, 6};

// Using std::partial_sort_copy to copy and sort the first 3 elements into result
std::partial_sort_copy(numbers.begin(), numbers.end(), result.begin(), result.end());
// Result: result = {1, 2, 5} (first 3 smallest elements sorted)

// Using std::is_sorted to check if the range is sorted
bool sorted = std::is_sorted(numbers.begin(), numbers.end());
// Result: sorted = false

// Using std::is_sorted_until to find the first unsorted element
auto sorted_until = std::is_sorted_until(numbers.begin(), numbers.end());
// Result: sorted_until points to 9 (first unsorted element)

// Reset numbers for the next example
numbers = {5, 2, 9, 1, 5, 6};

// Using std::nth_element to partially sort such that the nth element is in its sorted position
std::nth_element(numbers.begin(), numbers.begin() + 3, numbers.end());
// Result: numbers = {1, 2, 5, 5, ?, ?} (4th element is in its sorted position)
