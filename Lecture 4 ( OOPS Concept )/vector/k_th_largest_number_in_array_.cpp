#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of vector: ";
    cin >> n;
    cout << "Enter the value of k: ";
    int k;
    cin >> k;
    vector<int> v(n);
    cout << "Enter the elements od the Vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << v[n - k] << endl;
}