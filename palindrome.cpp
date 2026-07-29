#include<iostream>
using namespace std;
int main()
{
int a, rem;
int rev=0;
cout<<"Enter a value:";
cin>>a;
int original=a;
while(a!=0)
{
rem=a%10;
rev=rev*10+rem;
a=a/10;
}
cout<<"Reversed number:"<<rev<<endl;
if(rev==original)
{
cout<<"The number is palindrome!";
}
else
{
cout<<"The number is not palindrome!";
}
return 0;
}
