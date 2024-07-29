#include <bits/stdc++.h>
using namespace std;

int binary_search(int a[], int n, int x)
{
    int left, right, mid;
    left = 0;
    right = n - 1;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (a[mid] == x)
        {
            return mid;
        }
        if (a[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
        return -1;
    };
}

int main()
{
    int n;
    cout << "Enter size of the array" << endl;
    cin >> n;
    int arr[n];
    cout << "Input the numbers:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number: " << endl;
    int x;
    cin >> x;
    cout << "After binary search:";
    cout << binary_search(arr, n, x) << endl;

    return 0;
}