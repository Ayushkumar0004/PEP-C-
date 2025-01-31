#include <iostream>
using namespace std;
void Merge(int arr[], int st, int mid, int end)
{
    int n1 = mid - st + 1;
    int n2 = end - mid;
    int Left[n1], Right[n2];
    for (int i = 0; i < n1; i++)
        Left[i] = arr[st + i];

    for (int i = 0; i < n2; i++)
        Right[i] = arr[mid + 1 + i];
    int i = 0, j = 0, k = st;
    while (i < n1 && j < n2)
    {
        if (Left[i] <= Right[j])
        {
            arr[k] = Left[i];
            i++;
        }
        else
        {
            arr[k] = Right[j];
            j++;
        }
        k++;
    }
    // Copy any remaining elements
    while (i < n1)
    {
        arr[k] = Left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = Right[j];
        j++;
        k++;
    }
}
void MergeSort(int arr[], int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - st) / 2;
        MergeSort(arr, st, mid);
        MergeSort(arr, mid + 1, end);
        Merge(arr, st, mid, end);
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
    MergeSort(arr, 0, n - 1);
    cout << "Array elements after MergeSort are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}