#include<iostream>
using namespace std;
bool palindrome_arr(int arr[], int st, int end)
{
    if(st >= end)
    {
        return true;
    }
    if(arr[st] != arr[end])
    {
        return false;
    }
    return palindrome_arr(arr, st + 1, end - 1);
}
int main()
{
    int n;
    cout << "Enter the size of n: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if(palindrome_arr(arr, 0, n - 1))
    {
        cout << "The array is palindrome!";
    } 
    else
    {
        cout << "The array is not palindrome!";
    }
}