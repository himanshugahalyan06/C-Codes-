#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> arr;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (v[i] != 0)
        {
            arr.push_back(v[i]);
        }
        else{
            count++;
        }
    }

    while (count--)
    {
        arr.push_back(0);
    }

    cout << "The resultant Vector is: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}
