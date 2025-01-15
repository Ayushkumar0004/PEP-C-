#include<iostream>
using namespace std;

// void func1(int a)
// {
//     a += 1;
//     cout << a;
// }
// int main()
// {
//     int a = 15;
//     func1(a);
// }

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the values of the array:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    int st = 0;
    int end = n - 1;
    while (st < end)
    {
        int temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;
        st++;
        end--;
    }
    cout << "Reversed array:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    return 0;
}