#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array1: ";
    cin >> n;
    int* arr1 = new int[n];
    cout << "Enter the values of the array1: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr1[i];
    }
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr1[j] > arr1[j + 1])
            {
                int temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array1: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr1[i];
    }

    int m;
    cout << "Enter the size of the array2: ";
    cin >> m;
    int* arr2 = new int[m];
    cout << "Enter the values of the array2: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr2[i];
    }
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr2[j] > arr2[j + 1])
            {
                int temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
            }
        }
    }
    cout << "Sorted array2: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr2[i];
    }
    int* merged = new int[n + m];
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) 
    {
        if (arr1[i] <= arr2[j]) 
        {
            merged[k++] = arr1[i++];
        } 
        else 
        {
            merged[k++] = arr2[j++];
        }
    }

    while (i < n) 
    {
        merged[k++] = arr1[i++];
    }

    while (j < m) 
    {
        merged[k++] = arr2[j++];
    }

    cout << "Merged sorted array: ";
    for (int i = 0; i < n + m; i++) 
    {
        cout << merged[i] << " ";
    }
    cout << endl;

}