#include<iostream>
using namespace std;
class Person
{
    public:
    int age = 0;
    Person(int age)
    {
        this->age = age;
    }
    // Operator Overloading
    Person operator +(const Person &p)
    {
        return (this->age + p.age);
    }
};
int main()
{
    Person p1(20);
    Person p2(30);
    // Person p3 = p1.age + p2.age;
    Person p3 = p1 + p2;
    cout << p1.age << endl;
    cout << p2.age << endl;
    cout << p3.age << endl;
    return 0;
}