#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Overloading + operator
    Complex operator+(Complex &obj)
    {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;
    c3.display(); // Output: 4 + 6i
    return 0;
}