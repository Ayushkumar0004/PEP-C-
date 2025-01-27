#include<iostream>
using namespace std;
void reverse(int n)
{
    if(n <= 0)
    {
        return;
    }
    cout << n << " ";
    reverse(n - 1);
}
int main()
{
    int n;
    cout << "Enter the num: " << endl;
    cin >> n;
    reverse(n);
}