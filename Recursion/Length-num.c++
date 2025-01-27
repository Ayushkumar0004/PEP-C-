#include<iostream>
using namespace std;
int len(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return 1 + len(n / 10);
}
int main()
{
    int n;
    cout << "Enter the num: " << endl;
    cin >> n;
    cout << len(n);
}