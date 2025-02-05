#include <iostream>
using namespace std;

class Stack 
{
private:
    int arr[5];  // Fixed size stack
    int top;     // Index of the top element
    int size;    // Number of elements in the stack

public:
    Stack() {
        top = -1;
        size = 0;
    }

    void push(int element) {
        if (size == 5) {
            cout << "Stack overflow!\n";
            return;
        }
        top++;
        arr[top] = element;
        size++;
    }

    void pop() {
        if (size == 0) {
            cout << "Stack underflow!\n";
            return;
        }
        top--;
        size--;
    }

    int getTop() {
        if (size == 0) {
            cout << "Stack is empty!\n";
            return -1; // Indicating stack is empty
        }
        return arr[top];
    }

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return size == 0;
    }
};

int main() {
    Stack s;
    
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.getTop() << endl;
    cout << "Stack size: " << s.getSize() << endl;
    
    s.pop();
    cout << "Top element after pop: " << s.getTop() << endl;
    
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
