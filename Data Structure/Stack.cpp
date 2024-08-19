#include <iostream>
#include <vector>
#include<stack>

using namespace std;
class Stack {
private:
    vector<int> stack;

public:
    // Push an element onto the stack
    void push(int value) {
        stack.push_back(value);
    }

    // Remove and return the top element of the stack
    int pop() {
        if (isEmpty()) {
            cerr << "Stack underflow: No elements to pop." << endl;
            return -1; // Return an invalid value or handle appropriately
        }
        int topValue = stack.back();
        stack.pop_back();
        return topValue;
    }

    // Return the top element of the stack without removing it
    int top() const {
        if (isEmpty()) {
            cerr << "Stack is empty: No top element." << endl;
            return -1; // Return an invalid value or handle appropriately
        }
        return stack.back();
    }

    // Check if the stack is empty
    bool isEmpty() const {
        return stack.empty();
    }

    // Return the number of elements in the stack
    int size() const {
        return stack.size();
    }

    // Display all elements in the stack
    void display() const {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        for (int i = stack.size() - 1; i >= 0; --i) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack elements: ";
    s.display();

    cout << "Top element: " << s.top() << endl;

    cout << "Popped element: " << s.pop() << endl;

    cout << "Stack elements after pop: ";
    s.display();

    cout << "Stack size: " << s.size() << endl;

    return 0;
}
