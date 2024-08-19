#include <iostream>
#include <queue>

using namespace std;

class Queue {
private:
    queue<int> q;

public:
    // Enqueue an element
    void enqueue(int value) {
        q.push(value);
    }

    // Dequeue an element
    int dequeue() {
        if (isEmpty()) {
            cerr << "Queue underflow: No elements to dequeue." << endl;
            return -1;
        }
        int frontValue = q.front();
        q.pop();
        return frontValue;
    }

    // Return the front element
    int front() const {
        if (isEmpty()) {
            cerr << "Queue is empty: No front element." << endl;
            return -1;
        }
        return q.front();
    }

    // Check if the queue is empty
    bool isEmpty() const {
        return q.empty();
    }

    // Return the number of elements in the queue
    int size() const {
        return q.size();
    }

    // Display all elements in the queue
    void display() const {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        queue<int> temp = q;
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Queue elements: ";
    q.display();

    cout << "Front element: " << q.front() << endl;

    cout << "Dequeued element: " << q.dequeue() << endl;

    cout << "Queue elements after dequeue: ";
    q.display();

    cout << "Queue size: " << q.size() << endl;

    return 0;
}
