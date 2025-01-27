#include<iostream>
using namespace std;
int sum_digits(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n % 10 + sum_digits(n / 10);
}
int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    cout << "Sum of digits: " << sum_digits(n) << endl;
    return 0;
}