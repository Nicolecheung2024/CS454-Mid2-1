#include <iostream>
#include <queue>
#include <stack>

// Function to reverse the order of elements in a queue
void reverseQueue(std::queue<int>& q) {
    std::stack<int> s;

    // Dequeue elements from the queue and push them onto the stack
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    // Pop elements from the stack and enqueue them back into the queue
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

// Function to print the elements of a queue
void printQueue(std::queue<int> q) {
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;
}

int main() {
    std::queue<int> testQueue;
    testQueue.push(1);
    testQueue.push(2);
    testQueue.push(3);
    testQueue.push(4);
    testQueue.push(5);
    testQueue.push(6);

    std::cout << "Original queue: ";
    printQueue(testQueue);

    reverseQueue(testQueue);

    std::cout << "Reversed queue: ";
    printQueue(testQueue);

    return 0;
}
