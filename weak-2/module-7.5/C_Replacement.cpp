#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int arr[t];
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
        {
            arr[i] = 0;
        }
        else
        {
            if (arr[i] > 0)
            {
                arr[i] = 1;
            }
            else
            {
                arr[i] = 2;
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        cout << arr[i];
        if (i != t - 1)
        {
            cout << " ";
        }
    }

    return 0;
}