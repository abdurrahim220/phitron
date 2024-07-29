#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int a[], int n)
{
    int i, j, tmp;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
};

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

    bubble_sort(arr, n);
    cout << "After the bubble sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}