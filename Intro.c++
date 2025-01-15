#include<iostream>
// Includes the standard input-output stream library, which allows the use of `cout`, `cin`, etc.

using namespace std;
// Specifies that the program will use the standard namespace, so you don’t need to prefix `std::` before standard functions like `cout`.

int c = 30;
// Declares a global integer variable `c` and initializes it with the value 30.

int main()
// Defines the `main` function, the entry point of the program. Note: Only one `main` function is allowed in a program.

{
    int a = 10;
    // Declares a local integer variable `a` inside the `main` function and initializes it with the value 10.

    for (int i = 0; i < 5; i++) 
    // Starts a for loop that iterates 5 times (from `i = 0` to `i = 4`).
    {
        int b = 20;
        // Declares a local integer variable `b` inside the loop and initializes it with the value 20.
        // `b` is re-declared and re-initialized during each iteration of the loop.
    }

    return 0;
    // Ends the `main` function and returns 0 to the operating system, indicating successful program termination.
}

// int main()
// // Re-declares the `main` function. This will result in a **compilation error** since only one `main` function can exist in a C++ program.
// {
//     const int a = 10;
//     // Declares a constant integer variable `a` with the value 10. Since `a` is constant, its value cannot be changed.

//     cout << a;
//     // Outputs the value of `a` to the console. However, this code will not run due to the redefinition of the `main` function.
// }
