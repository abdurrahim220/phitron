#include <bits/stdc++.h>
using namespace std;
void summation(int i, int n, long long int arr[], long long int &sum)
{

    if (i == n)
        return;
    sum += arr[i];
    summation(i + 1, n, arr, sum);
}
int main()
{
    int n;
    cin >> n;
    long long int arr[n];
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    summation(0, n, arr, sum);
    cout << sum << endl;

    return 0;
}