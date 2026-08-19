#include<iostream>
using namespace std;
class Complex
{
int r1,i1,r2,i2;
public:
void input()
{
cout<<"Enter the real part and imaginary part of first number:";
cin>>r1>>i1;
cout<<"Enter the real and imaginary part of first number:";
cin>>r2>>i2;
}
void add()
{
cout<<"Sum:"<<r1+r2<<"+"<<i1+i2<<"i";
}
void sub()
{
cout<<"Sub:"<<r1-r2<<"-"<<i1-i2<<"i";
}
};
int main()
{
Complex c;
c.input();
c.add();
c.sub();
return 0;
}

