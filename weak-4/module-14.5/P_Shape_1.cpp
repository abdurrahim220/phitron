#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    k = n-1;
    for (int i = 1; i <= n; i++)
    {
        printf("*");
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        k--;
        printf("\n");
    }

    return 0;
}