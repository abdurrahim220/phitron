#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int x, y, t;
    cin >> x >> y >> t;

    int gcd_xy = gcd(x, y);

    if (t % gcd_xy == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}