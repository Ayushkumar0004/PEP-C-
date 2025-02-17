#include <iostream>
#include <queue>
using namespace std;
class StackUsingQueues 
{
private:
    queue<int> q1, q2;
public:
    void push(int x) 
    {
        q1.push(x);  // Push element into q1
    }
    void pop() 
    {
        if (q1.empty()) 
        {
            cout << "Stack is empty\n";
            return;
        }
        // Move all elements except the last one to q2
        while (q1.size() > 1) 
        {
            q2.push(q1.front());
            q1.pop();
        }
        // Remove the last element
        q1.pop();
        // Swap q1 and q2
        swap(q1, q2);
    }
    int top() 
    {
        if (q1.empty()) 
        {
            cout << "Stack is empty\n";
            return -1;
        }
        // Move all elements except the last one to q2
        while (q1.size() > 1) 
        {
            q2.push(q1.front());
            q1.pop();
        }
        // Get the last element (top of the stack)
        int topElement = q1.front();
        q2.push(topElement); // Store it back in q2
        q1.pop();
        // Swap q1 and q2
        swap(q1, q2);
        return topElement;
    }
    bool empty() 
    {
        return q1.empty();
    }
};
int main() 
{
    StackUsingQueues s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "Top element: " << s.top() << std::endl; // Output: 3
    s.pop();
    cout << "Top element after pop: " << s.top() << std::endl; // Output: 2
    return 0;
}