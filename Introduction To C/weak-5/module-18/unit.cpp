#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    int a[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }

    int flag = 1;
    if (row != col)
    {
        flag = 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                if (a[i][j] != 1)
                {
                    flag = 0;
                }

                continue;
            }
            if (a[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    flag == 1 ? cout << "Unite Diagonal" : cout << "Not Unite Diagonal";

    return 0;
}