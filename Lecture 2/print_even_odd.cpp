#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << endl;
    cout << "Enter the number ";
    cin >> n;
    cout << endl;
    cout << "Even Numbers " << endl;
    cout << " " << endl;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << "Even Numbers are ";
            cout << i << endl;
        }
    }
    cout << endl;
    cout << "Odd Numbers " << endl;
    cout << endl;

    for (int j = 0; j <= n; j++)
    {
        if (j % 2 != 0)
        {
            cout << "Odd numbers are ";
            cout << j << endl;
        }
    }
}