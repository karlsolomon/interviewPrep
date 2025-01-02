int a = 10;
int b = 20;

// Using std::minmax to find the minimum and maximum of two values
auto minmaxPair = std::minmax(a, b);
// Result: minmaxPair.first = 10, minmaxPair.second = 20

std::vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};

// Using std::minmax_element to find the minimum and maximum elements in a range
auto minmaxElements = std::minmax_element(numbers.begin(), numbers.end());
// Result: *minmaxElements.first = 1, *minmaxElements.second = 9

// Using std::ranges::minmax to find the minimum and maximum in a range
auto minmaxRange = std::ranges::minmax(numbers);
// Result: minmaxRange.min = 1, minmaxRange.max = 9

// Using std::ranges::minmax_element to find the minimum and maximum elements in a range
auto minmaxRangeElements = std::ranges::minmax_element(numbers);
// Result: *minmaxRangeElements.min = 1, *minmaxRangeElements.max = 9
//
// TODO (ksolomon): make sure usage is correct. why does minmax return a pair, whereas ranges::minmax return a tuple?
//
