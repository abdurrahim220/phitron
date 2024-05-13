#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, k;
    cin >> n;
    int l = (n + 1) / 2 + 5;
    s = l - 1;
    k = 1;
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < s; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < k; j++)
        {
            cout << "*";
        }
        s--;
        k += 2;
        cout << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        for (int i = 0; i < ((l * 2) - 1 - n) / 2; i++)
        {
            cout << " ";
        }
        for (int i = 0; i < n; i++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}