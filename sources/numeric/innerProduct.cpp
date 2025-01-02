std::vector<int> vector1 = {1, 2, 3};
std::vector<int> vector2 = {4, 5, 6};

// Using std::inner_product to compute the inner product of vector1 and vector2
int result = std::inner_product(vector1.begin(), vector1.end(), vector2.begin(), 0);
// result = 32
