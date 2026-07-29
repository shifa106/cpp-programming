#include<iostream>
#include<cmath>
using namespace std;
int main()
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
return 0;
}


