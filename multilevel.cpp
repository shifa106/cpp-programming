#include<iostream>
using namespace std;

class Student
{
protected:
int rollno;
string name, dept;

public:
void get()
{
cout<<"Enter the roll no.:";
cin>>rollno;
cout<<"Enter your name:";
cin>>name;
cout<<"Enter your department:";
cin>>dept;
}
void display()
{
cout<<"\n Roll No.:"<<rollno<<endl;
cout<<"\n Name:"<<name<<endl;
cout<<"\n Department:"<<dept<<endl;
}
};
class Stud_exam:public Student
{
protected:
int m1,m2,m3,m4,m5;


public:
void get1()
{
cout<<"Enter marks for subject 1:";
cin>>m1;
cout<<"Enter marks for subject 2:";
cin>>m2;
cout<<"Enter marks for subject 3:";
cin>>m3;
cout<<"Enter marks for subject 4:";
cin>>m4;
cout<<"Enter marks for subject 5:";
cin>>m5;

}
void display1()
{
cout<<"Marks of subject 1:"<<m1<<endl;
cout<<"Marks of subject 2:"<<m2<<endl;
cout<<"Marks of subject 3:"<<m3<<endl;
cout<<"Marks of subject 4:"<<m4<<endl;
cout<<"Marks of subject 5:"<<m5<<endl;
cout<<"Total of your marks:"<<m1+m2+m3+m4+m5<<endl;
}
};
class Stud_result:public Stud_exam
{
public:
float per=(m1+m2+m3+m4+m5/500)*100;

void display2()
{
cout<<"Percentage of your marks is:"<<per<<endl;
}
};
int main()
{
Stud_result r;
r.get();
r.display();
r.get1();
r.display1();
r.display2();

return 0;
}


