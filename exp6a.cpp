#include <iostream>
using namespace std;

class Area
{
public:
    // Area of a square
    int calculateArea(int side)
    {
        return side * side;
    }

    // Area of a rectangle
    int calculateArea(int length, int breadth)
    {
        return length * breadth;
    }

    // Area of a circle
    float calculateArea(float radius)
    {
        return 3.14f * radius * radius;
    }
};

int main()
{
    Area a;

    cout << "Area of Square: "
         << a.calculateArea(5) << endl;

    cout << "Area of Rectangle: "
         << a.calculateArea(5, 4) << endl;

    cout << "Area of Circle: "
         << a.calculateArea(3.0f) << endl;

    return 0;
}