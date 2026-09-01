#include <iostream>
#include <string>
using namespace std;

class Employee
{
    string name, city;
    int id;
    float salary;
public:

    // Default Constructor
    Employee()
    {
        name = "Unknown";
        id = 0;
        salary = 0;
        city = "Unknown";
    }

    // Parameterized Constructor
    Employee(string n, int i, float s, string c)
    {
        name = n;
        id = i;
        salary = s;
        city = c;
    }

    // Copy Constructor
    Employee(const Employee &e)
    {
        name = e.name;
        id = e.id;
        salary = e.salary;
        city = e.city;
    }

    // Input Function
    void input()
    {
        cout << "Enter Employee Name: ";
        cin>>name;

        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Salary: ";
        cin >> salary;

        cout << "Enter City: ";
        cin>>city;
    }

    // Display Function
    void display()
    {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Name   : " << name << endl;
        cout << "ID     : " << id << endl;
        cout << "Salary : " << salary << endl;
        cout << "City   : " << city << endl;
    }
};

int main()
{
    Employee e;
    e.input(); 
    e.display();
    return 0;
}
