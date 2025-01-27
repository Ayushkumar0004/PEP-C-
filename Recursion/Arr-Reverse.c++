#include<iostream>
using namespace std;
void arr_rev(int arr[], int st, int end)
{
    if (st >= end)
    return;
    int temp = arr[st];
    arr[st] = arr[end];
    arr[end] = temp;
    arr_rev(arr, st + 1, end - 1);
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array elements are: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    arr_rev(arr, 0, n - 1);
    cout << "Reverse of array: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}