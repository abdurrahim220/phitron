#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, k, a;
    cin >> n >> k >> a;
    long long product1 = (n * k) / a;
    double product2 = (n * k) / a, text = product2 - product1;
    if (text > 0)
    {
        cout << "double" << endl;
    }
    else if (product2 > 2147483647)
    {
        cout << "long long" << endl;
    }
    else
    {
        cout << "int" << endl;
    }

    return 0;
}