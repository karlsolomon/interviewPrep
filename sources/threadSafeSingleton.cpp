#include <iostream>
#include <mutex>

class Singleton {
 public:
    // Delete copy constructor and assignment operator to prevent creation of additional instances through copying
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    // Static method to get the instance of the singleton
    static Singleton& getInstance() {
        static Singleton instance;  // Static Local variables are guaranteed to be thread-safe in C++11 and later
        return instance;
    }

    void showMessage() { std::cout << "Singleton instance accessed!" << std::endl; }

 private:
    // Private constructor to prevent instantiation
    Singleton() { std::cout << "Singleton instance created!" << std::endl; }
};

int main() {
    // Access the singleton instance
    Singleton& singleton = Singleton::getInstance();
    singleton.showMessage();

    return 0;
}
