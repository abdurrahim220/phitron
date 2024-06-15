#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    unordered_set<int> seen;
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        if (seen.find(v[i]) != seen.end())
        {
            flag = true;
            break;
        }
        seen.insert(v[i]);
    }

    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}