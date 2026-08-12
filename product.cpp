#include<iostream>
#include<string>
using namespace std;

class Product
{
public:
int id;
string name;
int quantity;
float price;

void input()
{
cout<<"Enter product id:";
cin>>id;
cout<<"Enter Name:";
cin>>name;
cout<<"Enter Quantity:";
cin>>quantity;
cout<<"Enter price:";
cin>>price;
}
float totalcost()
 {
  return quantity*price;
 }
 void display()
 {
 cout<<"ID:"<<id<<endl;
 cout<<"name:"<<name<<endl;
 cout<<"quantity:"<<quantity<<endl;
 cout<<"price:"<<price<<endl;
 cout<<"total:"<<totalcost()<<endl;
 }
 };
 int main()
 {
 Product p;
 p.input();
 p.display();
 return 0;
 }
 


