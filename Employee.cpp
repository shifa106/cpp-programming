#include<iostream>
#include<string>
using namespace std;
class Employee
{
public:
 int empID;
 string name;
 string department;
 float basicsalary;
 
 void input()
 {
 cout<<"Enter name:";
 cin>>name;
 cout<<"Enter ID:";
 cin>>empID;
 cout<<"Enter Department:";
 cin>>department;
 cout<<"Enter Salary:";
 cin>>basicsalary;
 }
 float annualsalary()
 {
  return basicsalary*12;
 }
 void display()
 {
 cout<<"Employee ID:"<<empID<<endl;
 cout<<"name:"<<name<<endl;
 cout<<"department:"<<department<<endl;
 cout<<"Basic Salary:"<<basicsalary<<endl;
 cout<<"Annual Salary:"<<annualsalary()<<endl;
 }
 };
 int main()
 {
 Employee e;
 e.input();
 e.display();
 return 0;
 }
 
 
