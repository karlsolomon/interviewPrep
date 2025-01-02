std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
std::vector<int> result_true(10);
std::vector<int> result_false(10);

// Using std::is_partitioned to check if the range is partitioned
bool is_part = std::is_partitioned(numbers.begin(), numbers.end(), [](int n) { return n % 2 == 0; });
// Result: is_part = false

// Using std::partition to partition the range in place
auto it = std::partition(numbers.begin(), numbers.end(), [](int n) { return n % 2 == 0; });
// Result: numbers = {2, 4, 6, 8, 10, ?, ?, ?, ?, ?} (evens first, order not preserved)

// Using std::partition_copy to partition into two separate ranges
auto [it_true, it_false] = std::partition_copy(numbers.begin(), numbers.end(), result_true.begin(),
                                               result_false.begin(), [](int n) { return n % 2 == 0; });
// Result: result_true = {2, 4, 6, 8, 10, ?, ?, ?, ?, ?} (evens)
// Result: result_false = {1, 3, 5, 7, 9, ?, ?, ?, ?, ?} (odds)

// Reset numbers for the next example
numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// Using std::stable_partition to partition the range while preserving order
auto it_stable = std::stable_partition(numbers.begin(), numbers.end(), [](int n) { return n % 2 == 0; });
// Result: numbers = {2, 4, 6, 8, 10, 1, 3, 5, 7, 9} (evens first, order preserved)

// Using std::partition_point to find the partition point
auto part_point = std::partition_point(numbers.begin(), numbers.end(), [](int n) { return n % 2 == 0; });
// Result: part_point points to the first odd number (1) in the stable partitioned range
