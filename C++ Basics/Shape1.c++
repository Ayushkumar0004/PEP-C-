#include <iostream>
using namespace std;
class Shape 
{
public:
    void CalculateArea(float side) 
    {
        cout << "Area of Square: " << side * side << endl;
    }
    void CalculateArea(float len, float wid) 
    {
        cout << "Area of Rectangle: " << len * wid << endl;
    }
    void CalculateArea(float rad, bool isCircle) 
    {
        if (isCircle) 
        {
            cout << "Area of Circle: " << 3.14 * rad * rad << endl;
        }
    }
};

int main() 
{
    Shape s1;
    s1.CalculateArea(4.5f);
    s1.CalculateArea(5.7f, 3.5f);
    s1.CalculateArea(2, true);
    return 0;
}