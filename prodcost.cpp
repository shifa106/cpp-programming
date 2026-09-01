#include <iostream>
#include <string>
using namespace std;

class Product
{
    int id, quantity;
    string name;
    float price;

public:

    // 1. Default Constructor
    Product()
    {
        id = 0;
        name = "Unknown";
        quantity = 0;
        price = 0;
    }

    // 2. Parameterized Constructor
    Product(int i, string n, int q, float p)
    {
        id = i;
        name = n;
        quantity = q;
        price = p;
    }

    // 3. Copy Constructor
    Product(const Product &p)
    {
        id = p.id;
        name = p.name;
        quantity = p.quantity;
        price = p.price;
    }


    void input()
    {
        cout << "Enter Product ID: ";
        cin >> id;

        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, name);

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price: ";
        cin >> price;
    }

 
    void display()
    {
        float totalCost = quantity * price;

        cout << "\n--- Product Details ---" << endl;
        cout << "ID          : " << id << endl;
        cout << "Name        : " << name << endl;
        cout << "Quantity    : " << quantity << endl;
        cout << "Price       : " << price << endl;
        cout << "Total Cost  : " << totalCost << endl;
    }
};

int main()
{
  
    Product p;
    p.input();
    p.display();

    return 0;
}
