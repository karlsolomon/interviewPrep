std::vector<int> numbers = {1, 2, 3, 4, 5};
std::vector<int> prefix = {1, 2};
std::vector<int> suffix = {4, 5};
std::vector<int> non_prefix = {2, 3};
std::vector<int> non_suffix = {3, 4};

// Using std::ranges::starts_with to check if numbers starts with prefix
bool starts_with_prefix = std::ranges::starts_with(numbers, prefix);
// Result: starts_with_prefix = true

// Using std::ranges::starts_with to check if numbers starts with non_prefix
bool starts_with_non_prefix = std::ranges::starts_with(numbers, non_prefix);
// Result: starts_with_non_prefix = false

// Using std::ranges::ends_with to check if numbers ends with suffix
bool ends_with_suffix = std::ranges::ends_with(numbers, suffix);
// Result: ends_with_suffix = true

// Using std::ranges::ends_with to check if numbers ends with non_suffix
bool ends_with_non_suffix = std::ranges::ends_with(numbers, non_suffix);
// Result: ends_with_non_suffix = false
