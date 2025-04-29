#include <iostream>
using namespace std;

void printTable(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout<<"\n"<< i * n;
    }
    }

    int main()
    {
        int n;
        cout << "Enter the number: ";
        cin >> n;
        printTable(n);
    }
