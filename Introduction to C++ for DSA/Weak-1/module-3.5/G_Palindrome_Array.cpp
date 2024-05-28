#include <bits/stdc++.h>
using namespace std;

int isPalidrome(long long int a[], int n)
{

    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        if (a[left] != a[right])
        {
            return 1;
        }
        left++;
        right--;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (isPalidrome(a, n))
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        }

    return 0;
}