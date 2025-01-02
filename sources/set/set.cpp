std::vector<int> set1 = {1, 2, 3, 4, 5};
std::vector<int> set2 = {4, 5, 6, 7, 8};
std::vector<int> result(10);

// Using std::includes to check if set1 includes all elements of set2
bool includes_result = std::includes(set1.begin(), set1.end(), set2.begin(), set2.end());
// Result: includes_result = false

// Using std::set_union to find the union of set1 and set2
auto union_end = std::set_union(set1.begin(), set1.end(), set2.begin(), set2.end(), result.begin());
// Result: result = {1, 2, 3, 4, 5, 6, 7, 8, ?} (union of set1 and set2)

// Using std::set_intersection to find the intersection of set1 and set2
auto intersection_end = std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), result.begin());
// Result: result = {4, 5, ?, ?, ?, ?, ?, ?, ?, ?} (intersection of set1 and set2)

// Using std::set_difference to find the difference of set1 and set2
auto difference_end = std::set_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), result.begin());
// Result: result = {1, 2, 3, ?, ?, ?, ?, ?, ?, ?} (elements in set1 not in set2)

// Using std::set_symmetric_difference to find the symmetric difference of set1 and set2
auto symmetric_difference_end =
    std::set_symmetric_difference(set1.begin(), set1.end(), set2.begin(), set2.end(), result.begin());
// Result: result = {1, 2, 3, 6, 7, 8, ?, ?, ?, ?} (elements in either set1 or set2 but not both)
