#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a - b == 1 || b - a == 1 || (a != 0 && b != 0 && a == b))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}