#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k = 1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        k++;
        cout << endl;
    }
    return 0;
}