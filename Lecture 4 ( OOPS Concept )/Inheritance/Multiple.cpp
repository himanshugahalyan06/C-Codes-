#include <bits/stdc++.h>
using namespace std;

class a
{

public:
    string Account_Number;
};
class b
{

public:
    string User_name;
};
class c : public a, public b
{
public:
    void display()
    {
        cout << "The Account_Number is: " << Account_Number << endl
             << "The User name is: " << User_name << endl;
    }
};

int main()
{
    c C1;
    C1.Account_Number = "CNRB000485";
    C1.User_name = "Himanshu_06_@_01";
    C1.display();
}