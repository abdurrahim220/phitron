#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    while (q--)
    {
        int x;
        cin >> x;
        bool flag = false;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] == x)
            {
                flag = true;
                break;
            }
            else if (a[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     if (a[i] == x)
        //     {
        //         flag = true;
        //     }
        // }
        if (flag == true)
        {
            cout << "found" << endl;
        }
        else
            cout << "not found" << endl;
    }

    return 0;
}