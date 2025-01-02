#include <chrono>
#include <condition_variable>
#include <iostream>
#include <mutex>
#include <queue>
#include <thread>

class ThreadSafeQueue {
 public:
    void enqueue(int item) {
        std::lock_guard<std::mutex> lock(mutex_);
        queue_.push(item);
        cond_var_.notify_one();
    }

    int dequeue() {
        std::unique_lock<std::mutex> lock(mutex_);
        cond_var_.wait(lock, [this] { return !queue_.empty(); });
        int item = queue_.front();
        queue_.pop();
        return item;
    }

 private:
    std::queue<int> queue_;
    std::mutex mutex_;
    std::condition_variable cond_var_;
};

void producer(ThreadSafeQueue& queue, int numItems) {
    for (int i = 0; i < numItems; ++i) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));  // Simulate work
        queue.enqueue(i);
        std::cout << "Produced: " << i << std::endl;
    }
}

void consumer(ThreadSafeQueue& queue, int numItems) {
    for (int i = 0; i < numItems; ++i) {
        int item = queue.dequeue();
        std::cout << "Consumed: " << item << std::endl;
    }
}

int main() {
    ThreadSafeQueue queue;
    const int numItems = 10;

    std::thread producerThread(producer, std::ref(queue), numItems);
    std::thread consumerThread(consumer, std::ref(queue), numItems);

    producerThread.join();
    consumerThread.join();

    return 0;
}
