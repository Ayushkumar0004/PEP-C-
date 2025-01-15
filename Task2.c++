#include<iostream>
// Includes the standard input-output stream library, allowing the use of `cout` for output.

using namespace std;
// Specifies that the program will use the standard namespace, so you don’t need to prefix `std::` before standard functions.

int a = 29468;
// Declares a global integer variable `a` and initializes it with the value 29468.

int f1()
// Defines the function `f1` which returns an integer. This function reverses the digits of the global variable `a`.
{
    int rev = 0;
    // Declares a local integer variable `rev` and initializes it to 0. This will store the reversed number.

    while (a > 0) 
    // Starts a loop that runs as long as `a` is greater than 0.
    {
        int b = a % 10;
        // Extracts the last digit of `a` using the modulo operator and stores it in `b`.

        rev = rev * 10 + b;
        // Updates `rev` by shifting its digits to the left (multiplying by 10) and adding the extracted digit `b`.

        a /= 10;
        // Removes the last digit of `a` by performing integer division by 10.
    }

    return rev;
    // Returns the reversed number stored in `rev`.
}

int main() 
// Defines the `main` function, the entry point of the program.
{
    int reversed = f1();
    // Calls the `f1` function to reverse the global variable `a` and stores the result in the local variable `reversed`.

    cout << "Reversed number: " << reversed << endl;
    // Prints the reversed number to the console.

    return 0;
    // Indicates successful program termination.
}
