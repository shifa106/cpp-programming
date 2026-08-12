#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
 string name;
 int rollno;
 float marks;
public:
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
};
int main()
{
Student s;
s.input();
s.display();
return 0;
}






