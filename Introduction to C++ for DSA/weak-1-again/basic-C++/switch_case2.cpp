#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        switch (n % 2)
        {
        case 0:
            cout << "even" << endl;
            break;
        case 1:
            cout << "odd" << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}