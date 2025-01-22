#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    void setDetails(string n, int a) {
        name = n;
        age = a;
    }
};

class Employee {
public:
    int empID;
    void setEmpID(int id) {
        empID = id;
    }
};

class Manage : public Person, public Employee {
public:
    void showDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Employee ID: " << empID << endl;
    }
};

int main() {
    string name;
    int age;
    int empID;
    Manage m1;

    // Input for name
    cout << "Enter the name: ";
    cin >> name;

    // Input for age
    cout << "Enter the age: ";
    cin >> age;

    // Set name and age
    m1.setDetails(name, age);

    // Input for empID
    cout << "Enter the EmpID: ";
    cin >> empID;

    // Set employee ID
    m1.setEmpID(empID);

    // Display details
    cout << "\nDetails of Employee:\n";
    m1.showDetails();

    return 0;
}