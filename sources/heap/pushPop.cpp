std::vector<int> heap = {3, 1, 4, 1, 5, 9, 2, 6};

// Convert the vector into a heap
std::make_heap(heap.begin(), heap.end());
// Result: heap = {9, 6, 4, 1, 5, 3, 2, 1}

// Using std::push_heap to add a new element and maintain heap property
heap.push_back(7);
std::push_heap(heap.begin(), heap.end());
// Result: heap = {9, 7, 4, 6, 5, 3, 2, 1, 1}

// Using std::pop_heap to remove the largest element and maintain heap property
std::pop_heap(heap.begin(), heap.end());
heap.pop_back();
// Result: heap = {7, 6, 4, 1, 5, 3, 2, 1}

// Using std::ranges::push_heap to add a new element and maintain heap property
heap.push_back(8);
std::ranges::push_heap(heap);
// Result: heap = {8, 7, 4, 6, 5, 3, 2, 1, 1}

// Using std::ranges::pop_heap to remove the largest element and maintain heap property
std::ranges::pop_heap(heap);
heap.pop_back();
// Result: heap = {7, 6, 4, 1, 5, 3, 2, 1}
