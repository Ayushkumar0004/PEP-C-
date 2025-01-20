#include<iostream>
using namespace std;
class Animal
{
    public:
    virtual void sound() = 0;
};
class Dog : public Animal
{
    public:
    void sound() override
    {
        cout << "Bark!" << endl;
    }
};
class Cat : public Animal
{
    public:
    void sound() override
    {
        cout << "Meow-Meow!" << endl;
    }
};
int main()
{
    Animal* d1 = new Dog();
    Animal* c1 = new Cat();
    d1->sound();
    c1->sound();
}