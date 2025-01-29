#include<iostream> 
using namespace std;

int BinaryS(int arr[], int s, int st, int end)
{
    if(st > end)
    {
        return -1;
    }
    int mid = (st + end) / 2;
    if(arr[mid] == s)
    {
        return mid;
    }
    if(arr[mid] > s)
    {
        return BinaryS(arr, s, st, mid - 1);
    }
    return BinaryS(arr, s, mid + 1, end);
}

int main()
{
    int n, x;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> x;

    int result = BinaryS(arr, x, 0, n - 1);

    if(result != -1)
    {
        cout << "Element found at index " << result << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
