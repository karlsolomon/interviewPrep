std::vector<int> numbers = {1, 2, 3, 4, 5};

// Use std::for_each to print each element
std::for_each(numbers.begin(), numbers.end(), [](int n) { std::cout << n << " "; });

// Use std::for_each_n to print the first 3 elements
std::for_each_n(numbers.begin(), 3, [](int n) { std::cout << n << " "; });

// Use std::ranges::for_each to print each element
std::ranges::for_each(numbers, [](int n) { std::cout << n << " "; });

// Use std::ranges::for_each_n to print the first 3 elements
std::ranges::for_each_n(numbers.begin(), 3, [](int n) { std::cout << n << " "; });
