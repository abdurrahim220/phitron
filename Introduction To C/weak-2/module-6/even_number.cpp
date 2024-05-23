#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    if (n == 1)
    {
        cout << "-1" << endl;
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                cout << i << endl;
            }
            else
            {
            }
        }
    }

    return 0;
}