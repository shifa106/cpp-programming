#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"enter a,b:";
cin>>a>>b;
cout<<"before swapping";
cout<<"A="<<a<<"B="<<b;
a=a+b;
b=a-b;
a=a-b;
cout<<"After swapping:";
cout<<"a="<<a<<"b="<<b;
}
