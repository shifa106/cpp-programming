#include<iostream>
using namespace std;

class shape
{
public:
virtual  void area()
{
cout<<"Area of the shape is:"<<endl;
}
};

class rectangle:public shape
{
int a;
int b;
public:
rectangle(int x,int y)
{
a=x;
b=y;
}
void area() override
{
    cout<<"Area of the rectangle:"<<a*b<<endl;
}
};

class circle:public shape
{
float r;
public:
circle(float x)
{
r=x;
}
void area() override
{
  cout<<"Area of the circle is:"<<3.14*r*r<<endl;
  
}
};

class square:public shape
{
int a;
public:

square(int x)
{
a=x;
}
void area() override
{
   cout<<"Area of square is:"<<a*a<<endl;
}
};

int main()
{
int x,y;
 cout<<"Enter the length and breadth of the rectangle:"<<endl;
 cin>>x>>y;
 rectangle r(x,y);
 
 float z;
 cout<<"Enter the radius of the circle:"<<endl;
 cin>>z;
 circle c(z);
 
 int p;
 cout<<"Enter the side of the square:"<<endl;
 cin>>p;
 square s(p);
 
 shape *sh;
 sh=&r;
 sh->area();
 
 sh=&c;
 sh->area();
 
 sh=&s;
 sh->area();
 
 return 0;
 }
 




