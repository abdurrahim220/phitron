#include <bits/stdc++.h>
using namespace std;
void number(int n, int i)
{
    if (i == n+1)
        return;
    cout << i << endl;
    number(n, i + 1);
}
int main()
{
    int n;
    cin >> n;

    number(n, 1);

    return 0;
}