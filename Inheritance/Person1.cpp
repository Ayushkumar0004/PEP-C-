#include<iostream>
using namespace std;
class Person
{
    public:
    int age;
    string name;
    Person()
    {
        name = "Unknown";
        age = 0;
    }
    Person(string n)
    {
        name = n;
        age = 0;
    }
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
};
int main()
{
    Person p1;
    Person p2("Ayush");
    Person p3("Ayush", 20);
    cout << "Person 1: Name = " << p1.name << ", Age = " << p1.age << endl;
    cout << "Person 2: Name = " << p2.name << ", Age = " << p2.age << endl;
    cout << "Person 3: Name = " << p3.name << ", Age = " << p3.age << endl;
    return 0;
}