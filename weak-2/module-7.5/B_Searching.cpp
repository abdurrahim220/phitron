#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long long arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    int n;
    cin >> n;
    int ans = -1;
    for (int i = 0; i < t; i++)
    {

        if (arr[i] == n)
        {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}