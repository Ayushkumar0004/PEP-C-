#include<iostream>
using namespace std;
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    double add(double a, double b)
    {
        return a + b;
    }
};
int main()
{
    Calculator o1;
    cout << "Sum of integers: " << o1.add(2, 5) << endl;
    cout << "Sum of doubles: " << o1.add(5.4, 7.4) << endl;
}