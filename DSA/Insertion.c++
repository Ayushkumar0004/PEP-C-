#include<iostream>
using namespace std;
class Insertion1
{
public:
    void InsertionSort(int arr[], int n)
    {
        for(int i = 1; i < n; i++)
        {
            for(int j = i; j > 0; j--)
            {
                if(arr[j] < arr[j - 1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;
                }
            }
        }
    }
};
int main()
{
    Insertion1 o1;
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    o1.InsertionSort(arr, n);
    cout << "Sorted Array: " << endl; 
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}