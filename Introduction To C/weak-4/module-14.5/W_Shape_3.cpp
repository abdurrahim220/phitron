#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, k;
    cin >> n;
    k = 1;
    s = n - 1;
    for (int i = 1; i <= (2 * n); i++)
    {
        for (int j = 1; j <= s; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= k; j++)
        {
            cout << "*";
        }

        if (i < n)
        {
            s--;
            k += 2;
        }
        else if(i>n)
        {
           
            s++;
            k -= 2;
        }

        cout << endl;
    }

    return 0;
}