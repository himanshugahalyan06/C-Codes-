#include <bits/stdc++.h>
using namespace std;

class a
{

public:
    string Account_Number;
    long long Bank_Balance;
};
class b : public a
{

public:
    string User_name;
};
class c : public b
{
public:
    void display()
    {
        cout << "The Account_Number is: " << Account_Number << endl
             << "The User name is: " << User_name << endl
             << "The Bank_Balance is: " << Bank_Balance << endl;
    }
};

int main()
{
    c C1;
    C1.Account_Number = "CNRB000485";
    C1.User_name = "Himanshu_06_@_01";
    C1.Bank_Balance = 10000000000000;
    C1.display();
}