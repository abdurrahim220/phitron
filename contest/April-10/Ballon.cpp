#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, t, n;
    cin >> t;
    cin >> n;
    int arr[n];
    for (i = 0; i < t; i++)
    {
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    int sum = 1;
    int num;
    for (i = 0; i < n; i++)
    {
        sum *= arr[i];
    }
    num = pow(2, 8);
    if (num == sum)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}