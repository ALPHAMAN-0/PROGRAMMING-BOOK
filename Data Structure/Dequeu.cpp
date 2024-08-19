#include <iostream>
#include <deque>

using namespace std;

class Dequeue {
private:
    deque<int> dq;

public:
    // Add an element to the front
    void enqueueFront(int value) {
        dq.push_front(value);
    }

    // Add an element to the back
    void enqueueBack(int value) {
        dq.push_back(value);
    }

    // Remove an element from the front
    int dequeueFront() {
        if (isEmpty()) {
            cerr << "Dequeue underflow: No elements to dequeue from front." << endl;
            return -1;
        }
        int frontValue = dq.front();
        dq.pop_front();
        return frontValue;
    }

    // Remove an element from the back
    int dequeueBack() {
        if (isEmpty()) {
            cerr << "Dequeue underflow: No elements to dequeue from back." << endl;
            return -1;
        }
        int backValue = dq.back();
        dq.pop_back();
        return backValue;
    }

    // Return the front element
    int front() const {
        if (isEmpty()) {
            cerr << "Dequeue is empty: No front element." << endl;
            return -1;
        }
        return dq.front();
    }

    // Return the back element
    int back() const {
        if (isEmpty()) {
            cerr << "Dequeue is empty: No back element." << endl;
            return -1;
        }
        return dq.back();
    }

    // Check if the dequeue is empty
    bool isEmpty() const {
        return dq.empty();
    }

    // Return the number of elements in the dequeue
    int size() const {
        return dq.size();
    }

    // Display all elements in the dequeue
    void display() const {
        if (isEmpty()) {
            cout << "Dequeue is empty." << endl;
            return;
        }
        for (int elem : dq) {
            cout << elem << " ";
        }
        cout << endl;
    }
};

int main() {
    Dequeue dq;
    dq.enqueueBack(10);
    dq.enqueueBack(20);
    dq.enqueueFront(5);
    dq.enqueueFront(1);

    cout << "Dequeue elements: ";
    dq.display();

    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;

    cout << "Dequeued front element: " << dq.dequeueFront() << endl;
    cout << "Dequeued back element: " << dq.dequeueBack() << endl;

    cout << "Dequeue elements after dequeues: ";
    dq.display();

    cout << "Dequeue size: " << dq.size() << endl;

    return 0;
}
