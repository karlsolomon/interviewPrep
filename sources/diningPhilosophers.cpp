#include <chrono>
#include <condition_variable>
#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

class DiningPhilosophers {
 public:
    DiningPhilosophers(int numPhilosophers)
        : numPhilosophers_(numPhilosophers), states_(numPhilosophers, State::THINKING) {}

    void philosopher(int id) {
        while (true) {
            think(id);
            pickUpForks(id);
            eat(id);
            putDownForks(id);
        }
    }

 private:
    enum class State { THINKING, HUNGRY, EATING };

    void think(int id) {
        std::cout << "Philosopher " << id << " is thinking." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }

    void eat(int id) {
        std::cout << "Philosopher " << id << " is eating." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }

    void pickUpForks(int id) {
        std::unique_lock<std::mutex> lock(mutex_);
        states_[id] = State::HUNGRY;
        cond_var_.wait(lock, [this, id] { return canEat(id); });
        states_[id] = State::EATING;
    }

    void putDownForks(int id) {
        std::unique_lock<std::mutex> lock(mutex_);
        states_[id] = State::THINKING;
        cond_var_.notify_all();
    }

    bool canEat(int id) {
        int left = (id + numPhilosophers_ - 1) % numPhilosophers_;
        int right = (id + 1) % numPhilosophers_;
        return states_[id] == State::HUNGRY && states_[left] != State::EATING && states_[right] != State::EATING;
    }

    int numPhilosophers_;
    std::vector<State> states_;
    std::mutex mutex_;
    std::condition_variable cond_var_;
};

int main() {
    const int numPhilosophers = 5;
    DiningPhilosophers diningPhilosophers(numPhilosophers);
    std::vector<std::thread> threads;

    for (int i = 0; i < numPhilosophers; ++i) {
        threads.emplace_back(&DiningPhilosophers::philosopher, &diningPhilosophers, i);
    }

    for (auto& thread : threads) {
        thread.join();
    }

    return 0;
}
