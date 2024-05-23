#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, k;
    cin >> a >> b;
    cin >> k;
    int d = abs(a-b);
    if (k < d)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}