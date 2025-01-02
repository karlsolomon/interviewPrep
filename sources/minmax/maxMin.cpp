int a = 10;
int b = 20;

// Using std::max to find the maximum of two values
int maxVal = std::max(a, b);
// Result: maxVal = 20

// Using std::min to find the minimum of two values
int minVal = std::min(a, b);
// Result: minVal = 10

std::vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

// Using std::ranges::max to find the maximum value in a range
int maxInRange = std::ranges::max(numbers);
// Result: maxInRange = 9

// Using std::ranges::min to find the minimum value in a range
int minInRange = std::ranges::min(numbers);
// Result: minInRange = 1
