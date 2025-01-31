#include<iostream>
using namespace std;
// Partition function
int partition(int arr[], int st, int end) 
{
    int pivot = arr[end]; 
    int i = st - 1; 
    for (int j = st; j < end; j++) 
    { 
        if (arr[j] <= pivot) 
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[end]); 
    return i + 1;
}
// QuickSort function
void QuickSort(int arr[], int st, int end) 
{
    if (st < end) 
    {
        // Pivot is that which is revolving around the objects or array
        int pivot = partition(arr, st, end);
        QuickSort(arr, st, pivot - 1);
        QuickSort(arr, pivot + 1, end);
    }
}
int main() 
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    // Perform QuickSort
    QuickSort(arr, 0, n - 1);
    // Print the sorted array
    cout << "Array elements after QuickSort are: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    return 0;
}