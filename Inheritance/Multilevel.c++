#include<iostream>
using namespace std;
class Vehicle
{
    public:
    Vehicle()
    {
        cout << "Constructor of Vehicle!" << endl;
    }
    void displayVehicle()
    {
        cout << "This is a Vehicle!" << endl;
    }
};
class Car : public Vehicle
{
    public:
    Car()
    {
        cout << "Constructor of Car!" << endl;
    }
    void displayCar()
    {
        cout << "This is a Car!" << endl;
    }
};
class ECar : public Car
{
    public:
    ECar()
    {
        cout << "Constructor of ECar!" << endl;
    }
    void displayEcar()
    {
        cout << "This is a ECAR!" << endl;
    }
};
int main()
{
    ECar e1;
    e1.displayCar();
    e1.displayEcar();
    e1.displayVehicle();
    return 0;   
}