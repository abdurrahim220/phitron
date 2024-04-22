#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    cin >> t;
    int arr[t];
    for (i = 1; i <= t; i++)
    {
        cin >> arr[i];
    }
    int low = INT_MAX;
    int pos = 0;
    for (i = 1; i <= t; i++)
    {
        if (arr[i] < low)
        {
            low = arr[i];
            pos = i;
        }
    }
    cout << low << " " << pos << endl;
    return 0;
}