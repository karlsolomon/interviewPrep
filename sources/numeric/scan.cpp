std::vector<int> numbers = {1, 2, 3, 4, 5};
std::vector<int> exclusiveScanResult(numbers.size());
std::vector<int> inclusiveScanResult(numbers.size());
std::vector<int> transformExclusiveScanResult(numbers.size());
std::vector<int> transformInclusiveScanResult(numbers.size());

// Using std::exclusive_scan to compute exclusive prefix sums
std::exclusive_scan(numbers.begin(), numbers.end(), exclusiveScanResult.begin(), 0);
// Result: {0, 1, 3, 6, 10}

// Using std::inclusive_scan to compute inclusive prefix sums
std::inclusive_scan(numbers.begin(), numbers.end(), inclusiveScanResult.begin());
// Result: {1, 3, 6, 10, 15}

// Using std::transform_exclusive_scan to compute exclusive prefix sums of squares
std::transform_exclusive_scan(numbers.begin(), numbers.end(), transformExclusiveScanResult.begin(), 0, std::plus<>(),
                              [](int n) { return n * n; });
// Result: {0, 1, 5, 14, 30}

// Using std::transform_inclusive_scan to compute inclusive prefix sums of squares
std::transform_inclusive_scan(numbers.begin(), numbers.end(), transformInclusiveScanResult.begin(), std::plus<>(),
                              [](int n) { return n * n; });
// Result: {1, 5, 14, 30, 55}
