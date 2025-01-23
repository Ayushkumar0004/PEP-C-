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
    // Copy Constructor
    Person(const Person &P)
    {
        name =  P.name;
        age = P.age;
    }
};
int main()
{
    Person p1;
    Person p2("Ayush");
    Person p3("Ayush", 20);
    Person p4 = p3;// Default (Implicit)Copy Constructor
    Person p5(p2);// (Explicit)Copy Constructor
    p2.name = "Yash";
    cout << "Person 1: Name = " << p1.name << ", Age = " << p1.age << endl;
    cout << "Person 2: Name = " << p2.name << ", Age = " << p2.age << endl;
    cout << "Person 3: Name = " << p3.name << ", Age = " << p3.age << endl;
    cout << "Person 3: Name = " << p3.name << ", Age = " << p3.age << endl;
    cout << "Person 4: Name = " << p4.name << ", Age = " << p4.age << endl;
    cout << "Person 5: Name = " << p5.name << ", Age = " << p5.age << endl;
    return 0;
}