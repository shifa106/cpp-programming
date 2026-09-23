#include<iostream>
using namespace std;
class Bank
{
protected:
int accno;
string accholder;
float balance=12000000.0;

public:
void getdata()
{
cout<<"Enter your name:";
cin>>accholder;
cout<<"Enter your account number:";
cin>>accno;
}
void display()
{
cout<<"---------Your Account Details are as follows--------------"<<endl;
cout<<"Account number:"<<accno<<endl;
cout<<"Account Holder Name:"<<accholder<<endl;
cout<<"Your Bank Balance:"<<balance<<endl;
}
};
class Saving:public Bank
{
protected:
float interest=balance*0.03;
float charge=10;
public:
void display1()
{
cout<<"------saving account---------"<<endl;
cout<<"Rate of interest is 3%"<<endl;
cout<<"Interest on your balance amount:"<<interest<<endl;
cout<<"Charges per Transaction:"<<charge<<endl;
}
};
class Current:public Bank
{
protected:
float interest=balance*0.02;
float charge=20;

public:
void display2()
{
cout<<"-----------current account----------"<<endl;
cout<<"Rate of interest is 2%"<<endl;
cout<<"Interest on your balance amount:"<<interest<<endl;
cout<<"Charges per Transaction:"<<charge<<endl;
}
};
class Salary:public Bank
{
protected:
float salary;
float interest=salary*0.02;
float charge=10;

public:
void getdata1()
{
cout<<"Enter your salary:";
cin>>salary;
}
void display3()
{
cout<<"---------Salary account---------"<<endl;
cout<<"Salary Amount:"<<salary<<endl;
cout<<"Rate of interest is 2%"<<endl;
cout<<"Interest on your salary amount:"<<interest<<endl;
cout<<"Charges per Transaction:"<<charge<<endl;
}
};
int main()
{
Saving s;
Current c;
Salary sal;
s.getdata();
s.display();
s.display1();
c.display2();
sal.getdata1();
sal.display3();
return 0;
}





