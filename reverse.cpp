#include<iostream>
using namespace std;
int main()
{
int a;
int rem;
int rev=0;
cin>>a;
while(a!=0)
{
rem=a%10;
rev=rev*10+rem;
a=a/10;
}
cout<<"Reverse no.:"<<rev;
}

