#include <iostream>
using namespace std;

void first(int curr, int n)
{
    if (curr > n) // Base case: stop when current exceeds n
    {
        return;
    }
    cout << curr << " "; // Print the current value
    first(curr + 1, n);  // Recursive call with incremented curr
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    first(1, n); // Start from 1 and go up to n
    return 0;
}
