#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int flag = 1;

    if (n != m)
    {
        flag = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i == j && a[i][j] != 1) || (i + j == n - 1 && a[i][j] != 1))
            {
                flag = 0;
            }
            else if (i != j && i + j != n - 1 && a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
