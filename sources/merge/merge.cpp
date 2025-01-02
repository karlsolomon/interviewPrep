std::vector<int> vec1 = {1, 3, 5, 7};
std::vector<int> vec2 = {2, 4, 6, 8};
std::vector<int> merged(vec1.size() + vec2.size());

// Using std::merge to merge two sorted ranges into a new range
std::merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), merged.begin());
// Result: merged = {1, 2, 3, 4, 5, 6, 7, 8}

// Using std::ranges::merge to merge two sorted ranges into a new range
std::vector<int> mergedRanges(vec1.size() + vec2.size());
std::ranges::merge(vec1, vec2, mergedRanges.begin());
// Result: mergedRanges = {1, 2, 3, 4, 5, 6, 7, 8}

// Using std::inplace_merge to merge two consecutive sorted ranges within a single range
std::vector<int> inplaceVec = {1, 3, 5, 7, 2, 4, 6, 8};
std::inplace_merge(inplaceVec.begin(), inplaceVec.begin() + 4, inplaceVec.end());
// Result: inplaceVec = {1, 2, 3, 4, 5, 6, 7, 8}

// Using std::ranges::inplace_merge to merge two consecutive sorted ranges within a single range
std::vector<int> inplaceVecRanges = {1, 3, 5, 7, 2, 4, 6, 8};
std::ranges::inplace_merge(inplaceVecRanges, inplaceVecRanges.begin() + 4);
// Result: inplaceVecRanges = {1, 2, 3, 4, 5, 6, 7, 8}
