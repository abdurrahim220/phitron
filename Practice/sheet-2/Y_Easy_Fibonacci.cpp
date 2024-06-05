#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t1 = 0, t2 = 1, nextTerm;
    cin >> n;

    if (n >= 1) cout << t1;
    if (n >= 2) cout << " " << t2;

    for (int i = 2; i < n; i++)
    {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << " " << nextTerm;
    }
    cout << endl;

    return 0;
}
