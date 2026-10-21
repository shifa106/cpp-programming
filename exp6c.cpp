#include <iostream>
using namespace std;

class Employee
{
public:
    // Salary using Basic Salary only
    float calculateSalary(float basic)
    {
        return basic;
    }

    // Salary using Basic Salary and HRA
    float calculateSalary(float basic, float hra)
    {
        return basic + hra;
    }

    // Salary using Basic Salary, HRA, and DA
    float calculateSalary(float basic, float hra, float da)
    {
        return basic + hra + da;
    }
};

int main()
{
    Employee e;

    cout << "Salary using Basic Salary only: "
         << e.calculateSalary(20000.0f) << endl;

    cout << "Salary using Basic Salary and HRA: "
         << e.calculateSalary(20000.0f, 5000.0f) << endl;

    cout << "Salary using Basic Salary, HRA, and DA: "
         << e.calculateSalary(20000.0f, 5000.0f, 3000.0f) << endl;

    return 0;
}