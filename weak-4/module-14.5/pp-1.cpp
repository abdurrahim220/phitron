#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k = 1, s;
    cin >> n;
    s = n - 1;
    for (int i = 0; i < n; i++)
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
        k++;

        cout << endl;
    }

    return 0;
}