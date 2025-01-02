std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
std::vector<int> result(10);

// Using std::reverse to reverse elements in place
std::reverse(numbers.begin(), numbers.end());
// Result: numbers = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}

// Reset numbers for the next example
numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// Using std::reverse_copy to copy reversed elements to result
std::reverse_copy(numbers.begin(), numbers.end(), result.begin());
// Result: result = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}

// Using std::rotate to rotate elements in place
std::rotate(numbers.begin(), numbers.begin() + 3, numbers.end());
// Result: numbers = {4, 5, 6, 7, 8, 9, 10, 1, 2, 3}

// Reset numbers for the next example
numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// Using std::rotate_copy to copy rotated elements to result
std::rotate_copy(numbers.begin(), numbers.begin() + 3, numbers.end(), result.begin());
// Result: result = {4, 5, 6, 7, 8, 9, 10, 1, 2, 3}

// Using std::shift_left to shift elements to the left
std::shift_left(numbers.begin(), numbers.end(), 3);
// Result: numbers = {4, 5, 6, 7, 8, 9, 10, ?, ?, ?} (last elements unspecified)

// Reset numbers for the next example
numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// Using std::shift_right to shift elements to the right
std::shift_right(numbers.begin(), numbers.end(), 3);
// Result: numbers = {?, ?, ?, 1, 2, 3, 4, 5, 6, 7} (first elements unspecified)

// Using std::shuffle to randomly shuffle elements
std::random_device rd;
std::mt19937 g(rd());
std::shuffle(numbers.begin(), numbers.end(), g);
// Result: numbers = {?, ?, ?, ?, ?, ?, ?, ?, ?, ?} (random order)
