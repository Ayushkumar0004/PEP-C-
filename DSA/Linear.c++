#include<iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int* arr = new int[n];
    cout << "Enter the values of the array:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    int tar;
    cout << "Target Value: ";
    cin >> tar;
    for(int i = 0;i < n; i++)
    {
        if(arr[i] == tar)
        {
            cout << "Array is present in the array.";
        }
        else
        {
            cout << "Array is not present in the array.";
        }
    }
}