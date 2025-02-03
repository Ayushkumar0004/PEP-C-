#include<iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    cout << "Enter the numbers" << endl;
    cin >> a >> b;
    // Function pointer
    int(*addptr)(int, int) = add; 
    cout << addptr(a, b);
}