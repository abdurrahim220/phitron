#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> v2(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }

    for (auto val : v2)
    {
        cout << val << " ";
    }
    for (auto val : v)
    {
        cout << val << " ";
    }
    return 0;
}