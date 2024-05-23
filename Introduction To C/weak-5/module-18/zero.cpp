#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    int a[row][col];
    int element = row * col;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] == 0)
            {
                count++;
            }
        }
    }

    if (element == count)
    {
        cout << "Zero matrix" << endl;
    }
    else
    {
        cout << "Not zero matrix" << endl;
    }

    // cout << count;

    return 0;
}