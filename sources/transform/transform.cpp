#include <algorithm>
#include <execution>
#include <iostream>
#include <vector>

int main() {
    // Original vector
    std::vector<int> l1 = {1, 2, 3, 4, 5};
    std::vector<int> l2 = std::vector<int>(l1.size(), 0);
    std::vector<int> l3 = std::vector<int>(l1.size(), 0);

    // simple transform (1 input, 1 output)
    std::transform(l1.begin(), l1.end(), l2.begin(), [](int a) { return a * 10; });

    // transform (2 inputs, 1 output)
    int multiplier = 2;
    std::transform(std::execution::par_unseq, l1.begin(), l1.end(), l2.begin(), l3.begin(),
                   [multiplier](int a, int b) { return (multiplier * a) + b; });

    return 0;
}
