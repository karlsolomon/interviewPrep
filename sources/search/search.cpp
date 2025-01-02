std::vector<int> numbers = {1, 2, 3, 4, 5, 3, 4, 5, 6, 7};
std::vector<int> pattern = {3, 4, 5};

// Using std::search to find the first occurrence of a subsequence
auto it_search = std::search(numbers.begin(), numbers.end(), pattern.begin(), pattern.end());
// Result: it_search points to the first element of the first occurrence of {3, 4, 5}

// Using std::search_n to find the first occurrence of three consecutive 4s
auto it_search_n = std::search_n(numbers.begin(), numbers.end(), 3, 4);
// Result: it_search_n points to numbers.end() as there are no three consecutive 4s

// Using std::ranges::search to find the first occurrence of a subsequence
auto ranges_it_search = std::ranges::search(numbers, pattern);
// Result: ranges_it_search.begin() points to the first element of the first occurrence of {3, 4, 5}

// Using std::ranges::search_n to find the first occurrence of two consecutive 5s
auto ranges_it_search_n = std::ranges::search_n(numbers, 2, 5);
// Result: ranges_it_search_n.begin() points to numbers.end() as there are no two consecutive 5s
