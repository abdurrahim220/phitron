#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, prime, count;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        prime = 1;
        if (i == 1)
        {
            prime = 0;
        }

        count = i / 2;

        for (int j = 2; j <= count; j++)
        {
            if (i % j == 0)
            {
                prime = 0;
            }
        }
        if (prime == 1)
        {
            cout << i << " ";
        }
    }

    return 0;
}