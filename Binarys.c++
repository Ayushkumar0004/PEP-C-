#include <iostream>
using namespace std;

int main() 
{
    int x, n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter the values of the array in sorted order: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> x;
    int st = 0, end = n - 1;
    bool found = false;
    while (st <= end)
    {
        int mid = (st + end) / 2; 
        if (arr[mid] == x)
        {
            cout << "Element found at index " << mid << endl;
            found = true;
            break;
        }
        else if (arr[mid] > x)
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    if (!found)
    {
        cout << "Element not found in the array." << endl;
    }
    delete[] arr;
    return 0;
}