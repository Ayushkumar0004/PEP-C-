#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    
    int* arr = new int[n];
    cout << "Enter the values of the array:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    int st = 0;
    int end = n - 1;
    
    while (st <= end) 
    {
        if (arr[st] != arr[end]) 
        {
            break;
        }
        st++;
        end--;
    }
    if (st > end) 
    {
        cout << "The array is a palindrome." << endl;
    } 
    else 
    {
        cout << "The array is not a palindrome." << endl;
    }
    return 0;
}