#include <bits/stdc++.h>
using namespace std;

class D
{

public:
    string name;
    float height;
};
class c1 : public D
{
public:
    string User_Name;
    string User_Id;
    void display()
    {
        cout << "The Name of the Student is: " << name << endl
             << "The height of the student is:" << height << endl;
    }
};

class c2 : public D
{
public:
    string Account_No;
    long long Bank_Balance;
};

class D1 : public c1, public c2
{
public:
    void display()
    {
        cout << "The User Name is: " << User_Name << endl
             << "The User ID is: " << User_Id << endl
             << "The Account No is: " << Account_No << endl
             << "The Bank Balance of User is: " << Bank_Balance << endl;
    }
};

int main()
{

    c1 c;
    c.name = "Himanshu Gahalyan";
    c.height = 6.1;
    c.display();

    D1 d;
    d.c1::name = "xyz"; // for ambiquity problem we use scope function ::   to write eg D1.A::function();
    d.Account_No = "CNRB00023006";
    d.Bank_Balance = 100000000000;
    d.User_Id = "Himanshu_06_Gahalyan";
    d.User_Name = "Himanshu__Gahalyan__06";
    d.display();
}