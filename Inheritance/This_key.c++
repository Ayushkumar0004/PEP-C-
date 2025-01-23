#include<iostream>
using namespace std;
class Person
{
    public:
    int age;
    string name;
    Person(int a, string n)
    {
        this-> age = a;
        this-> name = n;
    }
};
int main()
{
    Person p1(20, "AYUSH");
    cout << p1.age << " " << p1.name;
}