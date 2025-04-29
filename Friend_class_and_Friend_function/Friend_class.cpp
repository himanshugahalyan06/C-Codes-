#include <iostream>
using namespace std;

class bank
{
    string userid;
    int password;

    friend class apk; // Friend declaration

public:
    void display()
    {
        cout << userid << " " << password << endl;
    }
};

class apk
{
public:
    void set(bank &b1, string x, int y)
    {
        b1.userid = x;
        b1.password = y;
    }
};

int main()
{
    bank b;
    apk a1;
    a1.set(b, "xyz", 123);

    b.display();

    return 0;
}