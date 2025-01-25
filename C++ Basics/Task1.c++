#include<iostream>
// Includes the standard input-output stream library to enable the use of `cout` for printing.

using namespace std;
// Specifies that the program will use the standard namespace, so you don’t need to use `std::` before standard functions.

int main() 
// Defines the `main` function, which serves as the entry point of the program.
{
    for (int i = 1; i < 5; i++) 
    // Starts a `for` loop that iterates 4 times (with `i` taking the values 1, 2, 3, and 4).
    {
        static int a = 0;
        // Declares a `static` integer variable `a`. Static variables are initialized only once and retain their value between iterations.
        // In the first iteration, `a` is initialized to 0. In subsequent iterations, `a` retains its updated value.

        int b = 0;
        // Declares a local (non-static) integer variable `b` and initializes it to 0.
        // `b` is re-initialized to 0 every time the loop executes.

        a += 1;
        // Increments the value of `a` by 1. Since `a` is static, its updated value persists across loop iterations.

        b += 1;
        // Increments the value of `b` by 1. Since `b` is non-static, this value is reset in each loop iteration.

        cout << "a = " << a << endl;
        // Prints the current value of `a` to the console.

        cout << "b = " << b << endl;
        // Prints the current value of `b` to the console.
    }

    return 0;
    // Indicates successful termination of the program.
}
