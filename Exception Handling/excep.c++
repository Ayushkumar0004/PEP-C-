#include <iostream>
using namespace std;
void checkPos(int a)
{
    if (a < 0)
    {
        throw "Negative number error";
    }
    else
    {
        cout << "The number is not negative." << endl;
    }
}
int main()
{
    try
    {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        checkPos(num);
    }
    catch (const char* e)
    {
        cout << "Exception occurred: " << e << endl;
    }
    return 0;
}