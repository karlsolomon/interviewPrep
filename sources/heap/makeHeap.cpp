std::vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6};

// Using std::make_heap to create a max-heap from the numbers vector
std::make_heap(numbers.begin(), numbers.end());
// Result: numbers = {9, 6, 4, 1, 5, 1, 2, 3}

// Using std::sort_heap to sort the heap
std::sort_heap(numbers.begin(), numbers.end());
// Result: numbers = {1, 1, 2, 3, 4, 5, 6, 9}

// Reset the numbers vector for ranges example
numbers = {3, 1, 4, 1, 5, 9, 2, 6};

// Using std::ranges::make_heap to create a max-heap from the numbers vector
std::ranges::make_heap(numbers);
// Result: numbers = {9, 6, 4, 1, 5, 1, 2, 3}

// Using std::ranges::sort_heap to sort the heap
std::ranges::sort_heap(numbers);
// Result: numbers = {1, 1, 2, 3, 4, 5, 6, 9}
