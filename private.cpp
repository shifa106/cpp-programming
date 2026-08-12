#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
 string name;
 int rollno;
 float marks;
private:
void input()
{
cout<<"Enter your name:";
cin>>name;
cout<<"Enter roll no:";
cin>>rollno;
cout<<"Enter your marks:";
cin>>marks;
}
void display()
{
cout<<"Name:"<<name<<endl;
cout<<"Roll no.:"<<rollno<<endl;
cout<<"Marks:"<<marks<<endl;
}
public:
void process()
{
input();
display();
}
};
int main()
{
Student s;
s.process();
return 0;
}






