#include <bits/stdc++.h>
using namespace std;

void recursion(int n, int i)
{
    if (i == n)
        return;
    cout << "I love Recursion" << endl;
    recursion(n, i + 1);
}

int main()
{

    int n;
    cin >> n;
    recursion(n, 0);
    return 0;
}