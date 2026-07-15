#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter a,b:";
cin>>a>>b;
cout<<"before swapping";
cout<<"A="<<a<<"B="<<b;
c=a;
a=b;
b=c;
cout<<"After swapping:";
cout<<"a="<<a<<"b="<<b;
}
