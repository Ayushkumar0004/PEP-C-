#include <iostream>
using namespace std;

int main() {
    int n;

    // Prompt user to input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n], res[n];  // Input array and result array
    int preprod[n], suffprod[n];

    // Input array elements
    cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Precompute prefix products
    preprod[0] = 1;  // Prefix product of 0 elements is 1
    for (int i = 1; i < n; i++) {
        preprod[i] = preprod[i - 1] * arr[i - 1];
    }

    // Precompute suffix products
    suffprod[n - 1] = 1;  // Suffix product of 0 elements is 1
    for (int i = n - 2; i >= 0; i--) {
        suffprod[i] = suffprod[i + 1] * arr[i + 1];
    }

    // Compute result array
    for (int i = 0; i < n; i++) {
        res[i] = preprod[i] * suffprod[i];
    }

    // Output the result array
    cout << "The product of all elements except the current one for each index is:\n";
    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    cout << endl;

    return 0;
}
