#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    long long int sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum += arr[i];
    }
    cout << abs(sum) << endl;
    return 0;
}