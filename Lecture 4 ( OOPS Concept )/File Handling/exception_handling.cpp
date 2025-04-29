#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the first number: " << endl;
    cin >> a;
    cout << "Enter the second number: " << endl;
    cin >> b;

    try
    {
        if (b == 0)
        {

            throw string("Not Valid");
        }
        else
        {
            cout << "The Result is: " << a / b << endl;
        }
    }
    catch (string ex)
    {
        cout << ex << endl;
    }
}


// int main()
// {
//     int a, b;
//     cout << "Enter the first number: " << endl;
//     cin >> a;
//     cout << "Enter the second number: " << endl;
//     cin >> b;

//     try
//     {
//         if (b == 0)
//         {
//             throw "Not Valid"; // throws const char*
//         }
//         else
//         {
//             cout << "The Result is: " << a / b << endl;
//         }
//     }
//     catch (const char *ex)
//     { // catches const char*
//         cout << ex << endl;
//     }

//     return 0;
// }
