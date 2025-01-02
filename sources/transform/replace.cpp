std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// Using std::replace to replace all occurrences of 5 with 50
std::replace(numbers.begin(), numbers.end(), 5, 50);
// Result: numbers = {1, 2, 3, 4, 50, 6, 7, 8, 9, 10}

// Using std::replace_if to replace all even numbers with 0
std::replace_if(numbers.begin(), numbers.end(), [](int n) { return n % 2 == 0; }, 0);
// Result: numbers = {1, 0, 3, 0, 0, 0, 7, 0, 9, 0}

// Reset the numbers vector for ranges example
numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// Using std::ranges::replace to replace all occurrences of 5 with 50
std::ranges::replace(numbers, 5, 50);
// Result: numbers = {1, 2, 3, 4, 50, 6, 7, 8, 9, 10}

// Using std::ranges::replace_if to replace all even numbers with 0
std::ranges::replace_if(numbers, [](int n) { return n % 2 == 0; }, 0);
// Result: numbers = {1, 0, 3, 0, 0, 0, 7, 0, 9, 0}
