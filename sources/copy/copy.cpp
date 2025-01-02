std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
std::vector<int> result(10);

// Using std::copy to copy all elements
std::copy(numbers.begin(), numbers.end(), result.begin());
// Result: result = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

// Using std::copy_if to copy only even numbers
auto it = std::copy_if(numbers.begin(), numbers.end(), result.begin(), [](int n) { return n % 2 == 0; });
// Result: result = {2, 4, 6, 8, 10, ?, ?, ?, ?, ?} (remaining elements are unspecified)

// Using std::ranges::copy to copy all elements
std::ranges::copy(numbers, result.begin());
// Result: result = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

// Using std::ranges::copy_if to copy only even numbers
it = std::ranges::copy_if(numbers, result.begin(), [](int n) { return n % 2 == 0; });
// Result: result = {2, 4, 6, 8, 10, ?, ?, ?, ?, ?} (remaining elements are unspecified)

// Using std::copy_n to copy the first 5 elements
std::copy_n(numbers.begin(), 5, result.begin());
// Result: result = {1, 2, 3, 4, 5, ?, ?, ?, ?, ?} (remaining elements are unspecified)

// Using std::ranges::copy_n to copy the first 5 elements
std::ranges::copy_n(numbers.begin(), 5, result.begin());
// Result: result = {1, 2, 3, 4, 5, ?, ?, ?, ?, ?} (remaining elements are unspecified)

// Using std::copy_backward to copy elements in reverse order
std::copy_backward(numbers.begin(), numbers.end(), result.end());
// Result: result = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

// Using std::ranges::copy_backward to copy elements in reverse order
std::ranges::copy_backward(numbers, result.end());
// Result: result = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
