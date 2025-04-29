#include <bits/stdc++.h>
using namespace std;

class parent
{
public:
    int account_number;
    string name;
    long long bank_balance;
};

class child1 : public parent
{
public:
    void display()
    {
        cout << "The Name of the Owner is: " << name << endl;
    }
};

class child2 : public parent
{
public:
    void display1()
    {
        cout << "The Account Number of the Owner is: " << account_number << endl;
    }
};

class child3 : public parent
{
public:
    void display2()
    {
        cout << "The Bank Balance of the Oner is: " << bank_balance << endl;
    }
};

int main()
{

    child1 c1;
    child2 c2;
    child3 c3;
    c2.account_number = 666;
    c3.bank_balance = 1000000000;
    c1.name = "Himanshu Gahalyan";
    c1.display();
    c2.display1();
    c3.display2();

    
}