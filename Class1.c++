#include<iostream>
using namespace std;

void add(int a, int b) 
{
    cout << "Addition: " << a + b << endl;
}

void sub(int a, int b) 
{
    cout << "Difference: " << a - b << endl;
}

void Product(int a, int b) 
{
    cout << "Product: " << a * b << endl;
}

void div(double a, double b) 
{
    if (b != 0)
        cout << "Division: " << a / b << endl;
    else
        cout << "Cannot divide by zero!" << endl;
}

int main() 
{
    double a, b;
    int choice;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    do 
    {
        cout << "\nChoose an operation:\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) 
        {
            case 1:
                add((int)a, (int)b);
                break;
            case 2:
                sub((int)a, (int)b);
                break;
            case 3:
                Product((int)a, (int)b);
                break;
            case 4:
                div(a, b);
                break;
            case 5:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } 
    while (choice != 5);
    return 0;
} 