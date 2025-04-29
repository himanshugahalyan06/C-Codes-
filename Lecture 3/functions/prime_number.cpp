#include <iostream>
using namespace std;

int main()
{
    bool flage = true;
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flage = false;
            break;
        }
    }
    if (flage)
    {
        cout << "Yes this a prime number" << endl;
    }
    else
    {
        cout << "Not a prime number" << endl;
    }
}