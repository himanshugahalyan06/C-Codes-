#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        cout << " " << v[i];
    }
}
