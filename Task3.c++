// variable overshadowing -> preference given to the block
#include<iostream>
// Includes the standard input-output stream library to enable the use of `cout` for printing.

using namespace std;
// Specifies that the program will use the standard namespace, so you don’t need to prefix `std::` before standard functions.

int main()
// Defines the `main` function, which serves as the entry point of the program.
{
    int a = 10;
    // Declares a variable `a` with block scope in the `main` function and initializes it with the value 10.

    for (int i = 1; i < 5; i++) 
    // Starts a for loop that iterates 4 times (with `i` taking values 1, 2, 3, and 4).
    {
        int a = 20;
        // Declares another variable `a` within the loop block. This **shadows** the outer variable `a`.
        // The loop's `a` exists only inside the loop block and is initialized with the value 20 in each iteration.

        cout << a << endl;
        // Prints the value of the loop's `a` (which is 20) to the console in each iteration.
    }

    cout << a;
    // Prints the value of the outer `a` (which is 10) after the loop ends.
    // The inner `a` declared in the loop is out of scope here, so the outer `a` is used.

    return 0;
    // Indicates successful termination of the program.
}
