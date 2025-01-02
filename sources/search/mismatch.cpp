std::vector<int> vec1 = {1, 2, 3, 4, 5};
std::vector<int> vec2 = {1, 2, 0, 4, 5};

// Using std::mismatch to find the first position where vec1 and vec2 differ
auto mismatch_pair = std::mismatch(vec1.begin(), vec1.end(), vec2.begin());
// Result: mismatch_pair.first points to 3 in vec1, mismatch_pair.second points to 0 in vec2

// Using std::ranges::mismatch to find the first position where vec1 and vec2 differ
auto ranges_mismatch_pair = std::ranges::mismatch(vec1, vec2);
// Result: ranges_mismatch_pair.in1 points to 3 in vec1, ranges_mismatch_pair.in2 points to 0 in vec2
