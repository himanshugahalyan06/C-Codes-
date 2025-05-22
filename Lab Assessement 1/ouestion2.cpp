#include <bits/stdc++.h>
using namespace std;
int main()                                                      // Inverse of array 
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[v[i]] = i;
    }
    for (int num : arr)
    {
        cout << num << " ";
    }

    return 0;
}