#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main() {
    // Stack
    stack<int> s;
    s.push(1);              // Push element onto stack
    s.push(2);              
    s.pop();                // Pop element from stack
    int top = s.top();      // Get top element
    bool s_empty = s.empty(); // Check if stack is empty
    int s_size = s.size();  // Get stack size

    // Queue
    queue<int> q;
    q.push(1);              // Enqueue element
    q.push(2);              
    q.pop();                // Dequeue element
    int front = q.front();  // Get front element
    int back = q.back();    // Get back element
    bool q_empty = q.empty(); // Check if queue is empty
    int q_size = q.size();  // Get queue size

    // Deque
    deque<int> dq;
    dq.push_back(1);        // Add element to back
    dq.push_front(2);       // Add element to front
    dq.pop_back();          // Remove element from back
    dq.pop_front();         // Remove element from front
    int d_front = dq.front(); // Get front element
    int d_back = dq.back(); // Get back element
    bool dq_empty = dq.empty(); // Check if deque is empty
    int dq_size = dq.size(); // Get deque size

    // Display results (optional)
    cout << "Stack - top: " << top << ", empty: " << s_empty << ", size: " << s_size << endl;
    cout << "Queue - front: " << front << ", back: " << back << ", empty: " << q_empty << ", size: " << q_size << endl;
    cout << "Deque - front: " << d_front << ", back: " << d_back << ", empty: " << dq_empty << ", size: " << dq_size << endl;

    return 0;
}
