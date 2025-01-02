std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
std::vector<int> result(numbers.size());

// Using std::replace_copy to copy elements and replace 5 with 50
std::replace_copy(numbers.begin(), numbers.end(), result.begin(), 5, 50);
// Result: result = {1, 2, 3, 4, 50, 6, 7, 8, 9, 10}

// Using std::replace_copy_if to copy elements and replace even numbers with 0
std::replace_copy_if(numbers.begin(), numbers.end(), result.begin(), [](int n) { return n % 2 == 0; }, 0);
// Result: result = {1, 0, 3, 0, 5, 0, 7, 0, 9, 0}

// Using std::ranges::replace_copy to copy elements and replace 5 with 50
std::ranges::replace_copy(numbers, result.begin(), 5, 50);
// Result: result = {1, 2, 3, 4, 50, 6, 7, 8, 9, 10}

// Using std::ranges::replace_copy_if to copy elements and replace even numbers with 0
std::ranges::replace_copy_if(numbers, result.begin(), [](int n) { return n % 2 == 0; }, 0);
// Result: result = {1, 0, 3, 0, 5, 0, 7, 0, 9, 0}
