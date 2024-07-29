#include <bits/stdc++.h>
using namespace std;

void selection_sort(int a[], int n)
{
    int i, j, index_min, temp;
    for (i = 0; i < n - 1; i++)
    {
        index_min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[index_min])
            {
                index_min = j;
            }
        }
        if (index_min != i)
        {
            temp = a[i];
            a[i] = a[index_min];
            a[index_min] = temp;
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

    selection_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}