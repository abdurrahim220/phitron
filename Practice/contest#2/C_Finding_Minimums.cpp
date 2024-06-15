#include <bits/stdc++.h>
using namespace std;

void findMinimums(int n, int k, int numbers[])
{
    for (int i = 0; i < n; i += k)
    {
        int min_value = INT_MAX;
        for (int j = i; j < i + k && j < n; ++j)
        {
            if (numbers[j] < min_value)
            {
                min_value = numbers[j];
            }
        }
        cout << min_value;
        if (i + k >= n || i + k < n)
            cout << " ";
    }
    cout << endl;
}

int main()
{
    int n, k;
    cin >> n >> k;

    int numbers[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }

    findMinimums(n, k, numbers);

    return 0;
}