#include<iostream>
using namespace std;
int main()
{
    int *ptr = new int;
    *ptr = 10;
    cout << "Pointer value : " << *ptr << endl;
    delete ptr;
    int n;
    cout << "size : ";
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array elements: ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}