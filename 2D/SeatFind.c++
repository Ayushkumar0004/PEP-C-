#include <iostream>
using namespace std;
int main() 
{
    // Ask the user to enter a seat number (n)
    int seatNum;
    cout << "Enter the seat number (starting from 1): ";
    cin >> seatNum;
    // Calculate the dimensions of the matrix based on the seat number
    // For simplicity, let's assume a square matrix, where rows == columns.
    // We find the smallest possible square matrix that can contain the seat number.
    int n = seatNum;
    int rows, cols;
    // Calculate rows and columns based on seat number n
    for (int i = 1; i <= n; i++) 
    {
        if (i * i >= n) 
        {
            rows = i;
            cols = i;
            break;
        }
    }
    // Output the matrix dimensions and seat position
    cout << "Matrix dimensions: " << rows << " rows, " << cols << " columns" << endl;
    // Find the row and column of the given seat number
    int row = (seatNum - 1) / cols;  // Calculate the row
    int col = (seatNum - 1) % cols;  // Calculate the column
    // Output the seat location
    cout << "Seat number " << seatNum << " is located at Row: " << row + 1 << ", Column: " << col + 1 << endl;
    return 0;
}