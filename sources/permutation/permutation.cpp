std::vector<int> numbers = {1, 2, 3};
std::vector<int> otherNumbers = {3, 2, 1};

// Using std::next_permutation to get the next lexicographical permutation
std::next_permutation(numbers.begin(), numbers.end());
// Result: {1, 3, 2}

// Using std::ranges::next_permutation to get the next lexicographical permutation
std::ranges::next_permutation(numbers);
// Result: {2, 1, 3}

// Using std::previous_permutation to get the previous lexicographical permutation
std::previous_permutation(numbers.begin(), numbers.end());
// Result: {1, 3, 2}

// Using std::ranges::previous_permutation to get the previous lexicographical permutation
std::ranges::previous_permutation(numbers);
// Result: {1, 2, 3}

// Using std::is_permutation to check if two sequences are permutations of each other
bool isPermutation = std::is_permutation(numbers.begin(), numbers.end(), otherNumbers.begin());
// Result: true

// Using std::ranges::is_permutation to check if two sequences are permutations of each other
bool isPermutationRanges = std::ranges::is_permutation(numbers, otherNumbers);
// Result: true
