#include <bits/stdc++.h>
using namespace std;

long long int maximum(long long int arr[], int n, int i)
{

    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] >= max)
    //     {
    //         max = arr[i];
    //     }
    // }
    if (i == n)
    {
        return INT_MIN;
    }
    int max = maximum(arr, n, i + 1);
    if (arr[i] >= max)
    {
        return max = arr[i];
    }
    else
    {
        return max;
    }
}

int main()
{
    int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = maximum(arr, n, 0);
    cout << max << endl;

    return 0;
}