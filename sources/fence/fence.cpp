std::atomic<int> data(0);
std::atomic<bool> ready(false);

// Memory order: memory_order_relaxed
// Use case: No synchronization or ordering constraints, just atomicity.
// Example: Incrementing a counter where order doesn't matter.
std::atomic<int> counter(0);
std::thread t1([&]() {
    for (int i = 0; i < 1000; ++i) {
        counter.fetch_add(1, std::memory_order_relaxed);
    }
});
std::thread t2([&]() {
    for (int i = 0; i < 1000; ++i) {
        counter.fetch_add(1, std::memory_order_relaxed);
    }
});
t1.join();
t2.join();
// Result: counter = 2000 (order of increments doesn't matter)

// Memory order: memory_order_consume
// Use case: Data dependency ordering, rarely used due to complexity.
// Example: Reading a value that depends on another atomic load.
std::atomic<int*> ptr(nullptr);
int value = 42;
std::thread t3([&]() {
    ptr.store(&value, std::memory_order_release);
    ready.store(true, std::memory_order_release);
});
std::thread t4([&]() {
    while (!ready.load(std::memory_order_consume));
    int* p = ptr.load(std::memory_order_consume);
    if (p) {
        // Use *p
    }
});
t3.join();
t4.join();

// Memory order: memory_order_acquire
// Use case: Ensures that subsequent reads/writes are not moved before the load.
// Example: Reading a flag to ensure data is ready.
std::thread t5([&]() {
    while (!ready.load(std::memory_order_acquire));
    int d = data.load(std::memory_order_acquire);
    // Use d
});

// Memory order: memory_order_release
// Use case: Ensures that all previous writes are visible before the store.
// Example: Writing data before setting a flag.
std::thread t6([&]() {
    data.store(42, std::memory_order_release);
    ready.store(true, std::memory_order_release);
});
t5.join();
t6.join();

// Memory order: memory_order_acq_rel
// Use case: Combines acquire and release semantics.
// Example: Read-modify-write operations where both ordering constraints are needed.
std::atomic<int> shared_data(0);
std::thread t7([&]() { shared_data.fetch_add(1, std::memory_order_acq_rel); });
std::thread t8([&]() { shared_data.fetch_add(1, std::memory_order_acq_rel); });
t7.join();
t8.join();
// Result: shared_data = 2 (ensures correct ordering of operations)

// Memory order: memory_order_seq_cst
// Use case: Provides a single total order of operations, the strongest guarantee.
// Example: When strict ordering is required across threads.
std::atomic<int> seq_data(0);
std::thread t9([&]() { seq_data.store(1, std::memory_order_seq_cst); });
std::thread t10([&]() {
    int x = seq_data.load(std::memory_order_seq_cst);
    // Use x
});
t9.join();
t10.join();
