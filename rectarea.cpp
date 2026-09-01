#include <iostream>
using namespace std;

class Rectangle
{
    float length, breadth;

public:

    // 1. Default Constructor
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    // 2. Parameterized Constructor
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    // 3. Copy Constructor
    Rectangle(const Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }


    void display()
    {
        float area = length * breadth;

        cout << "Length  : " << length << endl;
        cout << "Breadth : " << breadth << endl;
        cout << "Area    : " << area << endl;
    }
};

int main()
{
    float l, b;

    cout << "Enter length: ";
    cin >> l;
    cout << "Enter breadth: ";
    cin >> b;
    Rectangle r(l, b);
    r.display();

    return 0;
}
