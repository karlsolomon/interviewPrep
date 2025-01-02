std::vector<int> numbers = {1, 2, 3, 4, 5};
std::vector<int> partialSums(numbers.size());

// Using std::partial_sum to compute the partial sums of the numbers vector
std::partial_sum(numbers.begin(), numbers.end(), partialSums.begin());
// partialSums: [1, 3, 6, 10, 15]
