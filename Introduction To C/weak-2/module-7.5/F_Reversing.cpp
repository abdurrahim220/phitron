#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    cin >> t;
    int arr[t];
    for (i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    for (i = t - 1; i >= 0; i--)
    {
        cout << arr[i];
        if (i != t)
        {
            cout << " ";
        }
    }
    return 0;
}