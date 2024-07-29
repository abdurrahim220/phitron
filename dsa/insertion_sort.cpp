#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int a[], int n)
{
    int i, j, item;
    for (i = 0; i < n; i++)
    {
        item = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > item)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = item;
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array :";
    cin >> n;
    int arr[n];
    cout << "Input the index values : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertion_sort(arr, n);
    cout << "After the insertion sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}