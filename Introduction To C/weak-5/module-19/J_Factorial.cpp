#include <bits/stdc++.h>
using namespace std;

long long int fact(long long int n)
{
    if (n == 0)
        return 1;
    long long int ans = fact(n - 1);
    return ans * n;
}
int main()
{
    long long int n;
    cin >> n;
    // int i;
    long long int factorial = fact(n);
    // while (n < 0)
    // {
    //     factorial *= n;
    //     i++;
    // }
    // for (i = 1; i <= n; i++)
    // {
    //     factorial *= i;
    // }
    cout << factorial << endl;

    return 0;
}