#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int m, a, b, c;
        cin >> m >> a >> b >> c;

        if (m % (a * b * c) == 0)
        {
            cout << m / (a * b * c) << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}