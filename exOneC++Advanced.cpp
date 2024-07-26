#include <thread>
#include <iostream>

void task(int id) {
    std::cout << "Thread " << id << " running" << std::endl;
    // ...
}

int main() {
    std::thread tI(task, 1);
    std::thread tII(task, 2);
    tI.join();
    tII.join();
    return 0;
}

