#include<iostream>
using namespace std;
int main()
{
int a;
int b;
int c;
cout<<"Enter a,b and c:";
cin>>a>>b>>c;
if (a>b && a>c)
cout<<"A is greatest";
else if (b>c)
cout<<"B is greatest";
else
cout<<"C is greatest";
return 0;
}
