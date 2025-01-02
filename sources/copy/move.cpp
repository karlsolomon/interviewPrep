std::vector<int> source = {1, 2, 3, 4, 5};
std::vector<int> destination(5);

// Using std::move to transfer elements from source to destination
std::move(source.begin(), source.end(), destination.begin());
// Result: destination = {1, 2, 3, 4, 5}
// Result: source = {?, ?, ?, ?, ?} (unspecified, but valid state)

// Reset source for the next example
source = {6, 7, 8, 9, 10};

// Using std::move_backward to transfer elements from source to destination in reverse order
std::move_backward(source.begin(), source.end(), destination.end());
// Result: destination = {6, 7, 8, 9, 10}
// Result: source = {?, ?, ?, ?, ?} (unspecified, but valid state)
