std::vector<int> numbers(10);

// Using std::fill to fill the entire vector with 5
std::fill(numbers.begin(), numbers.end(), 5);
// Result: numbers = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5}

// Using std::fill_n to fill the first 5 elements with 3
std::fill_n(numbers.begin(), 5, 3);
// Result: numbers = {3, 3, 3, 3, 3, 5, 5, 5, 5, 5}

// Using std::ranges::fill to fill the entire vector with 7
std::ranges::fill(numbers, 7);
// Result: numbers = {7, 7, 7, 7, 7, 7, 7, 7, 7, 7}

// Using std::ranges::fill_n to fill the first 5 elements with 9
std::ranges::fill_n(numbers.begin(), 5, 9);
// Result: numbers = {9, 9, 9, 9, 9, 7, 7, 7, 7, 7}
