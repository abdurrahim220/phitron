#include <bits/stdc++.h>
using namespace std;
void digitNumber(int n)
{
    if (n < 10)
    {
        cout << n << " ";
        return;
    }
    digitNumber(n / 10);
    cout << n % 10 << " ";
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        digitNumber(n);
        cout << endl;
    }

    return 0;
}