#include<iostream>
using namespace std;

class Employee
{
protected:
int id;
string name,dept;

public:
void get()
{
cout<<"Enter your Employee ID:";
cin>>id;
cout<<"Enter your Name:";
cin>>name;
cout<<"Enter your Department:";
cin>>dept;
}
void display()
{
cout<<"Name:"<<name<<endl;
cout<<"ID:"<<id<<endl;
cout<<"Department:"<<dept<<endl;
}
};
class Teachingstaff:public Employee
{
protected:
string sub, qualification;

public:
void get1()
{
cout<<"Enter your Subject:";
cin>>sub;
cout<<"Enter your Qualification:";
cin>>qualification;
}
void display1()
{
cout<<" Your Subject:"<<sub<<endl;
cout<<" Your Qualification:"<<qualification<<endl;
}
};
class Nonteaching: public Employee
{
protected:
string desig;
int time;

public:

void get2()
{
cout<<"Enter your Designation:";
cin>>desig;
cout<<"Enter your Working hour:";
cin>>time;
}
void display2()
{
cout<<" Your Designation is:"<<desig<<endl;
cout<<" Your Working hours are:"<<time<<endl;
}
};

int main()
{
Teachingstaff t;
Nonteaching n;
t.get();
t.display();
t.get1();
t.display1();
n.get2();
n.display2();
}



