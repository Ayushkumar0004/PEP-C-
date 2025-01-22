#include<iostream>
using namespace std;
class Vehicle
{
    public:
    Vehicle()
    {
        cout << "Constructor of Vehicle!" << endl;
    }
    protected:
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
    protected:
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
    void displayAll()
    {
    displayVehicle();
    displayCar();
    }
};
int main()
{
    ECar e1;
    e1.displayEcar();
    e1.displayAll();
    return 0;   
}