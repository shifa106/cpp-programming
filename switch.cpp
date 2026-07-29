#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int choice,num;
cout<<" 1.Reverse";
cout<<"2. Palindrome";
cout<<"3. Armstrong";
cout<<"Enter your choice:";
cin>>choice;
switch(choice)
{
case 1:
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
break;
}
case 2:
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
break;
}
case 3:
{
int a,rem;
int cube=0;
cout<<"Enter a number:";
cin>>a;
int original=a;
while(a!=0)
{
rem=a%10;
cube=cube+pow(rem,3);
a=a/10;
}
cout<<"Sum:"<<cube<<endl;
if(cube==original)
{
cout<<"Armstrong!";
}
else
{
cout<<"Non Armstrong!";
}
break;
}
default:
cout<<"invalid choice";
}
return 0;
}

