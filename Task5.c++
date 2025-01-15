#include<iostream>
// Includes the standard input-output stream library to allow the use of `cin` and `cout`.

using namespace std;
// Specifies that the program will use the standard namespace, so you don’t need to prefix `std::` before standard functions.

int binarySearch(int arr[], int left, int right, int x) 
// Function to perform binary search on a rotated sorted array.
// Takes the array `arr`, the left and right indices, and the target element `x` as input.
// Returns the index of `x` if found, otherwise returns -1.
{
    while (left <= right) 
    // Loop continues as long as the search range is valid.
    {
        int mid = left + (right - left) / 2;
        // Calculates the middle index to avoid potential overflow (more stable than `(left + right) / 2`).

        if (arr[mid] == x) 
        // Checks if the middle element is the target.
        {
            return mid;
            // Returns the index of the target element.
        }

        if (arr[left] <= arr[mid]) 
        // Checks if the left half of the current range is sorted.
        {
            if (arr[left] <= x && x < arr[mid]) 
            // If the target lies within the sorted left half:
            {
                right = mid - 1;
                // Narrow the search range to the left half.
            } 
            else 
            {
                left = mid + 1;
                // Otherwise, search in the right half.
            }
        } 
        else 
        // If the right half of the current range is sorted:
        {
            if (arr[mid] < x && x <= arr[right]) 
            // If the target lies within the sorted right half:
            {
                left = mid + 1;
                // Narrow the search range to the right half.
            } 
            else 
            {
                right = mid - 1;
                // Otherwise, search in the left half.
            }
        }
    }
    return -1;
    // If the loop completes without finding the target, return -1 to indicate it is not in the array.
}

int main() 
// The main function, entry point of the program.
{
    int n, x;
    // Declare variables for the number of elements and the target value.

    cout << "Enter the number of elements: ";
    cin >> n;
    // Prompt the user to enter the number of elements in the array.

    int arr[n];
    // Declare an array of size `n`.

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
        // Read `n` elements into the array.
    }

    cout << "Enter the element to search for: ";
    cin >> x;
    // Prompt the user to input the target element.

    int result = binarySearch(arr, 0, n - 1, x);
    // Call the `binarySearch` function and store the result.

    if (result != -1) 
    // If the function returned an index:
    {
        cout << "Element found at index " << result << endl;
        // Print the index where the element was found.
    } 
    else 
    // If the function returned -1:
    {
        cout << "Element not found in the array." << endl;
        // Print a message indicating the element was not found.
    }

    return 0;
    // Return 0 to indicate successful program termination.
}
