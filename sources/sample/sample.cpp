// Create a random number generator
std::random_device rd;
std::mt19937 gen(rd());

// Generate a list of random numbers using std::ranges::generate_random
std::vector<int> random_numbers(10);
std::ranges::generate(random_numbers, [&]() { return gen() % 100; });
// Result: random_numbers = {?, ?, ?, ?, ?, ?, ?, ?, ?, ?} (random integers)

/* NOT YET IMPLEMENTED IN ANY COMPILER, C++26
std::default_random_engine eng;
std::default_random_engine::result_type rs[16]{};
std::ranges::generate_random(rs, eng);
std::cout << std::left;
for (int i{}; auto n : rs) {
    std::cout << std::setw(11) << n << (++i % 4 ? ' ' : '\n');
}
*/

// Create a uniform real distribution between -1.0 and 1.0
std::uniform_real_distribution<double> dist(-1.0, 1.0);

// Generate a list of random real numbers
std::vector<double> real_numbers(20);
std::ranges::generate(real_numbers, [&]() { return dist(gen); });
// Result: real_numbers = {?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?, ?} (random real numbers)

// Sample 5 elements from the real_numbers using std::sample
std::vector<double> sample_result(5);
std::sample(real_numbers.begin(), real_numbers.end(), sample_result.begin(), 5, gen);
// Result: sample_result = {?, ?, ?, ?, ?} (random sample of 5 elements)

// Sample 5 elements from the real_numbers using std::ranges::sample
std::ranges::sample(real_numbers, sample_result.begin(), 5, gen);
// Result: sample_result = {?, ?, ?, ?, ?} (random sample of 5 elements)
