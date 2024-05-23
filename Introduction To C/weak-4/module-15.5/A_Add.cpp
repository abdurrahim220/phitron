#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;
    int d = sum(a, b);
    cout << d << endl;
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}