#include <bits/stdc++.h>
using namespace std;

int n;
long long int arr[1000];

void evenReverse(int i)
{
    if (i >= n)
        return;
    evenReverse(i + 2);
    cout << arr[i] << " ";
}
int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    evenReverse(0);

    return 0;
}