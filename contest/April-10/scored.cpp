#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, t,n, arr[2000];
    cin >> t;
    cin>>n;
    for (i = 0; i < t; i++)
    {
        
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    for (i = 0; i < t; i++)
    {
        cout << arr[i];
    }
}
