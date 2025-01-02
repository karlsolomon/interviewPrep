// Using std::iota to fill a vector with sequential values
std::vector<int> numbers(10);
std::iota(numbers.begin(), numbers.end(), 1);  // Fills with values starting from 1

// Using std::ranges::iota to fill another vector with sequential values
std::vector<int> moreNumbers(10);
std::ranges::iota(moreNumbers, 11);  // Fills with values starting from 11
