#include<iostream>
using namespace std;
class Vehicle
{
    public:
    Vehicle()
    {
        cout << "Constructor of Vehicle!" << endl;
    }
};
class Car : public Vehicle
{
    public:
    Car()
    {
        cout << "Constructor of Car!" << endl;
    }
};
class ECar : public Car
{
    public:
    ECar()
    {
        cout << "Constructor of ECar!" << endl;
    }
};
int main()
{
    ECar e1;
    return 0;   
}