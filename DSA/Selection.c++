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
            int temp = arr[minInd];
            arr[minInd] = arr[i];
            arr[i] = temp;
    }
    cout << "Sorted Elements: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}