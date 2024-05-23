#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n;
    cin >> x >> n;

    float sum = 1 - (x / 100.0);
    float price = n / sum;
    cout << fixed << setprecision(2) << price << endl;

    return 0;
}