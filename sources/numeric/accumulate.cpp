std::vector<int> numbers = {1, 2, 3, 4, 5};

// Using std::accumulate to sum the elements
int sum = std::accumulate(numbers.begin(), numbers.end(), 0);

// Using std::reduce to sum the elements (C++17)
int sumReduce = std::reduce(std::execution::seq, numbers.begin(), numbers.end(), 0);

// Using std::transform_reduce to compute the sum of squares
int sumOfSquares = std::transform_reduce(numbers.begin(), numbers.end(), 0, std::plus<>(), [](int n) { return n * n; });
