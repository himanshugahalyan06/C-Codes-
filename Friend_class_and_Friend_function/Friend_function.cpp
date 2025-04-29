#include <iostream>
using namespace std;

class bank
{
    string userid;
    int password;

    friend void set(bank &b1, string x, int y);

public:
    void display()
    {
        cout << userid << " " << password << endl;
    }
};

void set(bank &b1, string x, int y)
{
    b1.userid = x;
    b1.password = y;
}

int main()
{
    bank b1;

    set(b1, "xyz", 123);

    b1.display();

    return 0;
}

// freind function