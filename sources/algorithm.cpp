std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// std::for_each: Apply a function to each element
std::for_each(numbers.begin(), numbers.end(), [](int &n) { n *= 2; });
// Result: numbers = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20}

// std::find: Find the first occurrence of a value
auto it = std::find(numbers.begin(), numbers.end(), 10);
// Result: it points to the element with value 10

// std::sort: Sort the elements
std::sort(numbers.begin(), numbers.end(), std::greater<int>());
// Result: numbers = {20, 18, 16, 14, 12, 10, 8, 6, 4, 2}

// std::reverse: Reverse the order of elements
std::reverse(numbers.begin(), numbers.end());
// Result: numbers = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20}

// std::accumulate: Sum of elements
int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
// Result: sum = 110

// std::count: Count occurrences of a value
int count = std::count(numbers.begin(), numbers.end(), 10);
// Result: count = 1

// std::unique: Remove consecutive duplicates
auto last = std::unique(numbers.begin(), numbers.end());
numbers.erase(last, numbers.end());
// Result: numbers = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20}

// std::iota: Fill with sequentially increasing values
std::iota(numbers.begin(), numbers.end(), 1);
// Result: numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}

// std::binary_search: Check if a value exists
bool found = std::binary_search(numbers.begin(), numbers.end(), 5);
// Result: found = true

// std::lower_bound: Find the first position where a value can be inserted
auto lower = std::lower_bound(numbers.begin(), numbers.end(), 5);
// Result: lower points to the element with value 5

// std::upper_bound: Find the last position where a value can be inserted
auto upper = std::upper_bound(numbers.begin(), numbers.end(), 5);
// Result: upper points to the element after the last occurrence of 5
}
