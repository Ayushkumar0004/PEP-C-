#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of n: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int freq[n + 1] = {0};
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    int missing = -1, repeating = -1;
    for (int i = 1; i <= n; i++) {
        if (freq[i] == 0) {
            missing = i;
        } else if (freq[i] > 1) {
            repeating = i;
        }
    }

    cout << "The missing number is: " << missing << endl;
    cout << "The repeating number is: " << repeating << endl;

    return 0;
}
