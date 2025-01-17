#include <iostream>
using namespace std;

class Vehicle 
{
public:
    virtual void canRun() 
    {
        cout << "A vehicle can run." << endl;
    }
};

class Car : public Vehicle 
{
public:
    void canRun() override 
    {
        cout << "A car runs on four wheels." << endl;
    }
};

class Bike : public Vehicle 
{
public:
    void canRun() override 
    {
        cout << "A bike runs on two wheels." << endl;
    }
};

int main() 
{
    Vehicle* v1 = new Car();
    Vehicle* v2 = new Bike();
    v1->canRun();
    v2->canRun();
    return 0;
}
