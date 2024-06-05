#include <bits/stdc++.h>
using namespace std;

// using recursive way

int getReverse(int num, int rev)
{
    if (num == 0)
    {
        return rev;
    }

    int rem = num % 10;

    rev = rev * 10 + rem;

    return getReverse(num / 10, rev);
}

int main()
{
    int n;
    cin >> n;

    int rev = 0;

    int rem, temp = n;

    while (temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    // if (getReverse(n, rev) == n)
    if (rev == n)
    {
        cout << rev << endl;
        cout << "YES" << endl;
    }
    else
    {
        cout << rev << endl;
        cout << "NO" << endl;
    }

    return 0;
}