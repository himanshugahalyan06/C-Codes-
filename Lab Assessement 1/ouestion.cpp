#include <bits/stdc++.h>
using namespace std;

class bank
{
private:
    string user_id;
    string password;
    long long bank_banalnce;

public:
    void setter(string x, string y, long long z)
    {
        user_id = x;
        password = y;
        bank_banalnce = z;
    }

    void display()
    {
        string sk;
        cin >> sk;
        if (sk == "H06")
        {
            cout << user_id << endl
                 << password << endl
                 << bank_banalnce << endl;
        }
        else
        {
            cout << "Acces denied! Entered Wrong Key " << endl;
        }
    }
};

int main()
{

    bank b1;

    b1.setter("Himanshu_06", "Himanshu123@06", 1000000000000);

    b1.display();

    return 0;
}