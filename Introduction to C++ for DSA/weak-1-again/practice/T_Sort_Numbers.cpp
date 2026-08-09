#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a, b, c;
    cin >> a >> b >> c;

    long long int arr[3] = {a, b, c};

    sort(arr, arr + 3);
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;
    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}