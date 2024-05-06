#include <bits/stdc++.h>
using namespace std;

void max_min(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    max_min(arr, n);

    return 0;
}

void max_min(int arr[], int n)
{
    int max_val = arr[0];
    int min_val = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max_val)
        {
            max_val = arr[i];
        }
        if (arr[i] < min_val)
        {
            min_val = arr[i];
        }
    }
    cout << min_val << " " << max_val << endl;
}