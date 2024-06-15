#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        vector<int> v2;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v2 = v;
        }

        sort(v.begin(), v.end());

        if (v2 == v)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}