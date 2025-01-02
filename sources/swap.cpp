// Demonstrate std::swap
int a = 10, b = 20;
// Before swap: a = 10, b = 20
std::swap(a, b);
// After swap: a = 20, b = 10

// Demonstrate std::swap_ranges
std::vector<int> vec1 = {1, 2, 3, 4, 5};
std::vector<int> vec2 = {6, 7, 8, 9, 10};
// Before swap_ranges: vec1 = 1 2 3 4 5, vec2 = 6 7 8 9 10

std::swap_ranges(vec1.begin(), vec1.end(), vec2.begin());
// After swap_ranges: vec1 = 6 7 8 9 10, vec2 = 1 2 3 4 5

// Demonstrate std::ranges::swap_ranges
std::vector<int> vec3 = {11, 12, 13, 14, 15};
std::vector<int> vec4 = {16, 17, 18, 19, 20};
// Before ranges::swap_ranges: vec3 = 11 12 13 14 15, vec4 = 16 17 18 19 20

std::ranges::swap_ranges(vec3, vec4);
// After ranges::swap_ranges: vec3 = 16 17 18 19 20, vec4 = 11 12 13 14 15

// Demonstrate std::iter_swap
std::vector<int> vec5 = {21, 22, 23, 24, 25};
// Before iter_swap: vec5 = 21 22 23 24 25

std::iter_swap(vec5.begin(), vec5.begin() + 4);
// After iter_swap: vec5 = 25 22 23 24 21
