#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, sum = 0;
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}