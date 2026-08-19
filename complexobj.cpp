#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    // Parameterized constructor
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Addition
    Complex add(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    // Subtraction
    Complex sub(Complex c)
    {
        Complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3, 4);
    Complex c2(5, 6);

    Complex c3 = c1.add(c2);
    Complex c4 = c1.sub(c2);

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "Addition: ";
    c3.display();

    cout << "Subtraction: ";
    c4.display();

    return 0;
}
