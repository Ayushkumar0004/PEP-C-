#include<iostream>
using namespace std;
int main()
{
    // int a = 10;
    // int b = 0;
    // cout << "Hello" << endl;
    // int res = a / b;
    // cout << "World";
    try
    {
        int a = 10;
        int b = 0;
        if(b == 0)
        {
            throw "Divide by 0 is not allowed!";
        }
        int res = a / b;
        cout << "Hello" << endl;
    }
    catch(const char* e)
    {
        cout << "Exception Handling" << e << endl;
    }
    cout << "World" << endl;
    
}