#include <iostream>
using namespace std;

int liner_search(int a[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            return i;
        }asdf
    }
    i = -1;
    return i;
}

int main()
{
    int n, a[n], x;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the elements you want to find: " << endl;
    cin >> x;

    int i = liner_search(a, n, x);
    if (i == -1)
    {
        cout << x << " is not present in the array" << endl;
    }
    else
    {
        cout << x << " is present at index " << i << endl;
    }
    return 0;
}
