std::vector<int> vec1 = {1, 2, 3, 4, 5};
std::vector<int> vec2 = {1, 2, 3, 4, 5};
std::vector<int> vec3 = {1, 2, 3, 0, 5};

// Using std::equal to check if vec1 and vec2 are equal
bool are_equal_1_2 = std::equal(vec1.begin(), vec1.end(), vec2.begin());
// Result: are_equal_1_2 = true

// Using std::equal to check if vec1 and vec3 are equal
bool are_equal_1_3 = std::equal(vec1.begin(), vec1.end(), vec3.begin());
// Result: are_equal_1_3 = false

// Using std::ranges::equal to check if vec1 and vec2 are equal
bool ranges_are_equal_1_2 = std::ranges::equal(vec1, vec2);
// Result: ranges_are_equal_1_2 = true

// Using std::ranges::equal to check if vec1 and vec3 are equal
bool ranges_are_equal_1_3 = std::ranges::equal(vec1, vec3);
// Result: ranges_are_equal_1_3 = false
