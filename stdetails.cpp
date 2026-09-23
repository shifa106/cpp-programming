#include<iostream>
using namespace std;
class Student
{
protected:
string dept;
int rollno;
float total;
float per;
string grade;

public:
void get()
{

cout<<"Enter your Department:";
cin>>dept;
cout<<"Enter your roll no.:";
cin>>rollno;
cout<<"Enter your total marks:";
cin>>total;
per=(total/500)*100;
}
void display()
{
cout<<"Your Department is:"<<dept<<endl;
cout<<"Roll no.:"<<rollno<<endl;
cout<<"Total marks:"<<total<<endl;
cout<<"Percentage:"<<per<<endl;
if (per>90)
{
grade="A+";
}
else if(per>=70 && per<=90)
{
grade="A";
}
else if(per>=50 && per<70)
{
grade="B";
}
else if(per>=30 && per<50)
{
grade="C";
}
else
{
cout<<"failed"<<endl;
}
cout<<"Your grade:"<<grade<<endl;
}
};


int main()
{
Student s;
s.get();
s.display();
}

