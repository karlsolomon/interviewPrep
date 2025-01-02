#include <execution>  // Required for std::execution::seq
#include <iostream>
#include <numeric>
#include <random>
#include <thread>
#include <vector>

void accumulateRandomNumbers(int threadID) {
    static std::mutex m;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dis(0.0, 1.0);

    std::vector<double> numbers(1024 * 1024);
    for (auto& num : numbers) {
        num = dis(gen);
    }

    double sum = std::reduce(std::execution::seq, numbers.begin(), numbers.end());
    std::lock_guard<std::mutex> lock(m);
    std::cout << "Thread " << threadID << " accumulated sum: " << sum << std::endl;
}

int main() {
    const int numThreads = std::thread::hardware_concurrency();  // Number of threads in the pool
    std::vector<std::thread> threadPool;

    // Create and launch threads
    for (int i = 0; i < numThreads; ++i) {
        threadPool.emplace_back(accumulateRandomNumbers, i);
    }

    // Join threads to the main thread
    for (auto& thread : threadPool) {
        thread.join();
    }

    return 0;
}
