//Friend Function
#include<iostream>
using namespace std;

class Shape
{
  private:
    int side;
  
  public:
    Shape(int s) 
    {
        side = s;
    }

    friend void printSide(Shape s);
};

void printSide(Shape s)
{
    cout << s.side << endl;
}

int main()
{
    int side;
    cout << "Enter the side: " << endl;
    cin >> side;

    Shape s1(side);

    printSide(s1);

    return 0;
}