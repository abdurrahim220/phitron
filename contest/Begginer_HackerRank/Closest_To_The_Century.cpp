#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int min = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= 100 && arr[i] >= min)
            {
                min = arr[i];
            }
        }

        cout << min << endl;
    }

    return 0;
}