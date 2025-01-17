#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter the elements of array:";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < n - 1; i++)
    {
        int minInd = i;
        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minInd])
            {
                minInd = j;
            }
        }
        if(minInd != i)
        {
            int temp = arr[i];
            arr[i] = arr[minInd];
            arr[minInd] = temp;
        }
    }
    cout << "Sorted Elements: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}