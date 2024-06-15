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

    int m;
    cin >> m;
    vector<int> w(m);
    for (int i = 0; i < m; i++)
    {
        cin >> w[i];
    }
    int x;
    cin >> x;
    
    v.insert(v.begin() + x, w.begin(), w.end());

    for (auto val : v)
    {
        cout << val << " ";
    }
    return 0;
}