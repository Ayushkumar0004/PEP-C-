#include<iostream>
using namespace std;
class Shape
{
public:
    virtual void draw() = 0;
};
class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a Circle!" << endl;;
    }
};
class Rectangle : public Shape
{
public:
    void draw() override 
    {
        cout << "Drawing a Rectangle!" << endl;
    }
};
class Triangle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a Triangle!" << endl;;
    }
};
int main()
{
    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();
    Shape* s3 = new Triangle();
    s1->draw();
    s2->draw();
    s2->draw();
}