#include<iostream>
using namespace std;

class Employee
{
public:
virtual void salary()
{
   cout<<"Calculation of salary"<<endl;
}
};

class manager: public Employee
{
int s;
public:
manager(int c)
{
s=c;
}
void salary() override
{
  cout<<"Your salary is :"<<s<<endl;
  
}
};

class developer: public Employee
{
int a;
public:
developer(int b)
{
a=b;
}
void salary() override
{
  cout<<"Your salary is:"<<a<<endl;
}
};

int main()
{

int l;
cout<<"Enter your salary:"<<endl;
cin>>l;
manager m(l);

int k;
cout<<"Enter your salary:"<<endl;
cin>>k;
developer d(k);

Employee *e;
e=&m;
e->salary();

e=&d;
e->salary();

return 0;
}

