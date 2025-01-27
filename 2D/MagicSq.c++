#include <iostream>
using namespace std;
bool isMagicSquare(int** arr, int n) {
    int sumDiagonal1 = 0, sumDiagonal2 = 0;

    // Sum of the primary diagonal
    for (int i = 0; i < n; i++)
        sumDiagonal1 += arr[i][i];

    // Sum of the secondary diagonal
    for (int i = 0; i < n; i++)
        sumDiagonal2 += arr[i][n - i - 1];

    // If both diagonals are not equal, it's not a magic square
    if (sumDiagonal1 != sumDiagonal2)
        return false;

    // Check the sum of each row and column
    for (int i = 0; i < n; i++) {
        int rowSum = 0, colSum = 0;

        for (int j = 0; j < n; j++) {
            rowSum += arr[i][j]; // Row sum
            colSum += arr[j][i]; // Column sum
        }

        // If row or column sum doesn't match the diagonal sum
        if (rowSum != sumDiagonal1 || colSum != sumDiagonal1)
            return false;
    }

    // If all checks pass, it is a magic square
    return true;
}

int main() {
    int n;
    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;

    // Dynamically allocate memory for the matrix
    int** arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // Check if the matrix is a magic square
    if (isMagicSquare(arr, n))
        cout << "The given matrix is a Magic Square!" << endl;
    else
        cout << "The given matrix is NOT a Magic Square!" << endl;
    // Free dynamically allocated memory
    for (int i = 0; i < n; i++) 
    {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}