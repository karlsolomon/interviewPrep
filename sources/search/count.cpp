std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// Using std::count to count occurrences of the number 5
int count_5 = std::count(numbers.begin(), numbers.end(), 5);
// Result: count_5 = 1

// Using std::count_if to count numbers greater than 5
int count_greater_than_5 = std::count_if(numbers.begin(), numbers.end(), [](int n) { return n > 5; });
// Result: count_greater_than_5 = 5

// Using std::ranges::count to count occurrences of the number 5
int ranges_count_5 = std::ranges::count(numbers, 5);
// Result: ranges_count_5 = 1

// Using std::ranges::count_if to count numbers greater than 5
int ranges_count_greater_than_5 = std::ranges::count_if(numbers, [](int n) { return n > 5; });
// Result: ranges_count_greater_than_5 = 5
