#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    char s, q;
    cin >> a >> s >> b >> q >> c;

    if (s == '+')
    {
        d = a + b;
    }
    else if (s == '-')
    {
        d = a - b;
    }
    else if (s == '*')
    {
        d = a * b;
    }

    if (d == c)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << d << endl;
    }

    return 0;
}