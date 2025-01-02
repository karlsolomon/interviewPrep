std::vector<int> numbers(10);
int value = 0;

// Using std::generate to fill the vector with incrementing values starting from 1
std::generate(numbers.begin(), numbers.end(), [&value]() { return ++value; });
// Result: numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

// Reset value for the next example
value = 0;

// Using std::generate_n to fill the first 5 elements with incrementing values starting from 1
std::generate_n(numbers.begin(), 5, [&value]() { return ++value; });
// Result: numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

// Reset value for the next example
value = 0;

// Using std::ranges::generate to fill the vector with incrementing values starting from 1
std::ranges::generate(numbers, [&value]() { return ++value; });
// Result: numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

// Reset value for the next example
value = 0;

// Using std::ranges::generate_n to fill the first 5 elements with incrementing values starting from 1
std::ranges::generate_n(numbers.begin(), 5, [&value]() { return ++value; });
// Result: numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}
