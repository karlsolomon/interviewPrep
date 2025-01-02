std::vector<int> numbers = {9, 6, 4, 1, 5, 1, 2, 3};

// Using std::is_heap to check if the numbers vector is a heap
bool isHeap = std::is_heap(numbers.begin(), numbers.end());
// Result: isHeap = true

// Using std::is_heap_until to find the first position where the heap property is violated
auto heapEnd = std::is_heap_until(numbers.begin(), numbers.end());
// Result: heapEnd points to numbers.end(), indicating the entire range is a heap

// Using std::ranges::is_heap to check if the numbers vector is a heap
bool isHeapRanges = std::ranges::is_heap(numbers);
// Result: isHeapRanges = true

// Using std::ranges::is_heap_until to find the first position where the heap property is violated
auto heapEndRanges = std::ranges::is_heap_until(numbers);
// Result: heapEndRanges points to numbers.end(), indicating the entire range is a heap

// Modify the vector to violate the heap property
numbers = {9, 6, 4, 10, 5, 1, 2, 3};

// Re-check using std::is_heap
isHeap = std::is_heap(numbers.begin(), numbers.end());
// Result: isHeap = false

// Re-check using std::is_heap_until
heapEnd = std::is_heap_until(numbers.begin(), numbers.end());
// Result: heapEnd points to numbers.begin() + 3, where the value 10 violates the heap property

// Re-check using std::ranges::is_heap
isHeapRanges = std::ranges::is_heap(numbers);
// Result: isHeapRanges = false

// Re-check using std::ranges::is_heap_until
heapEndRanges = std::ranges::is_heap_until(numbers);
// Result: heapEndRanges points to numbers.begin() + 3, where the value 10 violates the heap property
