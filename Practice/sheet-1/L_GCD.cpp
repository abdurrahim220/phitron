#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, m;
    cin >> a >> b;
    if (a > b)
        swap(a, b);
    // for (int i = 1; i <= min(a, b); i++)
    for (int i = a; i >= 1; i--)

    {
        if (a % i == 0 && b % i == 0)
        {
            // m = i;
            cout << i << endl;
            break;
        }
    }
    // cout << m;

    return 0;
}