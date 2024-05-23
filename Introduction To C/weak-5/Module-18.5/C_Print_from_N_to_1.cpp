#include <bits/stdc++.h>
using namespace std;

void reverserNumber(int n)
{
    if (n == 0)
        return;
    cout << n;
    if (n > 1)
    {
        cout << " ";
    }
    reverserNumber(n - 1);
}
int main()
{
    int n;
    cin >> n;
    reverserNumber(n);

    return 0;
}