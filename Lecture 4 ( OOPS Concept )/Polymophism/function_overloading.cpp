#include <bits/stdc++.h>
using namespace std;

class fun
{
public:
    void sum(int x, int y)
    {
        cout << x + y << endl;
    }

    void sum(int x, int y, int z)
    {
        cout << x + y + z << endl;
    }

    double sum(double x, double y)
    {
        return x + y;
    }

    double sum(double x, double y, double z)
    {
        return x + y + z;
    }
};
int main()
{
    fun f1;
    cout << "Here we call first sum function: ";
    f1.sum(10, 7);
    cout << "Here we call second sum function: ";
    f1.sum(10, 30, 29);
    cout << "Here we call third sum function: ";
    cout << f1.sum(10.5, 11.2) << endl;
    cout << "Here we call fourth function: ";
    cout << f1.sum(11.2, 23.5, 45.6);

    //  we use f suffix because in c++ complier treats a float value without suffix as a double value so we have to use f as suffix in c++ in oops to make taht  value as float
}