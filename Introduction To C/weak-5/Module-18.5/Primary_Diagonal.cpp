#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, col;
    cin >> row >> col;
    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum1 += arr[i][j];
            }
            if (i + j == row - 1){
                sum2 += arr[i][j];
            }
        }
    }
    cout << sum1 << endl;
    cout << sum2 << endl;

    return 0;
}