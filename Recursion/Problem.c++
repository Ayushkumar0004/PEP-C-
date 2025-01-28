#include<iostream>
using namespace std;
int power(int a, int n)
{
    if(n == 0)
    {
        return 1;
    }
    return a * power(a, n-1);
}

int main()
{
    int a, n;
    cout << "Enter the num: ";
    cin >> a;
    cout << "Enter the power: ";
    cin >> n;
    cout << a << " ^ " << n << " : " << power(a, n);
}